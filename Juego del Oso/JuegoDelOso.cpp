#include <iostream>

using namespace std;

int main()
{
	char F1C1{}, F1C2{}, F1C3{}, F1C4{}, F1C5{}, F2C1{}, F2C2{}, F2C3{}, F2C4{}, F2C5{}, F3C1{}, F3C2{}, F3C3{}, F3C4{}, F3C5{}, F4C1{}, F4C2{}, F4C3{}, F4C4{}, F4C5{}, F5C1{}, F5C2{}, F5C3{}, F5C4{}, F5C5{};
	int i{ 0 }, Fila{ 0 }, Columna{ 0 }, ptsJ1{ 0 }, ptsJ2{0};
	bool primerapasada{ true }, jugador1{ true }, jugador2{ false }, tmp{};
	char s{ 'S' }, o{ 'O' },eleccion{' '};

	do
	{
		//PRIMERA PASADA
		if (primerapasada)
		{
			std::cout << "(1, 1)" << " | " << "(1, 2)" << " | " << "(1, 3)" << " | " << "(1, 4)" << " | " << "(1, 5)"<< " \n "<<"------------------------------------------" <<"\n"
				 << "(2, 1)" << " | " << "(2, 2)" << " | " << "(2, 3)" << " | " << "(2, 4)" << " | " << "(2, 5)" << " \n " << "------------------------------------------" << "\n" 
				 << "(3, 1)" << " | " << "(3, 2)" << " | " << "(3, 3)" << " | " << "(3, 4)" << " | " << "(3, 5)" << " \n " << "------------------------------------------" << "\n"
				 << "(4, 1)" << " | " << "(4, 2)" << " | " << "(4, 3)" << " | " << "(4, 4)" << " | " << "(4, 5)" << " \n " << "------------------------------------------" << "\n"
				 << "(5, 1)" << " | " << "(5, 2)" << " | " << "(5, 3)" << " | " << "(5, 4)" << " | " << "(5, 5)" << endl;
			primerapasada = false;
		}
		//TURNOS
		if (jugador1)
		{
			std::cout << "turno de Jugador 1\n";
			cout << "\n";
		}

		if (jugador2)
		{
			std::cout << "turno de Jugador 2\n";
			cout << "\n";
		}
		//COMPROBANDO SI INGRESASTE S/O
		while (true)
		{
			std::cout << "Elija la opcion a usar:(S,O)";
			std::cin >> eleccion;

			if (eleccion == 'S' || eleccion == 's')
			{
				eleccion = s;
				break;
			}
			else if (eleccion == 'O' || eleccion == 'o')
			{
				eleccion = o;
				break;
			}
			else
			{
				std::cout << "Por favor ingrese 'S','s' u 'O','o' ." << endl;
				cout << "\n";
			}
		}
		// COMPROBANDO QUE EL NUMERO INGRESADO NO PASE DE 1-5
		while (true)
		{
			std::cout << "introduzca la ubicacion(Fila): ";
			cin >> Fila;

			if (Fila >= 1  && Fila <= 5)
			{
				break;
			}
			else
			{
				std::cout << "Reingrese un numero entre el 1 a 5." << endl;
				cout << "\n";
			}

		}
		while (true)
		{
			std::cout << "introduzca la ubicacion(Columna): ";
			cin >> Columna;

			if (Columna >= 1 && Columna <= 5)
			{
				break;
			}
			else
			{
				std::cout << "Reingrese un numero entre el 1 a 5." << endl;
				cout << "\n";
			}
		}	

		//JUGADOR 1

		if (jugador1)
		{
			if (Fila == 1 && Columna == 1)
			{
				if (F1C1 != s || F1C1 != o)
				{		
					F1C1 = eleccion;
				}
			}
			else if (Fila == 1 && Columna == 2)
			{
				if (F1C2 != s || F1C2 != o)
				{
					F1C2 = eleccion;
				}
			}
			else if (Fila == 1 && Columna == 3)
			{
				if (F1C3 != s || F1C3 != o)
				{
					F1C3 = eleccion;
				}
			}
			else if (Fila == 1 && Columna == 4)
			{
				if (F1C4 != s || F1C4 != o)
				{
					F1C4 = eleccion;
				}
			}
			else if (Fila == 1 && Columna == 5)
			{
				if (F1C5 != s || F1C5 != o)
				{
					F1C5 = eleccion;
				}
			}
			else if (Fila == 2 && Columna == 1)
			{
				if (F2C1 != s || F2C1 != o)
				{
					F2C1 = eleccion;
				}
			}
			else if (Fila == 2 && Columna == 2)
			{
				if (F2C2 != s || F2C2 != o)
				{
					F2C2 = eleccion;
				}
			}
			else if (Fila == 2 && Columna == 3)
			{
				if (F2C3 != s || F2C3 != o)
				{
					F2C3 = eleccion;
				}
			}
			else if (Fila == 2 && Columna == 4)
			{
				if (F2C4 != s || F2C4 != o)
				{
					F2C4 = eleccion;
				}
			}
			else if (Fila == 2 && Columna == 5)
			{
				if (F2C5 != s || F2C5 != o)
				{
					F2C5 = eleccion;
				}
			}
			else if (Fila == 3 && Columna == 1)
			{
				if (F3C1 != s || F3C1 != o)
				{
					F3C1 = eleccion;
				}
			}
			else if (Fila == 3 && Columna == 2)
			{
				if (F3C2 != s || F3C2 != o)
				{
					F3C2 = eleccion;
				}
			}
			else if (Fila == 3 && Columna == 3)
			{
				if (F3C3 != s || F3C3 != o)
				{
					F3C3 = eleccion;
				}
			}
			else if (Fila == 3 && Columna == 4)
			{
				if (F3C4 != s || F3C4 != o)
				{
					F3C4 = eleccion;
				}
			}
			else if (Fila == 3 && Columna == 5)
			{
				if (F3C5 != s || F3C5 != o)
				{
					F3C5 = eleccion;
				}
			}
			else if (Fila == 4 && Columna == 1)
			{
				if (F4C1 != s || F4C1 != o)
				{
					F4C1 = eleccion;
				}
			}
			else if (Fila == 4 && Columna == 2)
			{
				if (F4C2 != s || F4C2 != o)
				{
					F4C2 = eleccion;
				}
			}
			else if (Fila == 4 && Columna == 3)
			{
				if (F4C3 != s || F4C3 != o)
				{
					F4C3 = eleccion;
				}
			}
			else if (Fila == 4 && Columna == 4)
			{
				if (F4C4 != s || F4C4 != o)
				{
					F4C4 = eleccion;
				}
			}
			else if (Fila == 4 && Columna == 5)
			{
				if (F4C5 != s || F4C5 != o)
				{
					F4C5 = eleccion;
				}
			}
			else if (Fila == 5 && Columna == 1)
			{
				if (F5C1 != s || F5C1 != o)
				{
					F5C1 = eleccion;
				}
			}
			else if (Fila == 5 && Columna == 2)
			{
				if (F5C2 != s || F5C2 != o)
				{
					F5C2 = eleccion;
				}
			}
			else if (Fila == 5 && Columna == 3)
			{
				if (F5C3 != s || F5C3 != o)
				{
					F5C3 = eleccion;
				}
			}
			else if (Fila == 5 && Columna == 4)
			{
				if (F5C4 != s || F5C4 != o)
				{
					F5C4 = eleccion;
				}
			}
			else if (Fila == 5 && Columna == 5)
			{
				if (F5C5 != s || F5C5 != o)
				{
					F5C5 = eleccion;
				}
			}
		}
		//JUGADOR 2
		if (jugador2)
		{
			if (Fila == 1 && Columna == 1)
			{
				if (F1C1 != s || F1C1 != o)
				{
					F1C1 = eleccion;
				}
			}
			else if (Fila == 1 && Columna == 2)
			{
				if (F1C2 != s || F1C2 != o)
				{
					F1C2 = eleccion;
				}
			}
			else if (Fila == 1 && Columna == 3)
			{
				if (F1C3 != s || F1C3 != o)
				{
					F1C3 = eleccion;
				}
			}
			else if (Fila == 1 && Columna == 4)
			{
				if (F1C4 != s || F1C4 != o)
				{
					F1C4 = eleccion;
				}
			}
			else if (Fila == 1 && Columna == 5)
			{
				if (F1C5 != s || F1C5 != o)
				{
					F1C5 = eleccion;
				}
			}
			else if (Fila == 2 && Columna == 1)
			{
				if (F2C1 != s || F2C1 != o)
				{
					F2C1 = eleccion;
				}
			}
			else if (Fila == 2 && Columna == 2)
			{
				if (F2C2 != s || F2C2 != o)
				{
					F2C2 = eleccion;
				}
			}
			else if (Fila == 2 && Columna == 3)
			{
				if (F2C3 != s || F2C3 != o)
				{
					F2C3 = eleccion;
				}
			}
			else if (Fila == 2 && Columna == 4)
			{
				if (F2C4 != s || F2C4 != o)
				{
					F2C4 = eleccion;
				}
			}
			else if (Fila == 2 && Columna == 5)
			{
				if (F2C5 != s || F2C5 != o)
				{
					F2C5 = eleccion;
				}
			}
			else if (Fila == 3 && Columna == 1)
			{
				if (F3C1 != s || F3C1 != o)
				{
					F3C1 = eleccion;
				}
			}
			else if (Fila == 3 && Columna == 2)
			{
				if (F3C2 != s || F3C2 != o)
				{
					F3C2 = eleccion;
				}
			}
			else if (Fila == 3 && Columna == 3)
			{
				if (F3C3 != s || F3C3 != o)
				{
					F3C3 = eleccion;
				}
			}
			else if (Fila == 3 && Columna == 4)
			{
				if (F3C4 != s || F3C4 != o)
				{
					F3C4 = eleccion;
				}
			}
			else if (Fila == 3 && Columna == 5)
			{
				if (F3C5 != s || F3C5 != o)
				{
					F3C5 = eleccion;
				}
			}
			else if (Fila == 4 && Columna == 1)
			{
				if (F4C1 != s || F4C1 != o)
				{
					F4C1 = eleccion;
				}
			}
			else if (Fila == 4 && Columna == 2)
			{
				if (F4C2 != s || F4C2 != o)
				{
					F4C2 = eleccion;
				}
			}
			else if (Fila == 4 && Columna == 3)
			{
				if (F4C3 != s || F4C3 != o)
				{
					F4C3 = eleccion;
				}
			}
			else if (Fila == 4 && Columna == 4)
			{
				if (F4C4 != s || F4C4 != o)
				{
					F4C4 = eleccion;
				}
			}
			else if (Fila == 4 && Columna == 5)
			{
				if (F4C5 != s || F4C5 != o)
				{
					F4C5 = eleccion;
				}
			}
			else if (Fila == 5 && Columna == 1)
			{
				if (F5C1 != s || F5C1 != o)
				{
					F5C1 = eleccion;
				}
			}
			else if (Fila == 5 && Columna == 2)
			{
				if (F5C2 != s || F5C2 != o)
				{
					F5C2 = eleccion;
				}
			}
			else if (Fila == 5 && Columna == 3)
			{
				if (F5C3 != s || F5C3 != o)
				{
					F5C3 = eleccion;
				}
			}
			else if (Fila == 5 && Columna == 4)
			{
				if (F5C4 != s || F5C4 != o)
				{
					F5C4 = eleccion;
				}
			}
			else if (Fila == 5 && Columna == 5)
			{
				if (F5C5 != s || F5C5 != o)
				{
					F5C5 = eleccion;
				}
			}
		}

		std::cout << endl;
		std::cout << F1C1 << " | " << F1C2 << " | " << F1C3 << " | " << F1C4 << " | " << F1C5 << " \n " << "-------------" << "\n"
				  << F2C1 << " | " << F2C2 << " | " << F2C3 << " | " << F2C4 << " | " << F2C5 << " \n " << "---------------" << "\n"
				  << F3C1 << " | " << F3C2 << " | " << F3C3 << " | " << F3C4 << " | " << F3C5 << " \n " << "---------------" << "\n"
				  << F4C1 << " | " << F4C2 << " | " << F4C3 << " | " << F4C4 << " | " << F4C5 << " \n " << "---------------" << "\n"
				  << F5C1 << " | " << F5C2 << " | " << F5C3 << " | " << F5C4 << " | " << F5C5 << endl;

		i++;
		
		//ROTAR TURNOS Y REINICIAR VARIABLES
		if (true)
		{
			tmp = jugador1;
			jugador1 = jugador2;
			jugador2 = tmp;
			Columna = 0;
			Columna = 0;
			eleccion = ' ';
		}
		//FORMAS DE GANAR JUGADOR 1
		//if (F1 == S && F2 == S && F3 == S)
		//{
		//	cout << "Jugador 1 Gana!" << endl;
		//	break;
		//}
		//else if (F1 == S && F5 == S && F9 == S)
		//{
		//	cout << "Jugador 1 Gana!" << endl;
		//	break;
		//}
		//else if (F1 == S && F4 == S && F7 == S)
		//{
		//	cout << "Jugador 1 Gana!" << endl;
		//	break;
		//}
		//else if (F7 == S && F8 == S && F9 == S)
		//{
		//	cout << "Jugador 1 Gana!" << endl;
		//	break;
		//}
		//else if (F3 == S && F6 == S && F9 == S)
		//{
		//	cout << "Jugador 1 Gana!" << endl;
		//	break;
		//}
		//else if (F4 == S && F5 == S && F6 == S)
		//{
		//	cout << "Jugador 1 Gana!" << endl;
		//	break;
		//}
		//else if (F7 == S && F5 == S && F3 == S)
		//{
		//	cout << "Jugador 1 Gana!" << endl;
		//	break;
		//}

		////FORMAS DE GANAR JUGADOR 2
		//else if (F1 == o && F2 == o && F3 == o)
		//{
		//	cout << "Jugador 2 Gana!" << endl;
		//	break;
		//}
		//else if (F1 == o && F5 == o && F9 == o)
		//{
		//	cout << "Jugador 2 Gana!" << endl;
		//	break;
		//}
		//else if (F1 == o && F4 == o && F7 == o)
		//{
		//	cout << "Jugador 2 Gana!" << endl;
		//	break;
		//}
		//else if (F7 == o && F8 == o && F9 == o)
		//{
		//	cout << "Jugador 2 Gana!" << endl;
		//	break;
		//}
		//else if (F3 == o && F6 == o && F9 == o)
		//{
		//	cout << "Jugador 2 Gana!" << endl;
		//	break;
		//}
		//else if (F4 == o && F5 == o && F6 == o)
		//{
		//	cout << "Jugador 2 Gana!" << endl;
		//	break;
		//}
		//else if (F7 == o && F5 == o && F3 == o)
		//{
		//	cout << "Jugador 2 Gana!" << endl;
		//	break;
		//}
		//else
		//{
		//	cout << "nadie gana\n---------------------------\n";
		//}

	} while (i < 25);

	return 0;

}







