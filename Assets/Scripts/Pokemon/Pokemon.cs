using UnityEngine;
using System.Collections;

public class Pokemon : MonoBehaviour
{
    #region Internal Variables Declaration

    internal int NationalDexNumber { get; set; }

    internal string PokemonName { get; set; }

    internal string PokemonAbility { get; set; }
    internal string PokemonNature { get; set; }
    internal string PokemonHeldItem { get; set; }
    internal string PokemonSex { get; set; }

    internal float PokemonHeight { get; set; }
    internal float PokemonWeight { get; set; }

    internal int IvHP { get; set; }
    internal int IvAttack { get; set; }
    internal int IvDefense { get; set; }
    internal int IvSpAtk { get; set; }
    internal int IvSpDef { get; set; }
    internal int IvSpeed { get; set; }

    internal int CurrHP { get; set; }
    internal int CurrAttack { get; set; }
    internal int CurrDefense { get; set; }
    internal int CurrSpAtk { get; set; }
    internal int CurrSpDef { get; set; }
    internal int CurrSpeed { get; set; }

    internal int StatHP { get; set; }
    internal int StatAttack { get; set; }
    internal int StatDefense { get; set; }
    internal int StatSpAtk { get; set; }
    internal int StatSpDef { get; set; }
    internal int StatSpeed { get; set; }

    internal int PokemonLvl { get; set; }

    internal bool Shiny { get; set; }

    #endregion

    private int BaseHP { get; set; }
    private int BaseAttack { get; set; }
    private int BaseDefense { get; set; }
    private int BaseSpAtk { get; set; }
    private int BaseSpDef { get; set; }
    private int BaseSpeed { get; set; }

    // Use this for initialization
    void Start ()
    {
	
	}
	
	// Update is called once per frame
	void Update ()
    {
	
	}
}
