#include <iostream>
#include "cJugador.h"

void Jugador::Asignar_EquipoPokemon(Pokemon* poke1, Pokemon* poke2, Pokemon* poke3, Pokemon* poke4, Pokemon* poke5, Pokemon* poke6)
{
    for (int i = 0; i < 6; ++i)
    {
        EquipoPokemonJugador[i] = new Pokemon();
    }
    EquipoPokemonJugador[0] = poke1;
    EquipoPokemonJugador[1] = poke2;
    EquipoPokemonJugador[2] = poke3;
    EquipoPokemonJugador[3] = poke4;
    EquipoPokemonJugador[4] = poke5;
    EquipoPokemonJugador[5] = poke6;
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

void Jugador::InteraccionA() 
{ 

}
