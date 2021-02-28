using UnityEngine;
using System.Collections;

/// <summary>
/// Class responsable for the Player's Movement.
/// </summary>
public class PlayerMovement : MonoBehaviour
{
    public Transform pawn;
    public Transform pawnReflection;
    public SpriteRenderer pawnSprite;
    public SpriteRenderer pawnReflectionSprite;
    public MapCollider currentMap;
    public Transform hitBox;

    //private Rigidbody2D m_rBody;
    //private Animator m_anim;

    public bool moving = false;
    public bool idle = true;
    public bool running = false;
    public bool surfing = false;

    // Parameters
    public float walkSpeed = 0.3f; // Time to walk one square in seconds
    public float runSpeed = 0.14f;
    public float surfSpeed = 0.2f;
    public float speed;
    public bool canReceiveInput = true;
    public int lastDirection = 2; // Indicates the direction the player sprite must be facing, even if movement is not happening
    public int currentDirection = -1; // Indicates the current direction input by the user. It is -1 if there is no input

    private string animationName;
    private Sprite[] spriteSheet;
    private Sprite[] mountSpriteSheet;

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
        canReceiveInput = true;

        pawn = transform.Find("Pawn");
        pawnReflection = transform.Find("PawnReflection");
        pawnSprite = pawn.GetComponent<SpriteRenderer>();
        pawnReflectionSprite = pawnReflection.GetComponent<SpriteRenderer>();

        hitBox = transform.Find("Player_Transparent");
    }

    /// <summary>
    /// Use this for initialization.
    /// </summary>
    void Start()
    {
        //m_rBody = GetComponent<Rigidbody2D>();
        //m_anim = GetComponent<Animator>();

        speed = walkSpeed;
        canReceiveInput = true;

        spriteSheet = Resources.LoadAll<Sprite>("Sprites/PlayerSprites/m_hgss_walk");

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
        /*Vector2 movement_vector = new Vector2(Input.GetAxisRaw("Horizontal"), Input.GetAxisRaw("Vertical"));

        if (movement_vector != Vector2.zero)
        { 
            m_anim.SetBool("isWalking", true);

            m_anim.SetFloat("input_x", movement_vector.x);
            m_anim.SetFloat("input_y", movement_vector.y);
        }
        else
            m_anim.SetBool("isWalking", false);

        m_rBody.MovePosition(m_rBody.position + movement_vector * Time.deltaTime);*/

        // Check for new inputs, so that the new direction can be set accordingly
        if (Input.GetButton("Horizontal"))
        {
            if (Input.GetAxisRaw("Horizontal") > 0)
            {
                currentDirection = 1;
            }
            else if (Input.GetAxisRaw("Horizontal") < 0)
            {
                currentDirection = 3;
            }
        }
        else if (Input.GetButton("Vertical"))
        {
            if (Input.GetAxisRaw("Vertical") > 0)
            {
                currentDirection = 0;
            }
            else if (Input.GetAxisRaw("Vertical") < 0)
            {
                currentDirection = 2;
            }
        }
        else
        {
            currentDirection = -1;
        }
    }

    private IEnumerator control() 
    {
        while(true)
        {
            // Checks if there is any movement to be made
            if (currentDirection >= 0)
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

    public Vector3 getForwardVectorRaw(int direction)
    {
        //set vector3 based off of direction
        Vector3 forwardVector = new Vector3(0, 0, 0);
        if (direction == 0)
        {
            forwardVector = new Vector3(0, 0, 1f);
        }
        else if (direction == 1)
        {
            forwardVector = new Vector3(1f, 0, 0);
        }
        else if (direction == 2)
        {
            forwardVector = new Vector3(0, 0, -1f);
        }
        else if (direction == 3)
        {
            forwardVector = new Vector3(-1f, 0, 0);
        }
        return forwardVector;
    }

    public Vector3 getForwardVector()
    {
        return getForwardVector(currentDirection, true);
    }

    public Vector3 getForwardVector(int direction)
    {
        return getForwardVector(direction, true);
    }

    public Vector3 getForwardVector(int direction, bool checkForBridge)
    {
        Vector3 movement = getForwardVectorRaw(direction);

        return movement;
    }

    public void updateAnimation(string newAnimationName, int fps)
    {
        if (animationName != newAnimationName)
        {
            animationName = newAnimationName;
            framesPerSec = fps;
            secPerFrame = 1f / (float)framesPerSec;
            frames = Mathf.RoundToInt((float)spriteSheet.Length / 4f);
            if (frame >= frames)
            {
                frame = 0;
            }
        }
    }

    private IEnumerator animateSprite()
    {
        frame = 0;
        frames = 4;
        framesPerSec = walkFPS;
        secPerFrame = 1f / (float)framesPerSec;
        while (true)
        {
            for (int i = 0; i < 4; i++)
            {
                if (animPause && frame % 2 != 0 && !overrideAnimPause)
                {
                    frame -= 1;
                }
                pawnSprite.sprite = spriteSheet[lastDirection * frames + frame];
                pawnReflectionSprite.sprite = pawnSprite.sprite;
                yield return new WaitForSeconds(secPerFrame / 4f);
            }
            if (!animPause || overrideAnimPause)
            {
                frame += 1;
                if (frame >= frames)
                {
                    frame = 0;
                }
            }
        }
    }
}