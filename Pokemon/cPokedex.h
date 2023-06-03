#pragma once
#include <iostream>
#include <string>
#include "cPokemon.h"

class Pokedex : public Pokemon
{
	private:
	
		std::string Huella, Descripcion;

	public:
		Pokedex(std::string Huella, std::string Descripcion);

		//void RegistrarPokedex(int nPoke, std::string tipo, std::string nombre, int nivel);





};