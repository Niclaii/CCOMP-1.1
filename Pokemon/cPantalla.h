#pragma once
#include "cJugador.h"

#define MAP_SIZE 10


class Pantalla
{
	private:

		int fila, columna;


	public:
        Jugador jugador;
        const int  MAP_SiZE = 10;

		Pantalla()
		{

			fila = 179;
			columna = 30;
		};
        

        //Pantalla() : jugador(MAP_SIZE / 2, MAP_SIZE / 2) {}

  		void setFila(int);
		int getFila();

		void setColumna(int);
		int getColumna();



		//METODOS----------------------------------------------------
        void Mapeado();
		void handleInput();
        
};