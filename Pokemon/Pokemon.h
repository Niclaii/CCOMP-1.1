#pragma once
#include <iostream>
#include <string>

class Pokemon
{
	private:

		//int Stats[6];
		int	Nivel, nPokedex;
		string Sprite;
		string Tipo;
		string Nombre;


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
		string getSprite()
		{
			return Sprite;
		}

		void setSprite(string sprite)
		{
			Sprite = sprite;
		}
		string getTipo()
		{
			return Tipo;
		}

		void setTipo(string tipo)
		{
			Tipo = tipo;
		}
		string getNombre()
		{
			return Nombre;
		}

		void setNombre(string nombre)
		{
			Nombre = nombre;
		}

		void RegistrarPokedex(int nPoke, string sprite, string tipo, string nombre)
		{
			setnPokedex(nPoke);
			setSprite(sprite);
			setTipo(tipo);
			setNombre(nombre);
	
		}

		void MostrarPoke()
		{
			cout << nPokedex << "° " << Nombre << " Tipo:" << Tipo << " Nivel:" << Nivel << endl;
		}








};

