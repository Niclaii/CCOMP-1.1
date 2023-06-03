#include <iostream>
#include <string>
#include "cPokedex.h"

void Pokemon::RegistrarPokedex(int nPoke, std::string tipo, std::string nombre, int nivel)
{
	setnPokedex(nPoke);
	setTipo(tipo);
	setNombre(nombre);
	setNivel(nivel);
}