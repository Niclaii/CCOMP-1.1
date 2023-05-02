#include <iostream>

using namespace std;

/*void verificarfig(int fila,int columna,char Tablero,int i,int j)
{
	while(true)
	{
		if(Tablero[i][j]==)
	}
}
*/

int main()
{
	char Tablero[5][5], i{ 0 };
	int fila{ 1 },columna{1};
	char figura{ ' ' };
	bool primerapasada{ true }, jugador1{ true }, jugador2{false},tmp(false);
	
	do 
	{	
		//primera pasada
		if (primerapasada == true)
		{
			cout << "A B C D E" << endl;
			for (int i{ 1 }; i < 6; i++)
			{
				cout << "- - - - - " << i << endl;

			}
			primerapasada = false;
		}

		//Turno de los Jugadores
		if (jugador1)
		{
			cout << "Turno del Jugador 1" << endl;
			while(true)
			{
				cout << "Ingrese la fila deseada\n";
				cin >> fila;
				
				if(fila < 5)
				{
					break;
				}
				else
				{
					cout << "Ingrese otro numero: " << endl;
				}
			}

			
			while(true)
			{
				cout << "Ingrese la columna deseada\n";
				cin >> columna;
				if(columna < 5)
					{
						break;
					}
					else
					{
						cout << "Ingrese otro numero: " << endl;
					}
			}
	
			while(true)
			{
				cout << "Ingrese la figura que quiere utilizar (S,O): " << endl;
				cin >> figura;
				if(figura=='S'||figura=='s')
					{
						break;
					}
				else if(figura=='O' || figura == 'o')
					{
						break;
					}
					else
					{
						cout << "Ingrese 'S' o 'O': " << endl;
					}
			}
			
		}
		else if (jugador2)
		{
			cout << "Turno del jugador 2" << endl;

			while(true)
			{
				cout << "Ingrese la fila deseada\n";
				cin >> fila;
				if(fila <= 5)
				{
					break;
				}
				else
				{
					cout << "Ingrese otro numero: " << endl;
				}
			}

			
			while(true)
			{
				cout << "Ingrese la columna deseada\n";
				cin >> columna;
				if(columna < 5)
					{
						break;
					}
					else
					{
						cout << "Ingrese otro numero: " << endl;
					}
			}
	
			while(true)
			{
				cout << "Ingrese la figura que quiere utilizar (S,O): " << endl;
				cin >> figura;
				if(figura=='S'||figura=='s')
					{
						break;
					}
				else if(figura=='O' || figura == 'o')
					{
						break;
					}
					else
					{
						cout << "Ingrese otro numero: " << endl;
					}
			}			
			
		}
		else
		{
			cout << "ocurrio un problema" << endl;
		}
		
		//Asignar valores
		for (int i{ 1 }; i <= 5; i++)
		{
			for (int j{ 1 }; j <= 5; j++)
			{
				if (i<6 && j<6)
				{
					{
						Tablero[fila][columna]=figura;
						if(Tablero[i][j]=='S'|| Tablero[i][j]=='s')
						{		
							cout<<"ingrese otra posicion" << endl;
						}
						else if(Tablero[i][j]=='O'||Tablero[i][j]=='o')
						{
							cout<<"ingrese otra posicion" << endl;
						}	
						else
						{
							Tablero[i][j]='_';
							
						}
					}
					
							
				}
			}
		}


		//Imprimir Tablero
		
		for(int i{1};i<6;i++)
		{
			for(int j {1} ; j<6;j++)
			{
				cout << Tablero[i][j];
			}
			cout << endl;
		}








		//Reinicio de variables y cambio de turnos
			tmp = jugador1;
			jugador1 = jugador2;
			jugador2 = tmp;
			fila = 0;
			columna = 0;
		i++;

	} while (i < 25);

	





	return 0;
}
