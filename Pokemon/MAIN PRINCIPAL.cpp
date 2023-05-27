#include <iostream>
#include "cPokemon.cpp"
#include "Sprites.h"
using namespace std;

int main()
{
	Pokemon Bulbasaur, Ivysaur, Venusaur, Charmander, Charmeleon, Charizard;
	Bulbasaur.RegistrarPokedex(1, "Bulba", "Planta", "Bulbasaur", 5);
	Ivysaur.RegistrarPokedex(2, "Ivy", "Planta", "Ivysaur", 16);
	Venusaur.RegistrarPokedex(3, "Venu", "Planta/Veneno", "Venusaur", 32);
	Charmander.RegistrarPokedex(4, "Char", "Fuego", "Charmander", 5);
	Charmeleon.RegistrarPokedex(5, "Char", "Fuego", "Charmeleon", 16);
	Charizard.RegistrarPokedex(6, "Char", "Fuego/Volador", "Charizard", 36);

	Bulbasaur.IngresarStats();
	Ivysaur.IngresarStats();
	Venusaur.IngresarStats();
	Charmander.IngresarStats();
	Charmeleon.IngresarStats();
	Charizard.IngresarStats();



	int num{ 0 };

	cout << "ingresa el numero de Pokedex\n1.Bulbasaur\n2.Ivysaur\n3.Venusaur\n4.Charmander\n5.Charmeleon\n6.Charizard\n";
	cin >> num;

	if (num == 1)
	{
		Sprite(num);
		Bulbasaur.MostrarPoke();
	}
	else if (num == 2)
	{
		Sprite(num);
		Ivysaur.MostrarPoke();
	}
	else if (num == 3)
	{
		Sprite(num);
		Venusaur.MostrarPoke();
	}
	else if (num == 4)
	{
		Sprite(num);
		Charmander.MostrarPoke();
	}
	else if (num == 5)
	{
		Sprite(num);
		Charmeleon.MostrarPoke();
	}
	else if (num == 6)
	{
		Sprite(num);
		Charizard.MostrarPoke();
	}







	/*char Base[60][235];
	int fila{ 0 }, columna{ 0 };


	fila = 30;
	columna = 170;

	for (int i{ 0 }; i < 60; i++)
	{
		for (int j{ 0 }; j < 235; j++)
		{
			Base[i][j] = '_';
			if (j == 234)
			{
				cout << "\n";
				cout << Base[i][j];
			}
			else if ((29 < i < 51) && (169 < j < 226))
			{
				Base[i][j] = '@';
			}
			else
			{
				cout << Base[i][j];
			}
		}
	}*/

	return 0;
}