#include "cPokemon.h"
#include <iostream>
#include <string>
#include "Sprites.h"

using namespace std;

int Pokemon::getnPokedex()
{
	return nPokedex;
}
void Pokemon::setnPokedex(int nPoke)
{
	nPokedex = nPoke;
}

int Pokemon::getNivel()
{
	return Nivel;
}

void Pokemon::setNivel(int nivel)
{
	Nivel = nivel;
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

std::string Pokemon::getATK1()
{
	return Ataque1;
}

void Pokemon::setATK1(std::string Atk1)
{
	Ataque1 = Atk1;
}

std::string Pokemon::getATK2()
{
	return Ataque2;
}

void Pokemon::setATK2(std::string Atk2)
{
	Ataque2 = Atk2;
}

std::string Pokemon::getATK3()
{
	return Ataque3;
}

void Pokemon::setATK3(std::string Atk3)
{
	Ataque3 = Atk3;
}

std::string Pokemon::getATK4()
{
	return Ataque4;
}

void Pokemon::setATK4(std::string Atk4)
{
	Ataque4 = Atk4;
}

void Pokemon::setDamage(int danio) 
{
	Damage = danio;
}
int Pokemon::getDamage()
{
	return Damage;
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

void Pokemon::MostrarPokemon(Pokemon *poke)
{
	std::string nombre = poke->getNombre();

	int HP, ATK, ATKSP, DEF, SPDEF, VEL;

	if (nombre == "Bulbasaur")
	{
		Sprite(SpriteBulbasaurFront, SpriteBulbasaurBack, 24);
		setTipo("Planta");
		setNombre(nombre);
	}


	else if (nombre == "Ivysaur")
	{
		Sprite(SpriteIvysaurFront, SpriteIvysaurBack, 24);
		setTipo("Planta/Veneno");
		setNombre(nombre);
	}


	else if (nombre == "Venusaur")
	{
		Sprite(SpriteVenusaurFront, SpriteVenusaurBack, 23);
		setTipo("Planta/Veneno");
		setNombre(nombre);
	}

	else if (nombre == "Charmander")
	{
		Sprite(SpriteCharmanderFront, SpriteCharmanderBack, 22);
		setTipo("Fuego");
		setNombre(nombre);
	}


	else if (nombre == "Charmeleon")
	{
		Sprite(SpriteCharmeleonFront, SpriteCharmeleonBack, 23);
		setTipo("Fuego");
		setNombre(nombre);
	}

	else if (nombre == "Charizard")
	{
		Sprite(SpriteCharizardFront, SpriteCharizardBack, 33);
		setTipo("Fuego/Volador");
		setNombre(nombre);
	}

	HP = poke->getHP();
	ATK = poke->getATK();
	ATKSP = poke->getSPATK();
	DEF = poke->getDEF();
	SPDEF = poke->getSPDEF();
	VEL = poke->getVEL();

	std::cout << "1." << nombre << " / Tipo " << Tipo << " \nHP " << HP << " \nATK " << ATK <<
	" \nATKSP " << ATKSP << " \nDEF " << DEF << " \nSPDEF " << SPDEF <<  " \nVEL " << VEL <<  std::endl;

}
void Pokemon::MostrarPkmPokedex(Pokemon* Poke, std::string Descripcion)
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
	std::cout << Pokemon::nPokedex << "." << nombre << " / Tipo " << Tipo << " \n " << Descripcion << std::endl;
}
	
void Pokemon::RegistarPoke(int nPoke,int nivel, std::string tipo, std::string nombre)
{
	setTipo(tipo);
	setNombre(nombre);
	setNivel(nivel);
}

void Pokemon::AsignarAtaques(int num)
{
	if (num == 1)
	{
		setATK1("Absorber");
		setATK2("Desarrollo");
		setATK3("Placaje");
		setATK4("Hoja Afilada");
	}
	else if (num == 2)
	{
		setATK1("Hoja Afilada");
		setATK2("Drenadoras");
		setATK3("Megaagotar");
		setATK4("Desarrollo");
	}
	else if (num == 3)
	{
		setATK1("Somnifero");
		setATK2("Tormenta Floral");
		setATK3("Bomba Lodo");
		setATK4("Gigadrenado");
	}
	else if (num == 4)
	{
		setATK1("Ascuas");
		setATK2("Arañazo");
		setATK3("Malicioso");
		setATK4("Pantalla de humo");
	}
	else if (num == 5)
	{
		setATK1("Garra Dragon");
		setATK2("Lanzallamas");
		setATK3("Tumba Rocas");
		setATK4("Triturar");
	}
	else if (num == 6)
	{
		setATK1("Garra Dragon");
		setATK2("Lanzallamas");
		setATK3("Avalancha");
		setATK4("Triturar");
	}
}