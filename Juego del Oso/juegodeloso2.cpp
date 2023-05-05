#include <iostream>
//#include "MyLib.cpp"

using namespace std;

/*
void verifpos(char &Tablero[5][5], int fila, int columna, char figura)
{
	if (fila == 0 || columna == 0 || fila > 5 || columna > 5)
	{

	}
}*/
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

int main()
{
	char Tablero[5][5], i{ 0 };
	int fila{ 1 }, columna{ 1 };
	char figura{ ' ' };
	bool primerapasada{ true }, jugador1{ true }, jugador2{ false }, tmp(false);

	do
	{
		//primera pasada
		if (primerapasada == true)
		{
			cout << "A B C D E" << endl;
			for (int i{ 1 }; i < 6; i++)
			{
				cout << "\033[32m- - - - - " << i << "\033[0m" << endl;

			}
			primerapasada = false;
		}

		//Turno de los Jugadores
		if (jugador1)
		{
			ingresarvalores(fila, columna, figura, jugador1,jugador2);
		}
		else if (jugador2)
		{
			ingresarvalores(fila, columna, figura, jugador1,jugador2);
		}
		else
		{
			cout << "ocurrio un problema" << endl;
		}

		//Asignar valores
		for (int i{ 1 }; i <= 5; i++)
		{
			for (int j{ 1 }; j <= 5; j++)
			{
				if (i < 6 && j < 6)
				{
						Tablero[fila][columna] = figura;
						if (Tablero[i][j] == 'S' || Tablero[i][j] == 's')
						{
							cout << "ingrese otra posicion" << endl;
						i--;
						}
						else if (Tablero[i][j] == 'O' || Tablero[i][j] == 'o')
						{
							cout << "ingrese otra posicion" << endl;
							i--;
						}
						else
						{
							Tablero[i][j] = '_';
						}
				}
			}
		}

		//Imprimir Tablero

		for (int i{ 1 }; i <= 5; i++)
		{
			for (int j{ 1 }; j <= 5; j++)
			{
				cout << Tablero[i][j];
			}
			cout << endl;
		}

		//Reinicio de variables y cambio de turnos
		tmp = jugador1;
		jugador1 = jugador2;
		jugador2 = tmp;
		fila = 0;
		columna = 0;
		i++;

	} while (i < 25);

	return 0;
}