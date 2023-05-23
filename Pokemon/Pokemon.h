#pragma once
#include <iostream>
#include <string>


class Pokemon
{
	private:

		//int Stats[6];
		int	Nivel, nPokedex;
		std::string Sprite;
		std::string Tipo;
		std::string Nombre;


	public:

		Pokemon() 
		
		{ 
			Nivel = 0;
			nPokedex = 0;
			Sprite = " ";
			Tipo = " ";
			Nombre = " "; 
		}

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

		void RegistrarPokedex(int nPoke, std::string sprite, std::string tipo, std::string nombre,int nivel)
		{
			setnPokedex(nPoke);
			setSprite(sprite);
			setTipo(tipo);
			setNombre(nombre);
			setNivel(nivel);
	
		}

		void MostrarPoke()
		{
			std::cout << nPokedex << "." << Nombre << " / Tipo " << Tipo << " / Nivel " << Nivel << std::endl;
		}








};

