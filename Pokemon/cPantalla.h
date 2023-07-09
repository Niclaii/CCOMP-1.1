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
        const int  MAP_SiZE{ 10 };
        std::string input;
        bool Fin = false;
        bool primerapasada{ false };
        int Opcion{ 0 }, num{ 0 };
        Objeto Objetos;
        Jugador Jugador1;
        NPC Bot1;
        Combate Pelea;
        Pokedex Pokedex01;
        Pokemon Bulbasaur, Ivysaur, Venusaur, Charmander, Charmeleon, Charizard,Vacio;
        Pokemon* Bulbasaurptr, * Ivysaurptr, * Venusaurptr, * Charmanderptr, * Charmeleonptr, * Charizardptr;       

		Pantalla()
		{
			npc.setNPC_x(rand() % MAP_SiZE);
			npc.setNPC_y(rand() % MAP_SiZE);
            
            Bulbasaurptr = &Bulbasaur;
            Ivysaurptr = &Ivysaur;
            Venusaurptr = &Venusaur;
            Charmanderptr = &Charmander;
            Charmeleonptr = &Charmeleon;
            Charizardptr = &Charizard;

            (*Bulbasaurptr).RegistarPoke(1, 5, "Planta", "Bulbasaur");
            (*Ivysaurptr).RegistarPoke(2, 16, "Planta", "Ivysaur");
            (*Venusaurptr).RegistarPoke(3, 36, "Planta/Veneno", "Venusaur");
            (*Charmanderptr).RegistarPoke(4, 5, "Fuego", "Charmander");
            (*Charmeleonptr).RegistarPoke(5, 16, "Fuego", "Charmeleon");
            (*Charizardptr).RegistarPoke(6, 36, "Fuego/Volador", "Charizard");

            (*Bulbasaurptr).IngresarStats();
            (*Ivysaurptr).IngresarStats();
            (*Venusaurptr).IngresarStats();
            (*Charmanderptr).IngresarStats();
            (*Charmeleonptr).IngresarStats();
            (*Charizardptr).IngresarStats();

            Jugador1.Asignar_EquipoPokemon(Bulbasaur, Charizard, Venusaur, Charmeleon, Charmander, Ivysaur);
            npc.Asignar_EquipoPokemon(Charmander,Vacio,Vacio,Vacio,Vacio,Vacio);
		};
       

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