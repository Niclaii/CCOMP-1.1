#pragma once
#include <iostream>
#include <string>
#include "cPokemon.h"

class Personaje
{
	private:
		std::string Sprite_Mundo, Sprite_Combate, NombrePersonaje;

		Pokemon EquipoPokemon;


	public:

		Personaje()
		{

			Sprite_Mundo;
			Sprite_Combate;
			NombrePersonaje;

		};

		void Dialogo_Interaccion();

		void Asignar_Sprite(std::string, std::string);

		void Asignar_EquipoPokemon(Pokemon);


};