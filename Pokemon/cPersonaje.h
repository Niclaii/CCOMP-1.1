#pragma once
#include <iostream>
#include <string>
#include "cPokemon.h"

class Personaje
{
protected:
	std::string Sprite_Mundo, Sprite_Combate, NombrePersonaje;

	Pokemon EquipoPokemon[6];


public:

	Personaje()
	{
		Sprite_Mundo;
		Sprite_Combate;
		NombrePersonaje;
		EquipoPokemon[6];
	};

	void setSpriteMundo();
	std::string getSpriteMundo();

	void setSpriteCombate();
	std::string getSpriteCombate();

	void setNombrePersonaje();
	std::string getNombrePersonaje();

	void Dialogo_Interaccion();

	void Asignar_Sprite(std::string, std::string);

	virtual void Asignar_EquipoPokemon(Pokemon , Pokemon , Pokemon , Pokemon , Pokemon , Pokemon);


};