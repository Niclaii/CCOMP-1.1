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

void Pantalla::MostrarPokedex(Pokemon*Poke,std::string Descripcion)
{
    Poke->MostrarPkmPokedex(*Poke, Descripcion);
    std::cout << "\n";
}

void Pantalla::Juego()
{
 
    while (Fin == false)
    {
        if (primerapasada==false)
        {
            Mapeado();
            
            std::getline(std::cin, input);
            primerapasada = true;
        }
        else
        {
            std::getline(std::cin, input);
            Mapeado();
        }

        if (!input.empty())
        {
            if (input[0] == 'm')
            {
                while (true)
                {
                    int opcion{ 0 };
                    std::cout << "1.Pokedex\n2.Pokemon\n3.Bolsa\n4.Combate\n5.Salir\n6.Cerrar Juego\n";
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
                                    MostrarPokedex(Bulbasaurptr, DBulbasaur);
                                }
                                else if (num == 2)
                                {
                                    MostrarPokedex( Ivysaurptr, DIvysaur);
                                }
                                else if (num == 3)
                                {
                                    MostrarPokedex(Venusaurptr, DVenusaur);
                                }
                                else if (num == 4)
                                {
                                    MostrarPokedex(Charmanderptr, DCharmander);
                                }
                                else if (num == 5)
                                {
                                    MostrarPokedex(Charmeleonptr, DCharmeleon);
                                }
                                else if (num == 6)
                                {
                                    MostrarPokedex( Charizardptr, DCharizard);
                                }
                                else if (num == 7)
                                {
                                    break;
                                }
                                break;
                            }
                            break;
                        }
                        else if (opcion == 2)
                        {
                            
                            Jugador1.MostrarEquipo();                     
               
                            break;
                        }
                        else if (opcion == 3)
                        {

                            Objetos.asignarObjeto();
                            Objetos.visualizarObjetos();
                            int opcion2{ 0 };
                            std::cout << "Elige un Objeto\n";
                            std::cin >> opcion2;
                           
                            if (opcion2 == 0)
                            {
                                Objetos.manipularObjeto(0 );
                            }
                            else if (opcion2 == 1)
                            {
                                Objetos.manipularObjeto(1);
                            }
                            else if (opcion2 == 2)
                            {
                                Objetos.manipularObjeto(2);
                            }
                            else if (opcion2 == 3)
                            {
                                Objetos.manipularObjeto(3);
                            }
                            else if (opcion2 == 4)
                            {
                                Objetos.manipularObjeto(4);
                            }
                            else if (opcion2 == 5)
                            {
                                Objetos.manipularObjeto(5);
                            }
                            Objetos.visualizarObjetos();
                            break;
                        }
                        else if (opcion == 4)
                        {
                            while (true)
                            {
                                //Pelea.Seleccion_Accion(Jugador1, Jugador1.EquipoPokemon[0], Objetos);
                                Pelea.BarrasDeVida(Jugador1, npc.EquipoPokemon[0], Objetos);
                            }
                            break;
                        }
                        else if (opcion == 5)
                        {
                            break;
                        }
                        else if (opcion == 6)
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