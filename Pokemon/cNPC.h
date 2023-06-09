#pragma once
#include <iostream>
#include "cPersonaje.h"
//#include "cPokemon.h"


class NPC :protected Personaje
{
public:
	
		int NPC_X, NPC_Y;
		std::string Interaccion;
		std::string Sprite_MundoNPC, Sprite_CombateNPC,Nombre;
		Pokemon EquipoPokemon[6];

	

		NPC()
		{
			NPC_X = 0;
			NPC_Y = 0;
			Interaccion = "Saludos, jugador.";
			Sprite_CombateNPC;
			Sprite_MundoNPC;

		};

		void setNPC_x(int);
		int getNPC_x();

		void setNPC_y(int);
		int getNPC_y();

		void Asignar_EquipoPokemon(Pokemon, Pokemon, Pokemon, Pokemon, Pokemon, Pokemon);
		
		std::string getInteraccion();

		void Asignar_Sprite(std::string, std::string);

		void Asignar_Nombre(std::string);

};