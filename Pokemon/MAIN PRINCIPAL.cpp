#include <iostream>
#include "cPokemon.h"
#include "cPokedex.cpp"
//#include "combate.h"



int main()
{
	Pokemon *Bulbasaur, *Ivysaur, *Venusaur, *Charmander, *Charmeleon, *Charizard;
	Bulbasaur = new Pokemon;
	Ivysaur = new Pokemon;
	Venusaur = new Pokemon;
	Charmander = new Pokemon;
	Charmeleon = new Pokemon;
	Charizard = new Pokemon;


	(*Bulbasaur).RegistrarPokedex(1, "Planta", "Bulbasaur", 5);
	(*Ivysaur).RegistrarPokedex(2, "Planta", "Ivysaur", 16);
	(*Venusaur).RegistrarPokedex(3, "Planta/Veneno", "Venusaur", 32);
	(*Charmander).RegistrarPokedex(4, "Fuego", "Charmander", 5);
	(*Charmeleon).RegistrarPokedex(5, "Fuego", "Charmeleon", 16);
	(*Charizard).RegistrarPokedex(6, "Fuego/Volador", "Charizard", 36);

	(*Bulbasaur).IngresarStats();
	(*Ivysaur).IngresarStats();
	(*Venusaur).IngresarStats();
	(*Charmander).IngresarStats();
	(*Charmeleon).IngresarStats();
	(*Charizard).IngresarStats();

	//Combate::iniciar(Bulbasaur, Charmander);

	while (true)
	{
		int num{ 0 };

		std::cout << "ingresa el numero de Pokedex\n1.Bulbasaur\n2.Ivysaur\n3.Venusaur\n4.Charmander\n5.Charmeleon\n6.Charizard\n";
		std::cin >> num;

		if (num == 1)
		{
			(*Bulbasaur).MostrarPoke();
		}
		else if (num == 2)
		{
			(*Ivysaur).MostrarPoke();
		}
		else if (num == 3)
		{
			(*Venusaur).MostrarPoke();
		}
		else if (num == 4)
		{
			(*Charmander).MostrarPoke();
		}
		else if (num == 5)
		{
			(*Charmeleon).MostrarPoke();
		}
		else if (num == 6)
		{
			(*Charizard).MostrarPoke();
		}
	}
	
	delete Bulbasaur;
	delete Venusaur;
	delete Ivysaur;
	delete Charmander;
	delete Charmeleon;
	delete Charizard;


	return 0;
}