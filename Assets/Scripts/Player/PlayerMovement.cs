using UnityEngine;
using System.Collections;

/// <summary>
/// Class responsable for the Player's Movement.
/// </summary>
public class PlayerMovement : MonoBehaviour
{
    enum direction
    {
        UP,
        RIGHT,
        DOWN,
        LEFT,
        UNDEFINED
    }

    private const int IDLE_POSITION_IN_SPRITESHEET = 7;

    public Transform    pawn;
    public Transform    pawnReflection;
    public Transform    hitBox;

    public SpriteRenderer pawnSprite;
    public SpriteRenderer pawnReflectionSprite;

    public MapCollider currentMap;

    private Sprite[] spriteSheet;
    private Sprite[] mountSpriteSheet;

    public bool moving  = false;
    public bool idle    = true;
    public bool running = false;
    public bool surfing = false;

    // Parameters
    public float walkSpeed = 0.3f; // Time to walk one square in seconds
    public float runSpeed = 0.14f;
    public float surfSpeed = 0.2f;
    public float speed;
    public bool canReceiveInput = true;
    
    private direction lastDirection     = direction.UNDEFINED;
    private direction currentDirection  = direction.UNDEFINED;

    private string animationName;

    private int frame;
    private int frames;
    private int framesPerSec;
    private float secPerFrame;
    private bool animPause;
    private bool overrideAnimPause;

    public int walkFPS = 7;
    public int runFPS = 12;

    void Awake()
    {
        pawn            = transform.Find("Pawn");
        pawnReflection  = transform.Find("PawnReflection");
        hitBox          = transform.Find("Player_Transparent");

        pawnSprite              = pawn.GetComponent<SpriteRenderer>();
        pawnReflectionSprite    = pawnReflection.GetComponent<SpriteRenderer>();

        canReceiveInput = true;
    }

    /// <summary>
    /// Use this for initialization.
    /// </summary>
    void Start()
    {
        speed = walkSpeed;

        canReceiveInput = true;

        spriteSheet = Resources.LoadAll<Sprite>("Sprites/npc/OfficerJenny");

        pawnSprite.sprite = spriteSheet[IDLE_POSITION_IN_SPRITESHEET];

        updateAnimation("walk", walkFPS);
        StartCoroutine("animateSprite");
        animPause = true;

        StartCoroutine(control());
    }

    /// <summary>
    /// Update is called once per frame.
    /// </summary>
    void Update()
    {
        // Check for new inputs, so that the new direction can be set accordingly
        if (Input.GetButton("Horizontal"))
        {
            if (Input.GetAxisRaw("Horizontal") > 0)
            {
                currentDirection = direction.RIGHT;
            }
            else if (Input.GetAxisRaw("Horizontal") < 0)
            {
                currentDirection = direction.LEFT;
            }
        }
        else if (Input.GetButton("Vertical"))
        {
            if (Input.GetAxisRaw("Vertical") > 0)
            {
                currentDirection = direction.UP;
            }
            else if (Input.GetAxisRaw("Vertical") < 0)
            {
                currentDirection = direction.DOWN;
            }
        }
        else
        {
            currentDirection = direction.UNDEFINED;
        }
    }

    private IEnumerator control() 
    {
        while(true)
        {
            // Checks if there is any movement to be made
            if (currentDirection != direction.UNDEFINED)
            {
                lastDirection = currentDirection;

                Vector3 directionVector = getForwardVectorRaw();

                yield return StartCoroutine(move(directionVector));
            }
            else
            {
                animPause = true;
            }

            yield return null;
        }
    }

    public IEnumerator move(Vector3 movement)
    {
        if (movement != Vector3.zero)
        {
            Vector3 startPosition = hitBox.position;
            moving = true;
            float increment = 0;

            animPause = false;
            while (increment < 1f)
            {
                //increment increases slowly to 1 over the frames
                increment += (1f / speed) * Time.deltaTime;

                //speed is determined by how many squares are crossed in one second
                if (increment > 1)
                {
                    increment = 1;
                }

                transform.position = startPosition + (movement * increment);
                hitBox.position = startPosition + movement;
                yield return null;
            }
        }
    }

    public Vector3 getForwardVectorRaw()
    {
        return getForwardVectorRaw(currentDirection);
    }

    private Vector3 getForwardVectorRaw(direction dir)
    {
        //set vector3 based off of direction
        Vector3 forwardVector = new Vector3(0, 0, 0);

        if (dir == direction.UP)
        {
            forwardVector = new Vector3(0, 0, 1f);
        }
        else if (dir == direction.RIGHT)
        {
            forwardVector = new Vector3(1f, 0, 0);
        }
        else if (dir == direction.DOWN)
        {
            forwardVector = new Vector3(0, 0, -1f);
        }
        else if (dir == direction.LEFT)
        {
            forwardVector = new Vector3(-1f, 0, 0);
        }
        return forwardVector;
    }

    private Vector3 getForwardVector()
    {
        return getForwardVector(currentDirection, true);
    }

    private Vector3 getForwardVector(direction dir)
    {
        return getForwardVector(dir, true);
    }

    private Vector3 getForwardVector(direction dir, bool checkForBridge)
    {
        Vector3 movement = getForwardVectorRaw(dir);

        return movement;
    }

    public void updateAnimation(string newAnimationName, int fps)
    {
        if (animationName != newAnimationName)
        {
            animationName = newAnimationName;

            framesPerSec = fps;

            secPerFrame = 1f / (float)framesPerSec;

            frames = Mathf.RoundToInt((float)spriteSheet.Length / 3f);

            if (frame >= frames)
            {
                frame = 1;
            }
        }
    }

    private IEnumerator animateSprite()
    {
        int[] frameOrder = {0, 2, 1, 1};

        const int spriteFrames = 3;

        frame = 0;
        frames = 3;
        framesPerSec = walkFPS;
        secPerFrame = 1f / (float)framesPerSec;
        
        while (true)
        {
            for (int i = 0; i < frames; i++)
            {
                if (animPause && frame % 2 != 0 && !overrideAnimPause)
                {
                    frame -= 1;
                }

                if (lastDirection != direction.UNDEFINED)
                {
                    pawnSprite.sprite = spriteSheet[(int)lastDirection * spriteFrames + frameOrder[frame]];
                }

                pawnReflectionSprite.sprite = pawnSprite.sprite;

                yield return new WaitForSeconds(secPerFrame / 3f);
            }

            if (!animPause || overrideAnimPause)
            {
                frame += 1;

                if (frame >= spriteFrames)
                {
                    frame = 1;
                }
            }
        }
    }
}