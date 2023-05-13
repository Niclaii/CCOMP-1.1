#include <iostream>
//#include "MyLib.cpp"

using namespace std;

void JugarDNuevo(char replay,bool &Win,char Tablero[5][5],bool jugador1,bool jugador2,bool tmp,bool V11,bool V12,bool V13,bool V14, bool V15, bool V21, bool V22, bool V23
	,bool V24, bool V25, bool V31, bool V32, bool V33, bool V34, bool V35, bool V41, bool V42, bool V43, bool V44, bool V45, bool V51,bool V52, bool V53, bool V54, bool V55, bool FG1, bool FG2, bool FG3
	,bool FG4, bool FG5, bool FG6, bool FG7, bool FG8,bool FG9, bool FG10, bool FG11, bool FG12
	,bool FG13, bool FG14, bool FG15, bool FG16, bool FG17, bool FG18, bool FG19, bool FG20, bool FG21, bool FG22, bool FG23, bool FG24, bool FG25, bool FG26, bool FG27, bool FG28, bool FG29
	,bool FG30, bool FG31, bool FG32, bool FG33, bool FG34, bool FG35, bool FG36, bool FG37, bool FG38, bool FG39, bool FG40, bool FG41, bool FG42, bool FG43, bool FG44, bool FG45
	,bool FG46, bool FG47, bool FG48,int i, int fila,int columna,int PJugador1, int PJugador2)
{
	if (replay == 'S')
	{
		Win = false;
		
		cout << "A B C D E" << endl;
		for (int i{ 1 }; i < 6; i++)
		{
			cout << "\033[32m- - - - - " << i << "\033[0m" << endl;

		}
		
		for (int i{ 1 }; i < 6; i++)
		{
			for (int j{ 1 }; j < 6; j++)
			{
				Tablero[i][j] = '_';
			}
		}
		
		jugador1 = true; jugador2 = false; tmp = false; V11 = false; V12 = false; V13 = false; V14 = false; V15 = false; V21 = false; V22 = false; V23 = false;V24 = false; V25 = false;
		V31 = false; V32 = false; V33 = false; V34 = false; V35 = false; V41 = false; V42 = false; V43 = false; V44 = false; V45 = false; V51 = false;
		V52 = false; V53 = false; V54 = false; V55 = false; FG1 = true; FG2 = true; FG3 = true; FG4 = true; FG5 = true; FG6 = true; FG7 = true; FG8 = true; FG9 = true; FG10 = true; FG11 = true; FG12 = true;
		FG13 = true; FG14 = true; FG15 = true; FG16 = true; FG17 = true; FG18 = true; FG19 = true; FG20 = true; FG21 = true; FG22 = true; FG23 = true; FG24 = true; FG25 = true; FG26 = true; FG27 = true; FG28 = true; FG29 = true;
		FG30 = true; FG31 = true; FG32 = true; FG33 = true; FG34 = true; FG35 = true; FG36 = true; FG37 = true; FG38 = true; FG39 = true; FG40 = true; FG41 = true; FG42 = true; FG43 = true; FG44 = true; FG45 = true;
		FG46 = true; FG47 = true; FG48 = true; i = 0; fila = 1; columna = 1; PJugador1 = 0; PJugador2 = 0;

	}
}

void FormasDeGanar(bool &V1,bool &V2,bool &V3, int& PJugador1, int& PJugador2,bool jugador1 , bool jugador2,bool &FG)
{
	if (FG == true)
	{
		if (V1 == true && V2 == true && V3 == true)
		{
			if (jugador1 == true)
			{
				PJugador1 = PJugador1 + 1;
				FG = false;
			}
			else if (jugador2 == true)
			{
				PJugador2 = PJugador2 + 1;
				FG = false;
			}
		}
	}
}


