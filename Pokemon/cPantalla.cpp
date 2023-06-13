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
	int Columna = getColumna();
	int Fila = getFila();


	for (int i{ 0 }; i < Fila; i++)
	{
		for (int j{ 0 }; j < Columna; j++) 
		{
			if (i == 0 || i == Fila)
			{
				std::cout << "@";
			}
			else if (j == 0 || j == Fila)
			{
				std::cout << "@";
			}
			else
			{
				std::cout << " ";
			}
			
		}
		std::cout << "\n";
	}
}

int main()
{
	Pantalla Matriz;
	Matriz.Mapeado();
}