#include "Pokemon.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	Pokemon Bulbasaur, Ivysaur, Venusaur, Charmander, Charmeleon, Charizard;
	Bulbasaur.RegistrarPokedex(1,"Bulba","Planta","Bulbasaur",5);
	Ivysaur.RegistrarPokedex(2,"Ivy","Planta", "Ivysaur",16);
	Venusaur.RegistrarPokedex(3,"Venu","Planta/Veneno","Venusaur",32);
	Charmander.RegistrarPokedex(4,"Char","Fuego","Charmander",5);
	Charmeleon.RegistrarPokedex(5,"Char","Fuego","Charmeleon",16);
	Charizard.RegistrarPokedex(6,"Char","Fuego/Volador","Charizard",36);

	int num{ 0 };

	cout << "ingresa el numero de Pokedex\n1.Bulbasaur\n2.Ivysaur\n3.Venusaur\n4.Charmander\n5.Charmeleon\n6.Charizard\n";
	cin >> num;

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






