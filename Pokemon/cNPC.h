#pragma once
#include <iostream>
#include "cPersonaje.h"
#include "cPokemon.h"


class NPC :public Personaje
{
	private:
	
		Pokemon Pokemon1, Pokemon2, Pokemon3, Pokemon4, Pokemon5, Pokemon6;
	
	public:

		NPC()
		{
			Pokemon1;
			Pokemon2;
			Pokemon3;
			Pokemon4;
			Pokemon5;
			Pokemon6;

		};

		void setPokemon1(Pokemon);
		Pokemon getPokemon1();

		void setPokemon2(Pokemon);
		Pokemon getPokemon2();

		void setPokemon3(Pokemon);
		Pokemon getPokemon3();

		void setPokemon4(Pokemon);
		Pokemon getPokemon4();

		void setPokemon5(Pokemon);
		Pokemon getPokemon5();

		void setPokemon6(Pokemon);
		Pokemon getPokemon6();

		void Asignar_Sprite();

		void Asignar_Nombre();

		void Equipo_PokemonNPC();


};