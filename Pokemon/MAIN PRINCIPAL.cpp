#include <iostream>
#include "cPokemon.h"
#include "cPokedex.h"
//#include "combate.h"



int main()
{
	Pokemon Bulbasaur,  Ivysaur,  Venusaur,  Charmander,  Charmeleon,  Charizard;
	Pokemon *Bulbasaurptr, *Ivysaurptr, *Venusaurptr, *Charmanderptr, *Charmeleonptr, *Charizardptr;
	Bulbasaurptr = new Pokemon;
	Ivysaurptr = new Pokemon;
	Venusaurptr = new Pokemon;
	Charmanderptr = new Pokemon;
	Charmeleonptr = new Pokemon;
	Charizardptr = new Pokemon;


	(*Bulbasaurptr).Pokemon::RegistarPoke(1,5, "Planta", "Bulbasaur");
	(*Ivysaurptr).Pokemon::RegistarPoke(2,16, "Planta", "Ivysaur");
	(*Venusaurptr).Pokemon::RegistarPoke(3,36 ,"Planta/Veneno", "Venusaur");
	(*Charmanderptr).Pokemon::RegistarPoke(4,5 ,"Fuego", "Charmander");
	(*Charmeleonptr).Pokemon::RegistarPoke(5,16, "Fuego", "Charmeleon");
	(*Charizardptr).Pokemon::RegistarPoke(6,36, "Fuego/Volador", "Charizard");

	(*Bulbasaurptr).IngresarStats();
	(*Ivysaurptr).IngresarStats();
	(*Venusaurptr).IngresarStats();
	(*Charmanderptr).IngresarStats();
	(*Charmeleonptr).IngresarStats();
	(*Charizardptr).IngresarStats();

	//Combate::iniciar(Bulbasaur, Charmander);

	while (true)
	{
		int num{ 0 };

		std::cout << "ingresa el numero de Pokedex\n1.Bulbasaur\n2.Ivysaur\n3.Venusaur\n4.Charmander\n5.Charmeleon\n6.Charizard\n";
		std::cin >> num;

		*Bulbasaur.Pokedex::MostrarPoke(Bulbasaur, num);
		
	}
	
	delete Bulbasaurptr;
	delete Venusaurptr;
	delete Ivysaurptr;
	delete Charmanderptr;
	delete Charmeleonptr;
	delete Charizardptr;


	return 0;
}