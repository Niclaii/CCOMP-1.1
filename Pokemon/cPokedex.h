#pragma once
#include <iostream>
#include <string>
#include "cPokemon.h"

class Pokedex
{
private:

	std::string Huella, Descripcion, Tipo, Nombre;

public:
	Pokedex()
	{
		Huella = " ";
		Descripcion = " ";
		Tipo = " ";
		Nombre = " ";
		

	};

	std::string getTipo();
	void setTipo(std::string);

	std::string getHuella();
	void setHuella(std::string);

	std::string getDescripcion();
	void setDescripcion(std::string);

	std::string getNombre();
	void setNombre(std::string);

	void RegistrarPokedex(int, std::string, std::string, std::string, std::string);

	




};