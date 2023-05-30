#include "cPokemon.h"
#include <iostream>
#include <string>


using namespace std;

int Pokemon::getNivel()
{
	return Nivel;
}

void Pokemon::setNivel(int nivel)
{
	Nivel = nivel;
}
int Pokemon::getnPokedex()
{
	return nPokedex;
}

void Pokemon::setnPokedex(int nPoke)
{
	nPokedex = nPoke;
}
std::string Pokemon::getSprite()
{
	return Sprite;
}

void Pokemon::setSprite(std::string sprite)
{
	Sprite = sprite;
}
std::string Pokemon::getTipo()
{
	return Tipo;
}

void Pokemon::setTipo(std::string tipo)
{
	Tipo = tipo;
}
std::string Pokemon::getNombre()
{
	return Nombre;
}

void Pokemon::setNombre(std::string nombre)
{
	Nombre = nombre;
}

int Pokemon::getHP()
{
	return Stats[0];
}

void Pokemon::setHP(int HP)
{
	Stats[0] = HP;
}
int Pokemon::getATK()
{
	return Stats[1];
}

void Pokemon::setATK(int ATK)
{
	Stats[1] = ATK;
}
int Pokemon::getDEF()
{
	return Stats[2];
}

void Pokemon::setDEF(int DEF)
{
	Stats[2] = DEF;
}
int Pokemon::getSPATK()
{
	return Stats[3];
}

void Pokemon::setSPATK(int SPATK)
{
	Stats[3] = SPATK;
}
int Pokemon::getSPDEF()
{
	return Stats[4];
}

void Pokemon::setSPDEF(int SPDEF)
{
	Stats[4] = SPDEF;
}
int Pokemon::getVEL()
{
	return Stats[5];
}

void Pokemon::setVEL(int VEL)
{
	Stats[5] = VEL;
}

void Pokemon::RegistrarPokedex(int nPoke, std::string sprite, std::string tipo, std::string nombre, int nivel)
{
	setnPokedex(nPoke);
	setSprite(sprite);
	setTipo(tipo);
	setNombre(nombre);
	setNivel(nivel);
}

void Pokemon::IngresarStats()
{
	if (Nombre == "Bulbasaur")
	{
		setHP(45);
		setATK(49);
		setDEF(49);
		setSPATK(65);
		setSPDEF(65);
		setVEL(45);

	}
	else if (Nombre == "Ivysaur")
	{
		setHP(60);
		setATK(62);
		setDEF(63);
		setSPATK(80);
		setSPDEF(80);
		setVEL(60);
	}
	else if (Nombre == "Venusaur")
	{
		setHP(80);
		setATK(82);
		setDEF(83);
		setSPATK(100);
		setSPDEF(100);
		setVEL(80);
	}
	else if (Nombre == "Charmander")
	{
		setHP(39);
		setATK(52);
		setDEF(43);
		setSPATK(60);
		setSPDEF(50);
		setVEL(65);
	}
	else if (Nombre == "Charmeleon")
	{
		setHP(58);
		setATK(64);
		setDEF(58);
		setSPATK(80);
		setSPDEF(65);
		setVEL(80);
	}
	else if (Nombre == "Charizard")
	{
		setHP(78);
		setATK(84);
		setDEF(78);
		setSPATK(109);
		setSPDEF(85);
		setVEL(100);
	}
}

void Pokemon::MostrarPoke()
{
	std::cout << nPokedex << "." << Nombre << " / Tipo " << Tipo << " / Nivel " << Nivel << std::endl;
	std::cout << "HP : " << Stats[0] << "\nATK : " << Stats[1] << "\nDEF : " << Stats[2] << "\nSP.ATK : " << Stats[3] << "\nSP.DEF : " << Stats[4] << "\nVEL : " << Stats[5] << "\n";
}