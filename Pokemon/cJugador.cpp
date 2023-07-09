#include <iostream>
#include "cJugador.h"

void Jugador::Asignar_EquipoPokemon(Pokemon poke1, Pokemon poke2, Pokemon poke3, Pokemon poke4, Pokemon poke5, Pokemon poke6)
{
    EquipoPokemon[0] = poke1;
    EquipoPokemon[1] = poke2;
    EquipoPokemon[2] = poke3;
    EquipoPokemon[3] = poke4;
    EquipoPokemon[4] = poke5;
    EquipoPokemon[5] = poke6;
};

void Jugador::setJugador_x(int x)
{
    Jugador_X = x;
}

int Jugador::getJugador_x()
{
    return Jugador_X;
}

void Jugador::setJugador_y(int y)
{
    Jugador_Y = y;
}

int Jugador::getJugador_y()
{
    return Jugador_Y;
}

void Jugador::Moverse(char direccion, int MAP_SIZE)
{
    int y = getJugador_y();
    int x = getJugador_x();

    switch (direccion) {
    case 'w':
        if (y > 0)
        {
            y--;
            setJugador_y(y);
            break;
        }
    case 's':
        if (y < MAP_SIZE - 1)
        {
            y++;
            setJugador_y(y);
            break;
        }
    case 'a':
        if (x > 0)
        {
            x--;
            setJugador_x(x);
            break;
        }
    case 'd':
        if (x < MAP_SIZE - 1)
        {
            x++;
            setJugador_x(x);
            break;
        }
    }
}
/*
void Jugador::InteraccionA() 
{ 

}
*/
Pokemon Jugador::getEquipoPokemon(int num)
{
    Pokemon Poke = EquipoPokemon[num];
    return EquipoPokemon[num];
}
void Jugador::MostrarEquipo()
{
    for (int i{ 0 }; i < 6; i++)
    {
        EquipoPokemon[i].AsignarAtaques(EquipoPokemon[i]);
    }
    

    std::cout << "\n";
    std::cout << "0." << EquipoPokemon[0].getNombre() << "\n1." << EquipoPokemon[1].getNombre() << "\n2." << EquipoPokemon[2].getNombre()
        << "\n3." << EquipoPokemon[3].getNombre() << "\n4." << EquipoPokemon[4].getNombre() << "\n5." << EquipoPokemon[5].getNombre();
        std::cout << "\n\nQue desea hacer?\n1.Visualizar Pokemon\n2.Mover Pokemon\n3.Salir\n";
    int opcionequipo{ 0 };
    std::cin >> opcionequipo;
    std::cout << "\n";

    if (opcionequipo == 1)
    {   

        bool v{ false };
        int opcionpoke{ 0 };
        Pokemon poke;
        while (true)
        {
            if (v == false)
            {
                
                std::cout << "Que Pokemon desea ver? : ";
                std::cin >> opcionpoke;
                poke = getEquipoPokemon(opcionpoke);
                poke.MostrarPokemon(poke);
                v = true;
            }
            else
            {
                
                int opcionmenupoke{ 0 };
                std::cout << "\n\n";
                std::cout << "Que desea hacer?\n1.Ver Otro Pokemon\n2.Salir\n";
                std::cin >> opcionmenupoke;

                if (opcionmenupoke == 1)
                {
                    v = false;
                }
                else if(opcionmenupoke==2)
                {
                    break;
                }
                else
                {
                    std::cout << "Reintenta\n";
                }
            }
        }
    }
    else if (opcionequipo == 2)
    {
        Pokemon tmp;
        int eleccion1{0}, eleccion2{0};
        std::cout << "Que Pokemon desea cambiar?: ";
        std::cin >> eleccion1;

        std::cout << "con cual lo desea cambiar?: ";
        std::cin >> eleccion1;

        tmp = EquipoPokemon[eleccion1];
        EquipoPokemon[eleccion1] = EquipoPokemon[eleccion2];
        EquipoPokemon[eleccion2] = tmp;
    }

}