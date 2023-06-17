#pragma once
#include <iostream>
#include "cPersonaje.h"
#include "cPokemon.h"


class Jugador :public Personaje
{
	private:
	
		int Jugador_X, Jugador_Y;
		char Interaccion;
		Pokemon Pokemon1, Pokemon2, Pokemon3, Pokemon4, Pokemon5, Pokemon6;
	
	public:	
		
		Jugador()
		{
			Jugador_X = 0;
			Jugador_Y = 0;
			Interaccion = ' ';
			Pokemon1;
			Pokemon2;
			Pokemon3;
			Pokemon4;
			Pokemon5;
			Pokemon6;
		};
		void setJugador_x(int);
		int getJugador_x();

		void setJugador_y(int);
		int getJugador_y();


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
		
		void InteraccionA();

		void Equipo_Pokemon();

		void Moverse(char,int);
};