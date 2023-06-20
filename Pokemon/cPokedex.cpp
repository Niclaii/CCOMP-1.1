#include <iostream>
#include <string>
#include "cPokedex.h"
#include "Sprites.h"

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

void Pokedex::MostrarPoke(Pokemon* Poke,std::string Descripcion)
{
	std::string nombre = Poke->getNombre();

	if (nombre == "Bulbasaur")
	{
		Sprite(SpriteBulbasaurFront, SpriteBulbasaurBack, 24);
		setnPokedex(1);
		setTipo("Planta");
		setNombre(nombre);
	}
	
	
	else if (nombre == "Ivysaur")
	{
		Sprite(SpriteIvysaurFront, SpriteIvysaurBack, 24);
		setnPokedex(2);
		setTipo("Planta/Veneno");
		setNombre(nombre);
	}

	
	else if (nombre == "Venusaur")
	{
		Sprite(SpriteVenusaurFront, SpriteVenusaurBack, 23);
		setnPokedex(3);
		setTipo("Planta/Veneno");
		setNombre(nombre);
	}
	
	else if (nombre == "Charmander")
	{
		Sprite(SpriteCharmanderFront, SpriteCharmanderBack, 22);
		setnPokedex(4);
		setTipo("Fuego");
		setNombre(nombre);
	}
	

	else if (nombre == "Charmeleon")
	{
		Sprite(SpriteCharmeleonFront, SpriteCharmeleonBack, 23);
		setnPokedex(5);
		setTipo("Fuego");
		setNombre(nombre);
	}
	
	else if (nombre == "Charizard")
	{
		Sprite(SpriteCharizardFront, SpriteCharizardBack, 33);
		setnPokedex(6);
		setTipo("Fuego/Volador");
		setNombre(nombre);
	}
	std::cout << Pokedex::nPokedex << "." << nombre << " / Tipo " << Tipo << " \n " << Descripcion << std::endl;
}