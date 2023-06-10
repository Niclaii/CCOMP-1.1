#pragma once
#include <iostream>
#include <string>
#include "cPokemon.h"

class Pokedex
{
	private:
	
		std::string Huella, Descripcion,Tipo,Nombre;
		int nPokedex;

	public:
		Pokedex(std::string Huella, std::string Descripcion);

		int getnPokedex();
		void setnPokedex(int);

		std::string getTipo();
		void setTipo(std::string);

		std::string getNombre();
		void setNombre(std::string);

		void RegistrarPokedex(int nPoke, std::string tipo, std::string nombre);
			
		void MostrarPoke(Pokemon*,int);




};