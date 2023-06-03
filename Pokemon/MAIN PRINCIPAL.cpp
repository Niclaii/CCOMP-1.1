#include <iostream>
#include "cPokemon.h"
#include "cPokedex.cpp"



int main()
{
	Pokemon Bulbasaur, Ivysaur, Venusaur, Charmander, Charmeleon, Charizard;
	
	Bulbasaur.RegistrarPokedex(1, "Planta", "Bulbasaur", 5);
	Ivysaur.RegistrarPokedex(2, "Planta", "Ivysaur", 16);
	Venusaur.RegistrarPokedex(3, "Planta/Veneno", "Venusaur", 32);
	Charmander.RegistrarPokedex(4, "Fuego", "Charmander", 5);
	Charmeleon.RegistrarPokedex(5, "Fuego", "Charmeleon", 16);
	Charizard.RegistrarPokedex(6, "Fuego/Volador", "Charizard", 36);

	Bulbasaur.IngresarStats();
	Ivysaur.IngresarStats();
	Venusaur.IngresarStats();
	Charmander.IngresarStats();
	Charmeleon.IngresarStats();
	Charizard.IngresarStats();


	while (true)
	{
		int num{ 0 };

		std::cout << "ingresa el numero de Pokedex\n1.Bulbasaur\n2.Ivysaur\n3.Venusaur\n4.Charmander\n5.Charmeleon\n6.Charizard\n";
		std::cin >> num;

		if (num == 1)
		{
			Bulbasaur.MostrarPoke();
		}
		else if (num == 2)
		{
			Ivysaur.MostrarPoke();
		}
		else if (num == 3)
		{
			Venusaur.MostrarPoke();
		}
		else if (num == 4)
		{
			Charmander.MostrarPoke();
		}
		else if (num == 5)
		{
			Charmeleon.MostrarPoke();
		}
		else if (num == 6)
		{
			Charizard.MostrarPoke();
		}
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