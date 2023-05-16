#include <iostream>
#include <cstdlib> // para rand()
#include <ctime> // para time()
//#include "MyLib.cpp"

using namespace std;


void Turnos(bool multijugador, bool singleplayer, bool& tmp, bool& jugador1, bool& jugador2, bool& IAF, bool& IAM, bool& IAD, int& fila, int& columna, int& i, int alternativa2)
{
	if (multijugador == true)
	{
		tmp = jugador1;
		jugador1 = jugador2;
		jugador2 = tmp;
		fila = 0;
		columna = 0;
		i++;
	}
	else if (singleplayer == true)
	{
		if (alternativa2 == 1)
		{
			tmp = jugador1;
			jugador1 = IAF;
			IAF = tmp;
			fila = 0;
			columna = 0;
			i++;
		}
		else if (alternativa2 == 2)
		{
			tmp = jugador1;
			jugador1 = IAM;
			jugador2 = tmp;
			fila = 0;
			columna = 0;
			i++;
		}
		else if (alternativa2 == 3)
		{
			tmp = jugador1;
			jugador1 = IAD;
			IAD = tmp;
			fila = 0;
			columna = 0;
			i++;
		}
	}
}

void JugarDNuevo(char replay, bool& Win, char Tablero[5][5], bool jugador1, bool jugador2, bool tmp, bool V11, bool V12, bool V13, bool V14, bool V15, bool V21, bool V22, bool V23
	, bool V24, bool V25, bool V31, bool V32, bool V33, bool V34, bool V35, bool V41, bool V42, bool V43, bool V44, bool V45, bool V51, bool V52, bool V53, bool V54, bool V55, bool FG1, bool FG2, bool FG3
	, bool FG4, bool FG5, bool FG6, bool FG7, bool FG8, bool FG9, bool FG10, bool FG11, bool FG12
	, bool FG13, bool FG14, bool FG15, bool FG16, bool FG17, bool FG18, bool FG19, bool FG20, bool FG21, bool FG22, bool FG23, bool FG24, bool FG25, bool FG26, bool FG27, bool FG28, bool FG29
	, bool FG30, bool FG31, bool FG32, bool FG33, bool FG34, bool FG35, bool FG36, bool FG37, bool FG38, bool FG39, bool FG40, bool FG41, bool FG42, bool FG43, bool FG44, bool FG45
	, bool FG46, bool FG47, bool FG48, int i, int fila, int columna, int PJugador1, int PJugador2)
{
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

	jugador1 = true; jugador2 = false; tmp = false; V11 = false; V12 = false; V13 = false; V14 = false; V15 = false; V21 = false; V22 = false; V23 = false; V24 = false; V25 = false;
	V31 = false; V32 = false; V33 = false; V34 = false; V35 = false; V41 = false; V42 = false; V43 = false; V44 = false; V45 = false; V51 = false;
	V52 = false; V53 = false; V54 = false; V55 = false; FG1 = true; FG2 = true; FG3 = true; FG4 = true; FG5 = true; FG6 = true; FG7 = true; FG8 = true; FG9 = true; FG10 = true; FG11 = true; FG12 = true;
	FG13 = true; FG14 = true; FG15 = true; FG16 = true; FG17 = true; FG18 = true; FG19 = true; FG20 = true; FG21 = true; FG22 = true; FG23 = true; FG24 = true; FG25 = true; FG26 = true; FG27 = true; FG28 = true; FG29 = true;
	FG30 = true; FG31 = true; FG32 = true; FG33 = true; FG34 = true; FG35 = true; FG36 = true; FG37 = true; FG38 = true; FG39 = true; FG40 = true; FG41 = true; FG42 = true; FG43 = true; FG44 = true; FG45 = true;
	FG46 = true; FG47 = true; FG48 = true; i = 0; fila = 1; columna = 1; PJugador1 = 0; PJugador2 = 0;
}


