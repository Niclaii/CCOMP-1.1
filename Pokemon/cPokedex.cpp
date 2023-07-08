#include <iostream>
#include <string>
#include "cPokedex.h"

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

	setTipo(tipo);
	setNombre(nombre);
	setHuella(huella);
	setDescripcion(descripcion);

}

