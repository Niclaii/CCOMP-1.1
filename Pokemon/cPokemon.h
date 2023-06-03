#pragma once
#include <iostream>
#include <string>


class Pokemon
{
private:

	int Stats[6];
	int	Nivel, nPokedex;
	std::string Tipo, Nombre, Ataque1, Ataque2, Ataque3, Ataque4;
	
public:
	// CONSTRUCTOR ---------------------------------------------------------------------------------------------------------------------
	Pokemon()
	{
		Nivel = 0;
		nPokedex = 0;
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

	std::string getATK1();
	void setATK1(std::string Atk1);

	std::string getATK2();
	void setATK2(std::string Atk2);

	std::string getATK3();
	void setATK3(std::string Atk3);

	std::string getATK4();
	void setATK4(std::string Atk4);
	// ---------------------------------------------------------------------------------------------------------------- 


	// METODOS DE LA CLASE ----------------------------------------------------------------------------------------------

	void IngresarStats();

	void MostrarPoke();

	void AsignarAtaques(int);

	void RegistrarPokedex(int , std::string , std::string , int );


};
