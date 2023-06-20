#pragma once
#include <iostream>
#include "cPersonaje.h"
#include "cPokemon.h"


class NPC :public Personaje
{
	private:
	
		Pokemon Pokemon1, Pokemon2, Pokemon3, Pokemon4, Pokemon5, Pokemon6;
		std::string Sprite_MundoNPC, Sprite_CombateNPC,Nombre;



	public:

		NPC()
		{
			Pokemon1;
			Pokemon2;
			Pokemon3;
			Pokemon4;
			Pokemon5;
			Pokemon6;
			Sprite_CombateNPC;
			Sprite_MundoNPC;

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

		void Asignar_Sprite(std::string, std::string);

		void Asignar_Nombre(std::string);

		void Equipo_PokemonNPC();


};