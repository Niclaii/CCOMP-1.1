#include "cJugador.h"

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

void Jugador::Moverse(char direccion,int MAP_SIZE)
{
    int y = getJugador_y();
    int x = getJugador_x();

    switch (direccion) {
    case 'w':
        if (y > 0) y--;
        break;
    case 's':
        if (y < MAP_SIZE - 1) y++;
        break;
    case 'a':
        if (x > 0) x--;
        break;
    case 'd':
        if (x < MAP_SIZE - 1) x++;
        break;
    }
}

void Jugador::InteraccionA() { //falta

}

void Jugador::Equipo_Pokemon() {  //falta

}