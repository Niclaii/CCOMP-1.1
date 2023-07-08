#pragma once
#include "cJugador.h"
#include "cNPC.h"
#include "cPokedex.h"
#include "cPokemon.h"

#include "cCombate.h"


#define MAP_SIZE 15


class Pantalla
{
	private:

		int fila, columna;
		char tablero[MAP_SIZE][MAP_SIZE];

	public:
        Jugador jugador;
		NPC npc;
        const int  MAP_SiZE = 10;

		Pantalla()
		{
			npc.setNPC_x(rand() % MAP_SiZE);
			npc.setNPC_y(rand() % MAP_SiZE);
		};
        

        //Pantalla() : jugador(MAP_SIZE / 2, MAP_SIZE / 2) {}

  		void setFila(int);
		int getFila();

		void setColumna(int);
		int getColumna();


		//METODOS----------------------------------------------------
        void Mapeado();
		void handleInput();
		void MenuInGame();
		void MostrarPokedex(Pokemon*,std::string);
		void InicializadorDeVariables();
		void Juego();
};