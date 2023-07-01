#pragma once
#include <iostream>
#include "cPersonaje.h"
#include "cPokemon.h"


class Jugador :public Personaje
{
	private:
	
		int Jugador_X, Jugador_Y;
		char Interaccion;
		Pokemon** EquipoPokemonJugador = new Pokemon * [6];
	
	public:	
		
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

		void Asignar_EquipoPokemon(Pokemon*, Pokemon*, Pokemon*, Pokemon*, Pokemon*, Pokemon*);

		Pokemon getEquipoPokemon();
		
		void InteraccionA();

		void Moverse(char,int);
};