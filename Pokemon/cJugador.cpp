#include <iostream>
#include "cJugador.h"

void Jugador::setPokemon1(Pokemon poke)
{
	Pokemon1 = poke;
};
Pokemon Jugador::getPokemon1()
{
	return Pokemon1;
};

void Jugador::setPokemon2(Pokemon poke)
{
	Pokemon2 = poke;
};
Pokemon Jugador::getPokemon2()
{
	return Pokemon2;
};

void Jugador::setPokemon3(Pokemon poke)
{
	Pokemon3 = poke;
};
Pokemon Jugador::getPokemon3()
{
	return Pokemon3;
};

void Jugador::setPokemon4(Pokemon poke)
{
	Pokemon4 = poke;
};
Pokemon Jugador::getPokemon4()
{
	return Pokemon4;
};

void Jugador::setPokemon5(Pokemon poke)
{
	Pokemon5 = poke;
};
Pokemon Jugador::getPokemon5()
{
	return Pokemon5;
};

void Jugador::setPokemon6(Pokemon poke)
{
	Pokemon6 = poke;
};
Pokemon Jugador::getPokemon6()
{
	return Pokemon6;
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

void Jugador::InteraccionA() { //falta

}

void Jugador::Equipo_Pokemon() {  //falta

}










