#pragma once

class Pantalla
{
	private:

		int fila, columna;


	public:

		Pantalla()
		{

			fila = 179;
			columna = 30;

		};

		void setFila(int);
		int getFila();

		void setColumna(int);
		int getColumna();



		//METODOS----------------------------------------------------
		void Mapeado();

		



};