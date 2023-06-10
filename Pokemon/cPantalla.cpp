#include <iostream>
#include "cPantalla.h"


void Pantalla::Mapeado()
{
	char Base[60][235];


		int fila = 30;
		int columna = 170;

		for (int i{ 0 }; i < 60; i++)
		{
			for (int j{ 0 }; j < 235; j++)
			{
				Base[i][j] = '_';
				if (j == 234)
				{
					std::cout << "\n";
					std::cout << Base[i][j];
				}
				else if ((29 < i < 51) && (169 < j < 226))
				{
					Base[i][j] = '@';
				}
				else
				{
					std::cout << Base[i][j];
				}
			}
		}

}





int main()
{




}