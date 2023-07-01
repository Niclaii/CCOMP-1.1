#include <iostream>
#include "cPantalla.h"
#include "Descripcion.h"


void Pantalla::setFila(int Fila)
{
    fila = Fila;
};
int Pantalla::getFila()
{
    return fila;
};

void Pantalla::setColumna(int Columna)
{
    columna = Columna;
};
int Pantalla::getColumna()
{
    return columna;
};

void Pantalla::Mapeado()
{
    for (int i = 0; i < MAP_SIZE; ++i) {
        for (int j = 0; j < MAP_SIZE; ++j) {
            if (i == jugador.getJugador_y() && j == jugador.getJugador_x())
            {
                jugador.setJugador_x(j);
                jugador.setJugador_y(i);
                std::cout << 'P';
            }
            else if (i == npc.getNPC_x() && j == npc.getNPC_y())
            {
                std::cout << 'N';
            }
            else
            {
                std::cout << '.';
            }

        }
        std::cout << std::endl;
    }
}

void Pantalla::MostrarPokedex(Pokedex Pokedex01,Pokemon*Poke,std::string Descripcion)
{
    Pokedex01.MostrarPoke(Poke, Descripcion);
    std::cout << "\n";
        
}

void Pantalla::Juego()
{
    bool Fin = false;
    int Opcion{ 0 };
    Pokedex Pokedex01;
    Pokemon Bulbasaur, Ivysaur, Venusaur, Charmander, Charmeleon, Charizard;
    Pokemon* Bulbasaurptr, * Ivysaurptr, * Venusaurptr, * Charmanderptr, * Charmeleonptr, * Charizardptr;
    Bulbasaurptr = new Pokemon;
    Ivysaurptr = new Pokemon;
    Venusaurptr = new Pokemon;
    Charmanderptr = new Pokemon;
    Charmeleonptr = new Pokemon;
    Charizardptr = new Pokemon;

                                                                                                        //CREAR UNA BASE DE DATOS DE LOS POKEMONS Y OBJETOS
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

    while (Fin == false)
    {
        Mapeado();
        std::string input;
        std::getline(std::cin, input);

        if (!input.empty())
        {
            if (input[0] == 'm')
            {
                while (true)
                {
                    int opcion{ 0 };
                    std::cout << "1.Pokedex\n2.Pokemon\n3.Bolsa\n4.Salir\n5.Cerrar Juego\n";
                    std::cin >> opcion;
                    while (true)
                    {
                        if (opcion == 1)
                        {
                            while (true)
                            {
                                int num{ 0 };

                                std::cout << "ingresa el numero de Pokedex\n1.Bulbasaur\n2.Ivysaur\n3.Venusaur\n4.Charmander\n5.Charmeleon\n6.Charizard\n7.Salir\n";
                                std::cin >> num;

                                if (num == 1)
                                {
                                    MostrarPokedex(Pokedex01, Bulbasaurptr, DBulbasaur);
                                }
                                else if (num == 2)
                                {
                                    MostrarPokedex(Pokedex01, Ivysaurptr, DIvysaur);
                                }
                                else if (num == 3)
                                {
                                    MostrarPokedex(Pokedex01, Venusaurptr, DVenusaur);
                                }
                                else if (num == 4)
                                {
                                    MostrarPokedex(Pokedex01, Charmanderptr, DCharmander);
                                }
                                else if (num == 5)
                                {
                                    MostrarPokedex(Pokedex01, Charmeleonptr, DCharmeleon);
                                }
                                else if (num == 6)
                                {
                                    MostrarPokedex(Pokedex01, Charizardptr, DCharizard);
                                }
                                else if (num == 7)
                                {
                                    break;
                                }
                            }
                            break;
                        }
                        else if (opcion == 2)
                        {
                            std::cout << "Aqui van los pokes del jugador\n";




                            break;
                        }
                        else if (opcion == 3)
                        {
                            std::cout << "Aqui van los objetos\n";
                            break;
                        }
                        else if (opcion == 4)
                        {
                            break;
                        }
                        else if (opcion == 5)
                        {
                            Fin = true;
                            break;
                        }
                        else
                        {
                            continue;
                        }

                    } break;
                }
            }
            else
            {
                jugador.Moverse(input[0], MAP_SIZE);
            }
        }
    }
}