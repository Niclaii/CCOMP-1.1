#pragma once
#include <iostream>
#include <string>


class Pokemon
{
private:

	int Stats[6];
	int	Nivel, nPokedex;
	std::string Sprite, Tipo, Nombre, Ataque1, Ataque2, Ataque3, Ataque4;

public:
	// CONSTRUCTOR ---------------------------------------------------------------------------------------------------------------------
	Pokemon()
	{
		Nivel = 0;
		nPokedex = 0;
		Sprite = " ";
		Tipo = " ";
		Nombre = " ";
		Stats[0] = 0; //HP
		Stats[1] = 0; //ATK
		Stats[2] = 0; //DEF
		Stats[3] = 0; //SP.ATK
		Stats[4] = 0; //SP.DEF
		Stats[5] = 0; //VEL
		Ataque1 = " ";
		Ataque2 = " ";
		Ataque3 = " ";
		Ataque4 = " ";

	}
	// SETTERS Y GETTERS --------------------------------------------------------------------------------------------------------------
	int getNivel();
	void setNivel(int);

	int getnPokedex();
	void setnPokedex(int);

	std::string getSprite();
	void setSprite(std::string);

	std::string getTipo();
	void setTipo(std::string);

	std::string getNombre();
	void setNombre(std::string);

	int getHP();
	void setHP(int);

	int getATK();
	void setATK(int);

	int getDEF();
	void setDEF(int);

	int getSPATK();
	void setSPATK(int SPATK);

	int getSPDEF();
	void setSPDEF(int);

	int getVEL();
	void setVEL(int VEL);

	// ---------------------------------------------------------------------------------------------------------------- 


	// METODOS DE LA CLASE ----------------------------------------------------------------------------------------------

	void RegistrarPokedex(int, std::string, std::string, std::string, int);

	void IngresarStats();

	void MostrarPoke();

};
