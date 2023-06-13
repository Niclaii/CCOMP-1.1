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
		Pokedex() 
		{
			Huella = " ";
			Descripcion = " ";
			Tipo = " ";
			Nombre = " ";
			nPokedex = 0;

		};

		int getnPokedex();
		void setnPokedex(int);

		std::string getTipo();
		void setTipo(std::string);

		std::string getHuella();
		void setHuella(std::string);

		std::string getDescripcion();
		void setDescripcion(std::string);

		std::string getNombre();
		void setNombre(std::string);

		void RegistrarPokedex(int , std::string , std::string, std::string, std::string);
			
		void MostrarPoke(Pokemon*,std::string);




};