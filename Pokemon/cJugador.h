#pragma once
#include <iostream>
#include "cPersonaje.h"
//#include "cPokemon.h"


class Jugador :protected Personaje
{
public:
		int Jugador_X, Jugador_Y;
		char Interaccion;
		Pokemon EquipoPokemon[6];
		Jugador()
		{
			Jugador_X = 0;
			Jugador_Y = 0;
			Interaccion = ' ';
		};

		void setJugador_x(int);
		int getJugador_x();

		void setJugador_y(int);
		int getJugador_y();

		void Asignar_EquipoPokemon(Pokemon, Pokemon, Pokemon, Pokemon, Pokemon, Pokemon);

		void MostrarEquipo();

		Pokemon getEquipoPokemon(int );
		
		void InteraccionA();

		void Moverse(char,int);
};