void verificadorcasilla(bool &V11, bool &V12, bool &V13, bool &V14, bool &V15,
	bool &V21, bool &V22, bool &V23, bool &V24, bool &V25, bool &V31, bool &V32, bool  &V33, bool &V34, bool &V35, bool &V41, bool &V42,
	bool &V43, bool &V44, bool &V45, bool &V51, bool &V52, bool &V53, bool &V54, bool &V55,int fila,int columna )
{
	if (fila == 1 && columna == 1)
	{
		V11 = true;
	}
	else if (fila == 1 && columna == 2)
	{
		V12 = true;
	}
	else if (fila == 1 && columna == 3)
	{
		V13 = true;
	}
	else if (fila == 1 && columna == 4)
	{
		V14 = true;
	}
	else if (fila == 1 && columna == 5)
	{
		V15 = true;
	}
	else if (fila == 2 && columna == 1)
	{
		V21 = true;
	}
	else if (fila == 2 && columna == 2)
	{
		V22 = true;
	}
	else if (fila == 2 && columna == 3)
	{
		V23 = true;
	}
	else if (fila == 2 && columna == 4)
	{
		V24 = true;
	}
	else if (fila == 2 && columna == 5)
	{
		V25 = true;
	}
	else if (fila == 3 && columna == 1)
	{
		V31 = true;
	}
	else if (fila == 3 && columna == 2)
	{
		V32 = true;
	}
	else if (fila == 3 && columna == 3)
	{
		V33 = true;
	}
	else if (fila == 3 && columna == 4)
	{
		V34 = true;
	}
	else if (fila == 3 && columna == 5)
	{
		V35 = true;
	}
	else if (fila == 4 && columna == 1)
	{
		V41 = true;
	}
	else if (fila == 4 && columna == 2)
	{
		V42 = true;
	}
	else if (fila == 4 && columna == 3)
	{
		V43 = true;
	}
	else if (fila == 4 && columna == 4)
	{
		V44 = true;
	}
	else if (fila == 4 && columna == 5)
	{
		V45 = true;
	}
	else if (fila == 5 && columna == 1)
	{
		V51 = true;
	}
	else if (fila == 5 && columna == 2)
	{
		V52 = true;
	}
	else if (fila == 5 && columna == 3)
	{
		V53 = true;
	}
	else if (fila == 5 && columna == 4)
	{
		V54 = true;
	}
	else if (fila == 5 && columna == 5)
	{
		V55 = true;
	}
}


void ingresarfila(int& fila)
{
	while (true)
	{
		std::cout << "Ingrese la fila deseada\n";
		std::cin >> fila;

		if (fila < 6)
		{
			break;
		}
		else
		{
			std::cout << "Ingrese otro numero: " << std::endl;
		}
	}
}

void ingresarcolumna(int& columna)
{
	while (true)
	{
		std::cout << "Ingrese la columna deseada\n";
		std::cin >> columna;
		if (columna < 6)
		{
			break;
		}
		else
		{
			std::cout << "Ingrese otro numero: " << std::endl;
		}
	}
}

void ingresarfigura(char& figura)
{
	while (true)
	{
		std::cout << "Ingrese la figura que quiere utilizar (S,O): " << std::endl;
		std::cin >> figura;
		if (figura == 'S' || figura == 's')
		{
			break;
		}
		else if (figura == 'O' || figura == 'o')
		{
			break;
		}
		else
		{
			std::cout << "\033[34mIngrese 'S' o 'O':\033[0m " << std::endl;
		}
	}
}

void ingresarvalores(int& fila, int& columna, char& figura, bool jugador1, bool jugador2,char Tablero[5][5])
{
	if (jugador1 == true)
	{
		std::cout << "Turno del Jugador 1" << std::endl;
		ingresarfila(fila);
		ingresarcolumna(columna);
		if (Tablero[fila][columna] == ' ' || Tablero[fila][columna] == '_')
		{
			ingresarfigura(figura);
		}
		else
		{
			cout << "Casilla ocupada ,ingrese nuevamente los valores: " << endl;
			ingresarfila(fila);
			ingresarcolumna(columna);
		}
	}
	else if (jugador2 == true)
	{
		std::cout << "Turno del Jugador 2" << std::endl;
		ingresarfila(fila);
		ingresarcolumna(columna);
		if (Tablero[fila][columna] == ' ' || Tablero[fila][columna] == '_')
		{
			ingresarfigura(figura);
		}
		else
		{
			cout << "Casilla ocupada ,ingrese nuevamente los valores: " << endl;
			ingresarfila(fila);
			ingresarcolumna(columna);
		}
	}
}