void verificadorcasilla(bool& V11, bool& V12, bool& V13, bool& V14, bool& V15,
	bool& V21, bool& V22, bool& V23, bool& V24, bool& V25, bool& V31, bool& V32, bool& V33, bool& V34, bool& V35, bool& V41, bool& V42,
	bool& V43, bool& V44, bool& V45, bool& V51, bool& V52, bool& V53, bool& V54, bool& V55, int fila, int columna, int& CV11, int& CV12, int& CV13, int& CV14, int& CV15, int& CV21, int& CV22, int& CV23, int& CV24, int& CV25, int& CV31, int& CV32
	, int& CV33, int& CV34, int& CV35, int& CV41, int& CV42, int& CV43, int& CV44, int& CV45, int& CV51, int& CV52, int& CV53, int& CV54, int& CV55, char fig)
{
	if (fila == 1 && columna == 1)
	{
		V11 = true;
		if (fig == 'O' || fig == 'o')
		{
			CV11 = 1;
		}
		else if (fig == 'S' || fig == 's')
		{
			CV11 = 2;
		}
	}
	else if (fila == 1 && columna == 2)
	{
		V12 = true;
		if (fig == 'O' || fig == 'o')
		{
			CV12 = 1;
		}
		else if (fig == 'S' || fig == 's')
		{
			CV12 = 2;
		}
	}
	else if (fila == 1 && columna == 3)
	{
		V13 = true;
		if (fig == 'O' || fig == 'o')
		{
			CV13 = 1;
		}
		else if (fig == 'S' || fig == 's')
		{
			CV13 = 2;
		}
	}
	else if (fila == 1 && columna == 4)
	{
		V14 = true;
		if (fig == 'O' || fig == 'o')
		{
			CV14 = 1;
		}
		else if (fig == 'S' || fig == 's')
		{
			CV14 = 2;
		}
	}
	else if (fila == 1 && columna == 5)
	{
		V15 = true;
		if (fig == 'O' || fig == 'o')
		{
			CV15 = 1;
		}
		else if (fig == 'S' || fig == 's')
		{
			CV15 = 2;
		}
	}
	else if (fila == 2 && columna == 1)
	{
		V21 = true;
		if (fig == 'O' || fig == 'o')
		{
			CV21 = 1;
		}
		else if (fig == 'S' || fig == 's')
		{
			CV21 = 2;
		}
	}
	else if (fila == 2 && columna == 2)
	{
		V22 = true;
		if (fig == 'O' || fig == 'o')
		{
			CV22 = 1;
		}
		else if (fig == 'S' || fig == 's')
		{
			CV22 = 2;
		}
	}
	else if (fila == 2 && columna == 3)
	{
		V23 = true;
		if (fig == 'O' || fig == 'o')
		{
			CV23 = 1;
		}
		else if (fig == 'S' || fig == 's')
		{
			CV23 = 2;
		}
	}
	else if (fila == 2 && columna == 4)
	{
		V24 = true;
		if (fig == 'O' || fig == 'o')
		{
			CV24 = 1;
		}
		else if (fig == 'S' || fig == 's')
		{
			CV24 = 2;
		}
	}
	else if (fila == 2 && columna == 5)
	{
		V25 = true;
		if (fig == 'O' || fig == 'o')
		{
			CV25 = 1;
		}
		else if (fig == 'S' || fig == 's')
		{
			CV25 = 2;
		}
	}
	else if (fila == 3 && columna == 1)
	{
		V31 = true;
		if (fig == 'O' || fig == 'o')
		{
			CV31 = 1;
		}
		else if (fig == 'S' || fig == 's')
		{
			CV31 = 2;
		}
	}
	else if (fila == 3 && columna == 2)
	{
		V32 = true;
		if (fig == 'O' || fig == 'o')
		{
			CV32 = 1;
		}
		else if (fig == 'S' || fig == 's')
		{
			CV32 = 2;
		}
	}
	else if (fila == 3 && columna == 3)
	{
		V33 = true;
		if (fig == 'O' || fig == 'o')
		{
			CV33 = 1;
		}
		else if (fig == 'S' || fig == 's')
		{
			CV33 = 2;
		}
	}
	else if (fila == 3 && columna == 4)
	{
		V34 = true;
		if (fig == 'O' || fig == 'o')
		{
			CV34 = 1;
		}
		else if (fig == 'S' || fig == 's')
		{
			CV34 = 2;
		}
	}
	else if (fila == 3 && columna == 5)
	{
		V35 = true;
		if (fig == 'O' || fig == 'o')
		{
			CV35 = 1;
		}
		else if (fig == 'S' || fig == 's')
		{
			CV35 = 2;
		}
	}
	else if (fila == 4 && columna == 1)
	{
		V41 = true;
		if (fig == 'O' || fig == 'o')
		{
			CV41 = 1;
		}
		else if (fig == 'S' || fig == 's')
		{
			CV41 = 2;
		}
	}
	else if (fila == 4 && columna == 2)
	{
		V42 = true;
		if (fig == 'O' || fig == 'o')
		{
			CV42 = 1;
		}
		else if (fig == 'S' || fig == 's')
		{
			CV42 = 2;
		}
	}
	else if (fila == 4 && columna == 3)
	{
		V43 = true;
		if (fig == 'O' || fig == 'o')
		{
			CV43 = 1;
		}
		else if (fig == 'S' || fig == 's')
		{
			CV43 = 2;
		}
	}
	else if (fila == 4 && columna == 4)
	{
		V44 = true;
		if (fig == 'O' || fig == 'o')
		{
			CV44 = 1;
		}
		else if (fig == 'S' || fig == 's')
		{
			CV44 = 2;
		}
	}
	else if (fila == 4 && columna == 5)
	{
		V45 = true;
		if (fig == 'O' || fig == 'o')
		{
			CV45 = 1;
		}
		else if (fig == 'S' || fig == 's')
		{
			CV45 = 2;
		}
	}
	else if (fila == 5 && columna == 1)
	{
		V51 = true;
		if (fig == 'O' || fig == 'o')
		{
			CV51 = 1;
		}
		else if (fig == 'S' || fig == 's')
		{
			CV51 = 2;
		}
	}
	else if (fila == 5 && columna == 2)
	{
		V52 = true;
		if (fig == 'O' || fig == 'o')
		{
			CV52 = 1;
		}
		else if (fig == 'S' || fig == 's')
		{
			CV52 = 2;
		}
	}
	else if (fila == 5 && columna == 3)
	{
		V53 = true;
		if (fig == 'O' || fig == 'o')
		{
			CV53 = 1;
		}
		else if (fig == 'S' || fig == 's')
		{
			CV53 = 2;
		}
	}
	else if (fila == 5 && columna == 4)
	{
		V54 = true;
		if (fig == 'O' || fig == 'o')
		{
			CV54 = 1;
		}
		else if (fig == 'S' || fig == 's')
		{
			CV54 = 2;
		}
	}
	else if (fila == 5 && columna == 5)
	{
		V55 = true;
		if (fig == 'O' || fig == 'o')
		{
			CV55 = 1;
		}
		else if (fig == 'S' || fig == 's')
		{
			CV55 = 2;
		}
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

void ingresarvalores(int& fila, int& columna, char& figura, bool jugador1, bool jugador2, char Tablero[5][5])
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
	cout << "\n";
}

void FormasDeGanar(bool V1, bool V2, bool V3, int& PJugador1, int& PJugador2, bool jugador1, bool jugador2, bool& FG, int CV1, int CV2, int CV3, int puntosIA)
{
	if (FG == true)
	{
		if (V1 == true && V2 == true && V3 == true)
		{
			if (CV1 == 1 && CV2 == 2 && CV3 == 1)
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
				else if (puntosIA == true)
				{
					puntosIA = puntosIA + 1;
					FG = false;
				}
			}
		}
	}
}

	int main()
	{
		char Tablero[5][5], figura{ ' ' }, replay{};

		int fila{ 1 }, columna{ 1 }, PJugador1{ 0 }, PJugador2{ 0 }, puntosIA{ 0 }, CV11{ 0 }, CV12{ 0 }, CV13{ 0 }, CV14{ 0 }, CV15{ 0 }, CV21{ 0 }, CV22{ 0 }, CV23{ 0 }, CV24{ 0 }, CV25{ 0 }, CV31{ 0 }, CV32{ 0 }, CV33{ 0 }, CV34{ 0 }
		, CV35{ 0 }, CV41{ 0 }, CV42{ 0 }, CV43{ 0 }, CV44{ 0 }, CV45{ 0 }, CV51{ 0 }, CV52{ 0 }, CV53{ 0 }, CV54{ 0 }, CV55{ 0 }, alternativa{ 0 }, alternativa2{ 0 }, i{ 0 };

		bool primerapasada{ true }, jugador1{ true }, jugador2{ false }, tmp(false), V11{ false }, V12{ false }, V13{ false }, V14{ false }, V15{ false }, V21{ false }, V22{ false }, V23{ false }
			, V24{ false }, V25{ false }, V31{ false }, V32{ false }, V33{ false }, V34{ false }, V35{ false }, V41{ false }, V42{ false }, V43{ false }, V44{ false }, V45{ false }, V51{ false }
			, V52{ false }, V53{ false }, V54{ false }, V55{ false }, FG1{ true }, FG2{ true }, FG3{ true }, FG4{ true }, FG5{ true }, FG6{ true }, FG7{ true }, FG8{ true }, FG9{ true }, FG10{ true }, FG11{ true }, FG12{ true }
			, FG13{ true }, FG14{ true }, FG15{ true }, FG16{ true }, FG17{ true }, FG18{ true }, FG19{ true }, FG20{ true }, FG21{ true }, FG22{ true }, FG23{ true }, FG24{ true }, FG25{ true }, FG26{ true }, FG27{ true }, FG28{ true }, FG29{ true }
			, FG30{ true }, FG31{ true }, FG32{ true }, FG33{ true }, FG34{ true }, FG35{ true }, FG36{ true }, FG37{ true }, FG38{ true }, FG39{ true }, FG40{ true }, FG41{ true }, FG42{ true }, FG43{ true }, FG44{ true }, FG45{ true }
		, FG46{ true }, FG47{ true }, FG48{ true }, Win{ false }, seleccion{ false }, multijugador{ false }, singleplayer{ false }, IAF{ false }, IAM{ false }, IAD{ false };

		std::system("cls");
		std::system("cls");            // Comando para borrar todo el contenido de la pantalla
		std::cout << "\x1B[H";          // Codigo para colocar el cursor en el canto superior izquierdo

		std::cout << "\x1B[3;92m";         // Mostrar el siguiente texto en modo de letra italico "[3;" y color azul "[ ;34m"
		std::cout << "/***************************************************/" << std::endl;
		std::cout << "\x1B[m";
		std::cout << "\x1B[3;31m"; std::cout << ".&%%%%%%%%%%%"; std::cout << "\x1B[m"; std::cout << "#//"; std::cout << "\x1B[3;34m"; std::cout << "%%%%%%##((//##" << std::endl; std::cout << "\x1B[m";
		std::cout << "\x1B[3;31m"; std::cout << ".&%%%%%%%%%%%"; std::cout << "\x1B[m"; std::cout << "*,/"; std::cout << "\x1B[3;34m"; std::cout << "%%%%##((//((%%" << std::endl; std::cout << "\x1B[m";
		std::cout << "\x1B[3;31m"; std::cout << ".&%%%%%%%%%%%%"; std::cout << "\x1B[m"; std::cout << "..%"; std::cout << "\x1B[3;34m"; std::cout << "%##((//((##%&" << std::endl; std::cout << "\x1B[m";
		std::cout << "\x1B[3;31m"; std::cout << ".&%%%%%%%%%%%%%"; std::cout << "\x1B[m"; std::cout << "  ((/"; std::cout << "\x1B[3;34m"; std::cout << ";/((##%%&&";	std::cout << "\x1B[m"; std::cout << "   Universidad Catolica San Pablo" << std::endl;
		std::cout << "\x1B[3;31m"; std::cout << ".&%%%%%%%("; std::cout << "\x1B[m"; std::cout << "      #"; std::cout << "\x1B[3;34m"; std::cout << "   //((####&&" << std::endl; std::cout << "\x1B[m";
		std::cout << "\x1B[3;31m"; std::cout << ".&%%%%%%%("; std::cout << "\x1B[m"; std::cout << "  ###*  #"; std::cout << "\x1B[3;34m"; std::cout << "         &&";	std::cout << "\x1B[m"; std::cout << "		CCOMP 2 - 1 // 2023" << std::endl;
		std::cout << "\x1B[3;31m"; std::cout << ".&%%%%%%%("; std::cout << "\x1B[m"; std::cout << "  #(((#  % "; std::cout << "\x1B[3;34m"; std::cout << "       &&" << std::endl; std::cout << "\x1B[m";
		std::cout << "\x1B[3;31m"; std::cout << ".&%%%%%%#("; std::cout << "\x1B[m"; std::cout << "  ((###  #"; std::cout << "\x1B[3;34m"; std::cout << "  .%%%%%&&" << std::endl; std::cout << "\x1B[m";
		std::cout << "\x1B[3;31m"; std::cout << ".&#%%%###/"; std::cout << "\x1B[m"; std::cout << "  ###%%  %"; std::cout << "\x1B[3;34m"; std::cout << "  %%%%%%&&" << std::endl; std::cout << "\x1B[m";
		std::cout << "\x1B[3;31m"; std::cout << ".&&%###((/"; std::cout << "\x1B[m"; std::cout << "  #%%...%../"; std::cout << "\x1B[3;34m"; std::cout << "%%%%%%& " << std::endl; std::cout << "\x1B[m";
		std::cout << "\x1B[3;31m"; std::cout << ". %%#(((#(,,"; std::cout << "\x1B[m"; std::cout << ",,"; std::cout << "\x1B[3;34m"; std::cout << "*%%***%%%%%%%&, " << std::endl; std::cout << "\x1B[m";
		std::cout << "\x1B[3;31m"; std::cout << ".  (######//"; std::cout << "\x1B[m"; std::cout << "//"; std::cout << "\x1B[3;34m"; std::cout << "///%%%%%%%%&&" << std::endl; std::cout << "\x1B[m";
		std::cout << "\x1B[3;31m"; std::cout << ".     %%&#//%%%%%%%%%%&&%" << std::endl;
		std::cout << ".         &&&&&&&&&&/" << std::endl;
		std::cout << "\x1B[m";             // Resetear color a valor por defecto
		std::cout << "\x1B[3;92m";
		std::cout << "/***************************************************/" << std::endl;
		std::cout << "\x1B[m";             // Resetear color a valor por defecto
		std::cout << "Universidad Catolica San Pablo" << std::endl;
		std::cout << "Escuela Profesional de Ciencia de la Computacion I" << std::endl;
		std::cout << "Curso de Ciencia de la Computacion I" << std::endl;
		std::cout << "Alumno Gabriel Alejandro Baca Flores" << std::endl;
		std::cout << "Alumno Nicolas Ignacio Quintanilla Escalona" << std::endl;
		std::cout << "Prof. D.Sc. Manuel Eduardo Loaiza Fernandez" << std::endl;
		std::cout << "Arequipa 2023 - I" << std::endl;
		std::cout << "\x1B[3;32m";         // Mostrar el siguiente texto en modo de letra italico "[3;" y color azul "[ ;34m"	
		std::cout << "/***************************************************/" << std::endl;
		std::cout << "\x1B[m";             // Resetear color a valor por defecto 

		while (seleccion == false)
		{
			cout << "Que modalidad desea jugar?\n1.Multijugador\n2.Un solo jugador.\n" << endl;
			cin >> alternativa;
			cout << "\n";

			if (alternativa == 1)
			{
				multijugador = true;
				//asignar_valores(x, o, seleccion, singleplayer, multijugador, alternativa4, IAF, IAM, IAD);
				break;
			}
			else if (alternativa == 2)
			{
				cout << "En que dificultad desea jugar?\n1.Facil\n2.Medio\n3.Dificil\n" << endl;
				cin >> alternativa2;
				//alternativa4 = alternativa2;
				cout << "\n";

				if (alternativa2 == 1)//facil
				{
					singleplayer = true;
					IAF = true;
					break;
				}
				if (alternativa2 == 2)//medio
				{
					singleplayer = true;
					IAM = true;
					break;
				}
				if (alternativa2 == 3)//dificil
				{
					singleplayer = true;
					IAD = true;
					break;
				}
				else
				{
					alternativa2 = 0;
				}
			}
		}



		do
		{
			//primera pasada
			if (primerapasada == true)
			{
				cout << "1 2 3 4 5" << endl;
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

			if (jugador1 == true)
			{
				ingresarvalores(fila, columna, figura, jugador1, jugador2, Tablero);
				verificadorcasilla(V11, V12, V13, V14, V15, V21, V22, V23, V24, V25, V31, V32, V33, V34, V35, V41, V42, V43, V44, V45, V51, V52, V53, V54, V55, fila, columna,
					CV11, CV12, CV13, CV14, CV15, CV21, CV22, CV23, CV24, CV25, CV31, CV32, CV33, CV34, CV35, CV41, CV42, CV43, CV44, CV45, CV51, CV52, CV53, CV54, CV55, figura);
			}



			if (singleplayer == true)
			{
				if (IAF == true)
				{
					std::cout << "Turno de la IA\n";


					srand(time(0)); // Inicializador

					// Escoge una casilla aleatoria que no esté ocupada
					int filaIA, columnaIA, aleatorioIA;
					char figuraIA{ ' ' };
					while (true)
					{
						filaIA = rand() % 5 + 1; // genera un número aleatorio entre 1 y 5
						columnaIA = rand() % 5 + 1;

						if (Tablero[filaIA][columnaIA] == ' ' || Tablero[filaIA][columnaIA] == '_')
						{
							aleatorioIA = rand() % 2 + 1;
							if (aleatorioIA == 1)
							{
								figuraIA = 's';
								break;
							}
							else if (aleatorioIA == 2) 
							{

								figuraIA = 'O';
								break;
							}
						}
						else
						{
							filaIA = rand() % 5 + 1; // genera un número aleatorio entre 1 y 5
							columnaIA = rand() % 5 + 1;
						}
					}

					Tablero[filaIA][columnaIA] = figuraIA; // Coloca figura

					std::cout << "IA ha elegido la fila " << filaIA  << ", columna " << columnaIA  << " y la figura '" << figuraIA << "'.\n";
					std::cout << "\n";
				}

				else if (IAM == true)
				{
					std::cout << "Turno de la IA\n";
				}

				else if (IAD == true)
				{
					cout << "Turno de la IA\n";

					cout << "\n";
				}
				else
				{
					cout << "ocurrio un problema" << endl;
				}
			}

			if (multijugador == true)
			{
				if (jugador2 == true)
				{
					ingresarvalores(fila, columna, figura, jugador1, jugador2, Tablero);
					verificadorcasilla(V11, V12, V13, V14, V15, V21, V22, V23, V24, V25, V31, V32, V33, V34, V35, V41, V42, V43, V44, V45, V51, V52, V53, V54, V55, fila, columna,
						CV11, CV12, CV13, CV14, CV15, CV21, CV22, CV23, CV24, CV25, CV31, CV32, CV33, CV34, CV35, CV41, CV42, CV43, CV44, CV45, CV51, CV52, CV53, CV54, CV55, figura);
				}
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
						}
					}
				}
			}

			//Imprimir Tablero

			for (int i{ 1 }; i < 6; i++)
			{
				for (int j{ 1 }; j < 6; j++)
				{
					cout << Tablero[i][j] << " ";
				}
				cout << endl;
			}

			// Formas de ganar
			FormasDeGanar(V11, V12, V13, PJugador1, PJugador2, jugador1, jugador2, FG1, CV11, CV12, CV13, puntosIA);
			FormasDeGanar(V11, V22, V33, PJugador1, PJugador2, jugador1, jugador2, FG2, CV11, CV22, CV33, puntosIA);//
			FormasDeGanar(V11, V21, V31, PJugador1, PJugador2, jugador1, jugador2, FG3, CV11, CV21, CV31, puntosIA);//
			FormasDeGanar(V12, V23, V34, PJugador1, PJugador2, jugador1, jugador2, FG4, CV12, CV23, CV34, puntosIA);//	
			FormasDeGanar(V12, V22, V32, PJugador1, PJugador2, jugador1, jugador2, FG5, CV12, CV22, CV32, puntosIA);//
			FormasDeGanar(V12, V13, V14, PJugador1, PJugador2, jugador1, jugador2, FG1, CV12, CV13, CV14, puntosIA);//
			FormasDeGanar(V13, V23, V33, PJugador1, PJugador2, jugador1, jugador2, FG6, CV13, CV23, CV33, puntosIA);//
			FormasDeGanar(V13, V14, V15, PJugador1, PJugador2, jugador1, jugador2, FG7, CV13, CV14, CV15, puntosIA);//
			FormasDeGanar(V31, V22, V13, PJugador1, PJugador2, jugador1, jugador2, FG8, CV31, CV22, CV13, puntosIA);//
			FormasDeGanar(V13, V24, V35, PJugador1, PJugador2, jugador1, jugador2, FG9, CV13, CV24, CV35, puntosIA);//
			FormasDeGanar(V32, V23, V14, PJugador1, PJugador2, jugador1, jugador2, FG10, CV32, CV23, CV14, puntosIA);//
			FormasDeGanar(V14, V24, V34, PJugador1, PJugador2, jugador1, jugador2, FG11, CV14, CV24, CV34, puntosIA);//
			FormasDeGanar(V15, V25, V35, PJugador1, PJugador2, jugador1, jugador2, FG12, CV15, CV25, CV35, puntosIA);//
			FormasDeGanar(V33, V24, V15, PJugador1, PJugador2, jugador1, jugador2, FG13, CV33, CV24, CV15, puntosIA);//
			FormasDeGanar(V21, V22, V23, PJugador1, PJugador2, jugador1, jugador2, FG14, CV21, CV22, CV23, puntosIA);//
			FormasDeGanar(V21, V32, V43, PJugador1, PJugador2, jugador1, jugador2, FG15, CV21, CV32, CV43, puntosIA);//
			FormasDeGanar(V23, V24, V25, PJugador1, PJugador2, jugador1, jugador2, FG16, CV23, CV24, CV25, puntosIA);//
			FormasDeGanar(V22, V23, V24, PJugador1, PJugador2, jugador1, jugador2, FG17, CV22, CV23, CV24, puntosIA);//
			FormasDeGanar(V41, V32, V23, PJugador1, PJugador2, jugador1, jugador2, FG18, CV41, CV32, CV23, puntosIA);//
			FormasDeGanar(V23, V34, V45, PJugador1, PJugador2, jugador1, jugador2, FG19, CV23, CV34, CV45, puntosIA);//
			FormasDeGanar(V42, V33, V24, PJugador1, PJugador2, jugador1, jugador2, FG20, CV42, CV33, CV24, puntosIA);//
			FormasDeGanar(V24, V34, V44, PJugador1, PJugador2, jugador1, jugador2, FG21, CV24, CV34, CV44, puntosIA);//
			FormasDeGanar(V43, V34, V25, PJugador1, PJugador2, jugador1, jugador2, FG22, CV43, CV34, CV25, puntosIA);//
			FormasDeGanar(V25, V35, V45, PJugador1, PJugador2, jugador1, jugador2, FG23, CV25, CV35, CV45, puntosIA);//
			FormasDeGanar(V21, V31, V41, PJugador1, PJugador2, jugador1, jugador2, FG24, CV21, CV31, CV41, puntosIA);//
			FormasDeGanar(V31, V32, V33, PJugador1, PJugador2, jugador1, jugador2, FG25, CV31, CV32, CV33, puntosIA);//
			FormasDeGanar(V31, V42, V53, PJugador1, PJugador2, jugador1, jugador2, FG26, CV31, CV42, CV53, puntosIA);//
			FormasDeGanar(V31, V41, V51, PJugador1, PJugador2, jugador1, jugador2, FG27, CV31, CV41, CV51, puntosIA);//
			FormasDeGanar(V22, V32, V42, PJugador1, PJugador2, jugador1, jugador2, FG28, CV22, CV32, CV42, puntosIA);//
			FormasDeGanar(V32, V42, V52, PJugador1, PJugador2, jugador1, jugador2, FG29, CV32, CV42, CV52, puntosIA);//
			FormasDeGanar(V32, V33, V34, PJugador1, PJugador2, jugador1, jugador2, FG30, CV32, CV33, CV34, puntosIA);//
			FormasDeGanar(V32, V43, V54, PJugador1, PJugador2, jugador1, jugador2, FG31, CV32, CV43, CV54, puntosIA);//
			FormasDeGanar(V33, V23, V43, PJugador1, PJugador2, jugador1, jugador2, FG32, CV33, CV23, CV43, puntosIA);//
			FormasDeGanar(V22, V33, V44, PJugador1, PJugador2, jugador1, jugador2, FG33, CV22, CV33, CV44, puntosIA);//
			FormasDeGanar(V33, V43, V53, PJugador1, PJugador2, jugador1, jugador2, FG34, CV33, CV43, CV53, puntosIA);//
			FormasDeGanar(V51, V42, V33, PJugador1, PJugador2, jugador1, jugador2, FG35, CV51, CV42, CV33, puntosIA);//
			FormasDeGanar(V33, V44, V55, PJugador1, PJugador2, jugador1, jugador2, FG36, CV33, CV44, CV55, puntosIA);//
			FormasDeGanar(V33, V34, V35, PJugador1, PJugador2, jugador1, jugador2, FG37, CV33, CV34, CV35, puntosIA);//
			FormasDeGanar(V34, V44, V54, PJugador1, PJugador2, jugador1, jugador2, FG38, CV34, CV44, CV54, puntosIA);//
			FormasDeGanar(V52, V43, V34, PJugador1, PJugador2, jugador1, jugador2, FG39, CV52, CV43, CV34, puntosIA);//
			FormasDeGanar(V35, V45, V55, PJugador1, PJugador2, jugador1, jugador2, FG40, CV35, CV45, CV55, puntosIA);//
			FormasDeGanar(V53, V44, V35, PJugador1, PJugador2, jugador1, jugador2, FG41, CV53, CV44, CV35, puntosIA);//
			FormasDeGanar(V41, V42, V43, PJugador1, PJugador2, jugador1, jugador2, FG42, CV41, CV42, CV43, puntosIA);//
			FormasDeGanar(V42, V43, V44, PJugador1, PJugador2, jugador1, jugador2, FG43, CV42, CV43, CV44, puntosIA);//
			FormasDeGanar(V23, V33, V43, PJugador1, PJugador2, jugador1, jugador2, FG44, CV23, CV33, CV43, puntosIA);//
			FormasDeGanar(V43, V44, V45, PJugador1, PJugador2, jugador1, jugador2, FG45, CV43, CV44, CV45, puntosIA);//
			FormasDeGanar(V51, V52, V53, PJugador1, PJugador2, jugador1, jugador2, FG46, CV51, CV52, CV53, puntosIA);//
			FormasDeGanar(V52, V53, V54, PJugador1, PJugador2, jugador1, jugador2, FG47, CV52, CV53, CV54, puntosIA);//
			FormasDeGanar(V53, V54, V55, PJugador1, PJugador2, jugador1, jugador2, FG48, CV53, CV54, CV55, puntosIA);//


			cout << "J1 Puntos: " << PJugador1 << " / " << "J2 Puntos: " << PJugador2 << endl;
			cout << "\n";


			//Reinicio de variables y cambio de turnos
			Turnos(multijugador, singleplayer, tmp, jugador1, jugador2, IAF, IAM, IAD, fila, columna, i, alternativa2);

			if (i >= 25)
			{
				if (PJugador1 > PJugador2)
				{
					cout << "El ganador es el Jugador 1!!" << endl;
					cout << "Desea jugar de nuevo? (S/N)" << endl;
					cin >> replay;
					if (replay == 'S' || replay == 's')
					{
						JugarDNuevo(replay, Win, Tablero, jugador1, jugador2, tmp, V11, V12, V13, V14, V15, V21, V22, V23, V24, V25, V31, V32, V33, V34, V35, V41, V42, V43, V44, V45, V51, V52, V53, V54, V55, FG1, FG2, FG3, FG4, FG5, FG6, FG7, FG8, FG9, FG10,
							FG11, FG12, FG13, FG14, FG15, FG16, FG17, FG18, FG19, FG20, FG21, FG22, FG23, FG24, FG25, FG26, FG27, FG28, FG29, FG30, FG31, FG32, FG33, FG34, FG35, FG36, FG37, FG38, FG39, FG40, FG41, FG42, FG43, FG44, FG45, FG46, FG47, FG48, i, fila
							, columna, PJugador1, PJugador2);
					}
					if (replay == 'N' || replay == 'n')
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
		} while (Win == false);

		return 0;
	}
	
