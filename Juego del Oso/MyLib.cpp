#include <iostream>
#include "MyLib.h"

void ingresarfila(int& fila)
{
	while (true)
	{
		std::cout << "Ingrese la fila deseada\n";
		std::cin >> fila;

		if (fila < 5)
		{
			break;
		}
		else
		{
			std::cout << "Ingrese otro numero: " << std::endl;
		}
	}
}

void ingresarcolumna(int& columna)
{
	while (true)
	{
		std::cout << "Ingrese la columna deseada\n";
		std::cin >> columna;
		if (columna < 5)
		{
			break;
		}
		else
		{
			std::cout << "Ingrese otro numero: " << std::endl;
		}
	}
}

void ingresarfigura(char& figura)
{
	while (true)
	{
		std::cout << "Ingrese la figura que quiere utilizar (S,O): " << std::endl;
		std::cin >> figura;
		if (figura == 'S' || figura == 's')
		{
			break;
		}
		else if (figura == 'O' || figura == 'o')
		{
			break;
		}
		else
		{
			std::cout << "\033[34mIngrese 'S' o 'O':\033[0m " << std::endl;
		}
	}
}

void ingresarvalores(int& fila, int& columna, char& figura, bool jugador1, bool jugador2)
{
	if (jugador1 == true)
	{
		std::cout << "Turno del Jugador 1" << std::endl;
		ingresarfila(fila);
		ingresarcolumna(columna);
		ingresarfigura(figura);

	}
	else if (jugador2 == true)
	{
		std::cout << "Turno del Jugador 2" << std::endl;
		ingresarfila(fila);
		ingresarcolumna(columna);
		ingresarfigura(figura);
	}
}