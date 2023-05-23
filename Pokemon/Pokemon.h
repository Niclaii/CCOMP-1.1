#pragma once
#include <iostream>
#include <string>


class Pokemon
{
	private:

		int Stats[6];
		int	Nivel, nPokedex;
		std::string Sprite,Tipo,Nombre, Ataque1, Ataque2, Ataque3, Ataque4;

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
		int getNivel()
		{
			return Nivel;
		}

		void setNivel(int nivel)
		{
			Nivel = nivel;
		}
		int getnPokedex()
		{
			return nPokedex;
		}

		void setnPokedex(int nPoke)
		{
			nPokedex = nPoke;
		}
		std::string getSprite()
		{
			return Sprite;
		}

		void setSprite(std::string sprite)
		{
			Sprite = sprite;
		}
		std::string getTipo()
		{
			return Tipo;
		}

		void setTipo(std::string tipo)
		{
			Tipo = tipo;
		}
		std::string getNombre()
		{
			return Nombre;
		}

		void setNombre(std::string nombre)
		{
			Nombre = nombre;
		}

		int getHP()
		{
			return Stats[0];
		}

		void setHP(int HP)
		{
			Stats[0] = HP;
		}
		int getATK()
		{
			return Stats[1];
		}

		void setATK(int ATK)
		{
			Stats[1] = ATK;
		}
		int getDEF()
		{
			return Stats[2];
		}

		void setDEF(int DEF)
		{
			Stats[2] = DEF;
		}
		int getSPATK()
		{
			return Stats[3];
		}

		void setSPATK(int SPATK)
		{
			Stats[3] = SPATK;
		}
		int getSPDEF()
		{
			return Stats[4];
		}

		void setSPDEF(int SPDEF)
		{
			Stats[4] = SPDEF;
		}
		int getVEL()
		{
			return Stats[5];
		}

		void setVEL(int VEL)
		{
			Stats[5] = VEL;
		}
		// ---------------------------------------------------------------------------------------------------------------- 


		// METODOS DE LA CLASE ----------------------------------------------------------------------------------------------

		void RegistrarPokedex(int nPoke, std::string sprite, std::string tipo, std::string nombre,int nivel)
		{
			setnPokedex(nPoke);
			setSprite(sprite);
			setTipo(tipo);
			setNombre(nombre);
			setNivel(nivel);
		}

		void IngresarStats()
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

		void MostrarPoke()
		{
			std::cout << nPokedex << "." << Nombre << " / Tipo " << Tipo << " / Nivel " << Nivel << std::endl;
			std::cout << "HP : " << Stats[0] << "\nATK : " << Stats[1] << "\nDEF : " << Stats[2] << "\nSP.ATK : " << Stats[3] << "\nSP.DEF : " << Stats[4] << "\nVEL : " << Stats[5] << "\n";
		}





};