int main()
{
	char Tablero[5][5], i{ 0 };
	int fila{ 1 }, columna{ 1 }, PJugador1{ 0 }, PJugador2{0};
	char figura{ ' ' }, replay{};
	bool primerapasada{ true }, jugador1{ true }, jugador2{ false }, tmp(false),V11{false},V12{ false },V13{ false }, V14{ false }, V15{ false }, V21{ false }, V22{ false }, V23{ false }
	, V24{ false }, V25{ false }, V31{ false }, V32{ false }, V33{ false }, V34{ false }, V35{ false }, V41{ false }, V42{ false }, V43{ false }, V44{ false }, V45{ false }, V51{ false }
	, V52{ false }, V53{ false }, V54{ false }, V55{ false }, FG1{ true }, FG2{ true }, FG3{ true }, FG4{ true }, FG5{ true }, FG6{ true }, FG7{ true }, FG8{ true }, FG9{ true }, FG10{ true }, FG11{ true }, FG12{ true }
	, FG13{ true }, FG14{ true }, FG15{ true }, FG16{ true }, FG17{ true }, FG18{ true }, FG19{ true }, FG20{ true }, FG21{ true }, FG22{ true }, FG23{ true }, FG24{ true }, FG25{ true }, FG26{ true }, FG27{ true }, FG28{ true }, FG29{ true }
	, FG30{ true }, FG31{ true }, FG32{ true }, FG33{ true }, FG34{ true }, FG35{ true }, FG36{ true }, FG37{ true }, FG38{ true }, FG39{ true }, FG40{ true }, FG41{ true }, FG42{ true }, FG43{ true }, FG44{ true }, FG45{ true }
	, FG46{ true }, FG47{ true }, FG48{ true }, Win{false};


	do
	{
		//primera pasada
		if (primerapasada == true)
		{
			cout << "A B C D E" << endl;
			for (int i{ 1 }; i < 6; i++)
			{
				cout << "\033[32m- - - - - " << i << "\033[0m" << endl;

			}
			// Poner las casillas con '_' (TABLERO BASE)
			for (int i{ 1 }; i < 6; i++)
			{
				for (int j{ 1 }; j < 6; j++)
				{
					Tablero[i][j] = '_';
				}
			}
			primerapasada = false;
		}

		//Turno de los Jugadores
		if (jugador1)
		{
			ingresarvalores(fila, columna, figura, jugador1,jugador2,Tablero);
			verificadorcasilla(V11, V12, V13, V14, V15, V21, V22, V23, V24, V25, V31, V32, V33, V34, V35, V41, V42, V43, V44, V45, V51, V52, V53, V54, V55, fila, columna);
			
		}
		else if (jugador2)
		{
			ingresarvalores(fila, columna, figura, jugador1,jugador2,Tablero);
			verificadorcasilla(V11, V12, V13, V14, V15, V21, V22, V23, V24, V25, V31, V32, V33, V34, V35, V41, V42, V43, V44, V45, V51, V52, V53, V54, V55, fila, columna);
		}
		else
		{
			cout << "ocurrio un problema" << endl;
		}

		//Asignar valores
		for (int i{ 1 }; i < 6; i++)
		{
			for (int j{ 1 }; j < 6; j++)
			{
				if (i < 6 && j < 6)
				{
					{
						Tablero[fila][columna] = figura;
						if (Tablero[i][j] == 'S' || Tablero[i][j] == 's')
						{
							cout << "ingrese otra posicion" << endl;
						}
						else if (Tablero[i][j] == 'O' || Tablero[i][j] == 'o')
						{
							cout << "ingrese otra posicion" << endl;
						}
						else
						{
							Tablero[i][j] = '_';

						}
					}
				}
			}
		}

		//Imprimir Tablero

		for (int i{ 1 }; i < 6; i++)
		{
			for (int j{ 1 }; j < 6; j++)
			{
				cout << Tablero[i][j]<< " ";
			}
			cout << endl;
		}


		// Formas de ganar
		FormasDeGanar(V11, V12, V13, PJugador1, PJugador2, jugador1, jugador2, FG1);
		FormasDeGanar(V11, V22, V33, PJugador1, PJugador2, jugador1, jugador2, FG2);//
		FormasDeGanar(V11, V21, V31, PJugador1, PJugador2, jugador1, jugador2, FG3);//
		FormasDeGanar(V12, V23, V34, PJugador1, PJugador2, jugador1, jugador2, FG4);//	
		FormasDeGanar(V12, V22, V32, PJugador1, PJugador2, jugador1, jugador2, FG5);//
		FormasDeGanar(V13, V23, V33, PJugador1, PJugador2, jugador1, jugador2, FG6);//
		FormasDeGanar(V13, V14, V15, PJugador1, PJugador2, jugador1, jugador2, FG7);//
		FormasDeGanar(V31, V22, V13, PJugador1, PJugador2, jugador1, jugador2, FG8);//
		FormasDeGanar(V13, V24, V35, PJugador1, PJugador2, jugador1, jugador2, FG9);//
		FormasDeGanar(V32, V23, V14, PJugador1, PJugador2, jugador1, jugador2, FG10);//
		FormasDeGanar(V14, V24, V34, PJugador1, PJugador2, jugador1, jugador2, FG11);//
		FormasDeGanar(V15, V25, V35, PJugador1, PJugador2, jugador1, jugador2, FG12);//
		FormasDeGanar(V33, V24, V15, PJugador1, PJugador2, jugador1, jugador2, FG13);//
		FormasDeGanar(V21, V22, V23, PJugador1, PJugador2, jugador1, jugador2, FG14);//
		FormasDeGanar(V21, V32, V43, PJugador1, PJugador2, jugador1, jugador2, FG15);//
		FormasDeGanar(V23, V24, V25, PJugador1, PJugador2, jugador1, jugador2, FG16);//
		FormasDeGanar(V22, V23, V24, PJugador1, PJugador2, jugador1, jugador2, FG17);//
		FormasDeGanar(V41, V32, V23, PJugador1, PJugador2, jugador1, jugador2, FG18);//
		FormasDeGanar(V23, V34, V45, PJugador1, PJugador2, jugador1, jugador2, FG19);//
		FormasDeGanar(V42, V33, V24, PJugador1, PJugador2, jugador1, jugador2, FG20);//
		FormasDeGanar(V24, V34, V44, PJugador1, PJugador2, jugador1, jugador2, FG21);//
		FormasDeGanar(V43, V34, V25, PJugador1, PJugador2, jugador1, jugador2, FG22);//
		FormasDeGanar(V25, V35, V45, PJugador1, PJugador2, jugador1, jugador2, FG23);//
		FormasDeGanar(V21, V31, V41, PJugador1, PJugador2, jugador1, jugador2, FG24);//
		FormasDeGanar(V31, V32, V33, PJugador1, PJugador2, jugador1, jugador2, FG25);//
		FormasDeGanar(V31, V42, V53, PJugador1, PJugador2, jugador1, jugador2, FG26);//
		FormasDeGanar(V31, V41, V51, PJugador1, PJugador2, jugador1, jugador2, FG27);//
		FormasDeGanar(V22, V32, V42, PJugador1, PJugador2, jugador1, jugador2, FG28);//
		FormasDeGanar(V32, V42, V52, PJugador1, PJugador2, jugador1, jugador2, FG29);//
		FormasDeGanar(V32, V33, V34, PJugador1, PJugador2, jugador1, jugador2, FG30);//
		FormasDeGanar(V32, V43, V54, PJugador1, PJugador2, jugador1, jugador2, FG31);//
		FormasDeGanar(V33, V23, V43, PJugador1, PJugador2, jugador1, jugador2, FG32);//
		FormasDeGanar(V22, V33, V44, PJugador1, PJugador2, jugador1, jugador2, FG33);//
		FormasDeGanar(V33, V43, V53, PJugador1, PJugador2, jugador1, jugador2, FG34);//
		FormasDeGanar(V51, V42, V33, PJugador1, PJugador2, jugador1, jugador2, FG35);//
		FormasDeGanar(V33, V44, V55, PJugador1, PJugador2, jugador1, jugador2, FG36);//
		FormasDeGanar(V33, V34, V35, PJugador1, PJugador2, jugador1, jugador2, FG37);//
		FormasDeGanar(V34, V44, V54, PJugador1, PJugador2, jugador1, jugador2, FG38);//
		FormasDeGanar(V52, V43, V34, PJugador1, PJugador2, jugador1, jugador2, FG39);//
		FormasDeGanar(V35, V45, V55, PJugador1, PJugador2, jugador1, jugador2, FG40);//
		FormasDeGanar(V53, V44, V35, PJugador1, PJugador2, jugador1, jugador2, FG41);//
		FormasDeGanar(V41, V42, V43, PJugador1, PJugador2, jugador1, jugador2, FG42);//
		FormasDeGanar(V42, V43, V44, PJugador1, PJugador2, jugador1, jugador2, FG43);//
		FormasDeGanar(V23, V33, V43, PJugador1, PJugador2, jugador1, jugador2, FG44);//
		FormasDeGanar(V43, V44, V45, PJugador1, PJugador2, jugador1, jugador2, FG45);//
		FormasDeGanar(V51, V52, V53, PJugador1, PJugador2, jugador1, jugador2, FG46);//
		FormasDeGanar(V52, V53, V54, PJugador1, PJugador2, jugador1, jugador2, FG47);//
		FormasDeGanar(V53, V54, V55, PJugador1, PJugador2, jugador1, jugador2, FG48);//
			
		cout << "J1 Puntos: " << PJugador1 << " / " << "J2 Puntos: " << PJugador2 << endl;


		//Reinicio de variables y cambio de turnos
		tmp = jugador1;
		jugador1 = jugador2;
		jugador2 = tmp;
		fila = 0;
		columna = 0;
		i++;

		if (i >= 25)
		{
			if (PJugador1 > PJugador2)
			{
				cout << "El ganador es el Jugador 1!!" << endl;
				cout << "Desea jugar de nuevo? (S/N)" << endl;
				cin >> replay;
				JugarDNuevo(replay, Win, Tablero, jugador1, jugador2, tmp, V11, V12, V13, V14, V15, V21, V22, V23, V24, V25, V31, V32, V33, V34, V35, V41, V42, V43, V44, V45, V51, V52, V53, V54, V55, FG1, FG2, FG3, FG4, FG5, FG6, FG7, FG8, FG9, FG10,
					FG11, FG12, FG13, FG14, FG15, FG16, FG17, FG18, FG19, FG20, FG21, FG22, FG23, FG24, FG25, FG26, FG27, FG28, FG29, FG30, FG31, FG32, FG33, FG34, FG35, FG36, FG37, FG38, FG39, FG40, FG41, FG42, FG43, FG44, FG45, FG46, FG47, FG48,i,fila
					,columna,PJugador1,PJugador2);
				if (replay == 'N')
				{
					break;
				}
			}
			else if (PJugador1 < PJugador2)
			{
				cout << "El ganador es el Jugador 2!!" << endl;
				cout << "Desea jugar de nuevo? (S/N)" << endl;
				cin >> replay;
				JugarDNuevo(replay, Win, Tablero, jugador1, jugador2, tmp, V11, V12, V13, V14, V15, V21, V22, V23, V24, V25, V31, V32, V33, V34, V35, V41, V42, V43, V44, V45, V51, V52, V53, V54, V55, FG1, FG2, FG3, FG4, FG5, FG6, FG7, FG8, FG9, FG10,
					FG11, FG12, FG13, FG14, FG15, FG16, FG17, FG18, FG19, FG20, FG21, FG22, FG23, FG24, FG25, FG26, FG27, FG28, FG29, FG30, FG31, FG32, FG33, FG34, FG35, FG36, FG37, FG38, FG39, FG40, FG41, FG42, FG43, FG44, FG45, FG46, FG47, FG48, i, fila
					, columna, PJugador1, PJugador2);
				if (replay == 'N')
				{
					break;
				}
			}
		}
		




	} while (Win==false );
	return 0;
}







