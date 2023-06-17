#include <iostream>
#include "cPantalla.h"


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
                std::cout << 'P';
            else
                std::cout << '.';
        }
        std::cout << std::endl;
    }
}

void Pantalla::handleInput() {
    std::string input;
    std::getline(std::cin, input);
    if (!input.empty()) {
        jugador.Moverse(input[0], MAP_SIZE);
    }
}





int main() {
    Pantalla Juego;

    while (true) 
    {
        Juego.Mapeado();
        Juego.handleInput();
    }

    return 0;
}