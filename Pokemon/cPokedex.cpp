#include <iostream>
#include <string>
#include "cPokedex.h"
#include "Sprites.h"
#include "Descripcion.h"

int Pokedex::getnPokedex()
{
	return nPokedex;
}
void Pokedex::setnPokedex(int nPoke)
{
	nPokedex = nPoke;
}


std::string Pokedex::getTipo()
{
	return Tipo;
}

void Pokedex::setTipo(std::string tipo)
{
	Tipo = tipo;
}

std::string Pokedex::getHuella()
{
	return Huella;
}

void Pokedex::setHuella(std::string huella)
{
	Huella = huella;
}

std::string Pokedex::getDescripcion()
{
	return Descripcion;
}

void Pokedex::setDescripcion(std::string descripcion)
{
	Descripcion = descripcion;
}

std::string Pokedex::getNombre()
{
	return Nombre;
}

void Pokedex::setNombre(std::string nombre)
{
	Nombre = nombre;
}

void Pokedex::RegistrarPokedex(int nPoke, std::string tipo, std::string nombre,std::string huella,std::string descripcion)
{
	setnPokedex(nPoke);
	setTipo(tipo);
	setNombre(nombre);
	setHuella(huella);
	setDescripcion(descripcion);

}

void Pokedex::MostrarPoke(Pokemon* Poke,int num)
{
	std::string nombre = Poke->getNombre();


	if (num == 1)
	{
		if (nombre == "Bulbasaur")
		{
			Sprite(SpriteBulbasaurFront, SpriteBulbasaurBack, 24);
		}
	}
	else if (num == 2)
	{
		
		if (nombre == "Ivysaur")
		{
			Sprite(SpriteIvysaurFront, SpriteIvysaurBack, 24);
		
		}
	}
	else if (num == 3)
	{
		
		if (nombre == "Venusaur")
		{
			Sprite(SpriteVenusaurFront, SpriteVenusaurBack, 23);
		
		}
	}
	else if (num == 4)
	{
		if (nombre == "Charmander")
		{
			Sprite(SpriteCharmanderFront, SpriteCharmanderBack, 22);

		}
		
	}
	else if (num == 5)
	{
		if (nombre == "Charmeleon")
		{
			Sprite(SpriteCharmeleonFront, SpriteCharmeleonBack, 23);
		
		}
		
	}
	else if (num == 6)
	{
		if (nombre == "Charizard")
		{
			Sprite(SpriteCharizardFront, SpriteCharizardBack, 33);
	
		}
		
	}
	std::cout << nPokedex << "." << nombre << " / Tipo " << Tipo << " \n " << Descripcion << std::endl;
}