#include <iostream>

using namespace std;

int main()
{
	char F1C1{}, F1C2{}, F1C3{}, F1C4{}, F1C5{}, F2C1{}, F2C2{}, F2C3{}, F2C4{}, F2C5{}, F3C1{}, F3C2{}, F3C3{}, F3C4{}, F3C5{}, F4C1{}, F4C2{}, F4C3{}, F4C4{}, F4C5{}, F5C1{}, F5C2{}, F5C3{}, F5C4{}, F5C5{};
	int i{ 0 };
	float ubi{ 0 };
	bool primerapasada{ true }, jugador1{ true }, jugador2{ false }, tmp{};
	char s{ 'S' }, o{ 'O' };

	do
	{
		//PRIMERA PASADA
		if (primerapasada)
		{
			cout << "(1, 1)" << " | " << "(1, 2)" << " | " << "(1, 3)" << " | " << "(1, 4)" << " | " << "(1, 5)"<< " \n "<<"------------------------------------------" <<"\n"
				 << "(2, 1)" << " | " << "(2, 2)" << " | " << "(2, 3)" << " | " << "(2, 4)" << " | " << "(2, 5)" << " \n " << "------------------------------------------" << "\n" 
				 << "(3, 1)" << " | " << "(3, 2)" << " | " << "(3, 3)" << " | " << "(3, 4)" << " | " << "(3, 5)" << " \n " << "------------------------------------------" << "\n"
				 << "(4, 1)" << " | " << "(4, 2)" << " | " << "(4, 3)" << " | " << "(4, 4)" << " | " << "(4, 5)" << " \n " << "------------------------------------------" << "\n"
				 << "(5, 1)" << " | " << "(5, 2)" << " | " << "(5, 3)" << " | " << "(5, 4)" << " | " << "(5, 5)" << endl;
			primerapasada = false;
		}
		//TURNOS
		if (jugador1)
		{
			cout << "turno de Jugador 1\n";
		}

		if (jugador2)
		{
			cout << "turno de Jugador 2\n";
		}

		cout << "introduzca la ubicacion: ";
		cin >> ubi;

		//JUGADOR 1

		if (jugador1)
		{
			if (ubi == 1,1)
			{
				if (F1C1 != s || F1C1 != o)
				{
					F1C1 = s;
				}
			}
			else if (ubi == 1,2)
			{
				if (F1C2 != s || F1C2 != o)
				{
					F1C2 = s;
				}
			}
			else if (ubi == 1,3)
			{
				if (F1C3 != s || F1C3 != o)
				{
					F1C3 = s;
				}
			}
			else if (ubi == 1,4)
			{
				if (F1C4 != s || F1C4 != o)
				{
					F1C4 = s;
				}
			}
			else if (ubi == 1,5)
			{
				if (F1C5 != s || F1C5 != o)
				{
					F1C5 = s;
				}
			}
			else if (ubi == 2,1)
			{
				if (F2C1 != s || F2C1 != o)
				{
					F2C1 = s;
				}
			}
			else if (ubi == 2,2)
			{
				if (F2C2 != s || F2C2 != o)
				{
					F2C2 = s;
				}
			}
			else if (ubi == 2,3)
			{
				if (F2C3 != s || F2C3 != o)
				{
					F2C3 = s;
				}
			}
			else if (ubi == 2,4)
			{
				if (F2C4 != s || F2C4 != o)
				{
					F2C4 = s;
				}
			}
			else if (ubi == 2,5)
			{
				if (F2C5 != s || F2C5 != o)
				{
					F2C5 = s;
				}
			}
			else if (ubi == 3,1)
			{
				if (F3C1 != s || F3C1 != o)
				{
					F3C1 = s;
				}
			}
			else if (ubi == 3,2)
			{
				if (F3C2 != s || F3C2 != o)
				{
					F3C2 = s;
				}
			}
			else if (ubi == 3,3)
			{
				if (F3C3 != s || F3C3 != o)
				{
					F3C3 = s;
				}
			}
			else if (ubi == 3,4)
			{
				if (F3C4 != s || F3C4 != o)
				{
					F3C4 = s;
				}
			}
			else if (ubi == 3,5)
			{
				if (F3C5 != s || F3C5 != o)
				{
					F3C5 = s;
				}
			}
			else if (ubi == 4,1)
			{
				if (F4C1 != s || F4C1 != o)
				{
					F4C1 = s;
				}
			}
			else if (ubi == 4,2)
			{
				if (F4C2 != s || F4C2 != o)
				{
					F4C2 = s;
				}
			}
			else if (ubi == 4,3)
			{
				if (F4C3 != s || F4C3 != o)
				{
					F4C3 = s;
				}
			}
			else if (ubi == 4,4)
			{
				if (F4C4 != s || F4C4 != o)
				{
					F4C4 = s;
				}
			}
			else if (ubi == 4,5)
			{
				if (F4C5 != s || F4C5 != o)
				{
					F4C5 = s;
				}
			}
			else if (ubi == 5,1)
			{
				if (F5C1 != s || F5C1 != o)
				{
					F5C1 = s;
				}
			}
			else if (ubi == 5,2)
			{
				if (F5C2 != s || F5C2 != o)
				{
					F5C2 = s;
				}
			}
			else if (ubi == 5,3)
			{
				if (F5C3 != s || F5C3 != o)
				{
					F5C3 = s;
				}
			}
			else if (ubi == 5,4)
			{
				if (F5C4 != s || F5C4 != o)
				{
					F5C4 = s;
				}
			}
			else if (ubi == 5,5)
			{
				if (F5C5 != s || F5C5 != o)
				{
					F5C5 = s;
				}
			}
		}
		//JUGADOR 2
		if (jugador2)
		{
			if (ubi == 1, 1)
			{
				if (F1C1 != s || F1C1 != o)
				{
					F1C1 = o;
				}
			}
			else if (ubi == 1, 2)
			{
				if (F1C2 != s || F1C2 != o)
				{
					F1C2 = o;
				}
			}
			else if (ubi == 1, 3)
			{
				if (F1C3 != s || F1C3 != o)
				{
					F1C3 = o;
				}
			}
			else if (ubi == 1, 4)
			{
				if (F1C4 != s || F1C4 != o)
				{
					F1C4 = o;
				}
			}
			else if (ubi == 1, 5)
			{
				if (F1C5 != s || F1C5 != o)
				{
					F1C5 = o;
				}
			}
			else if (ubi == 2, 1)
			{
				if (F2C1 != s || F2C1 != o)
				{
					F2C1 = o;
				}
			}
			else if (ubi == 2, 2)
			{
				if (F2C2 != s || F2C2 != o)
				{
					F2C2 = o;
				}
			}
			else if (ubi == 2, 3)
			{
				if (F2C3 != s || F2C3 != o)
				{
					F2C3 = o;
				}
			}
			else if (ubi == 2, 4)
			{
				if (F2C4 != s || F2C4 != o)
				{
					F2C4 = o;
				}
			}
			else if (ubi == 2, 5)
			{
				if (F2C5 != s || F2C5 != o)
				{
					F2C5 = o;
				}
			}
			else if (ubi == 3, 1)
			{
				if (F3C1 != s || F3C1 != o)
				{
					F3C1 = o;
				}
			}
			else if (ubi == 3, 2)
			{
				if (F3C2 != s || F3C2 != o)
				{
					F3C2 = o;
				}
			}
			else if (ubi == 3, 3)
			{
				if (F3C3 != s || F3C3 != o)
				{
					F3C3 = o;
				}
			}
			else if (ubi == 3, 4)
			{
				if (F3C4 != s || F3C4 != o)
				{
					F3C4 = o;
				}
			}
			else if (ubi == 3, 5)
			{
				if (F3C5 != s || F3C5 != o)
				{
					F3C5 = o;
				}
			}
			else if (ubi == 4, 1)
			{
				if (F4C1 != s || F4C1 != o)
				{
					F4C1 = o;
				}
			}
			else if (ubi == 4, 2)
			{
				if (F4C2 != s || F4C2 != o)
				{
					F4C2 = o;
				}
			}
			else if (ubi == 4, 3)
			{
				if (F4C3 != s || F4C3 != o)
				{
					F4C3 = o;
				}
			}
			else if (ubi == 4, 4)
			{
				if (F4C4 != s || F4C4 != o)
				{
					F4C4 = o;
				}
			}
			else if (ubi == 4, 5)
			{
				if (F4C5 != s || F4C5 != o)
				{
					F4C5 = o;
				}
			}
			else if (ubi == 5, 1)
			{
				if (F5C1 != s || F5C1 != o)
				{
					F5C1 = o;
				}
			}
			else if (ubi == 5, 2)
			{
				if (F5C2 != s || F5C2 != o)
				{
					F5C2 = o;
				}
			}
			else if (ubi == 5, 3)
			{
				if (F5C3 != s || F5C3 != o)
				{
					F5C3 = o;
				}
			}
			else if (ubi == 5, 4)
			{
				if (F5C4 != s || F5C4 != o)
				{
					F5C4 = o;
				}
			}
			else if (ubi == 5, 5)
			{
				if (F5C5 != s || F5C5 != o)
				{
					F5C5 = o;
				}
			}
		}

		cout << endl;
		cout << F1C1 << " | " << F1C2 << " | " << F1C3 << " | " << F1C4 << " | " << F1C5 << " \n " << "-------------" << "\n"
			<< F2C1 << " | " << F2C2 << " | " << F2C3 << " | " << F2C4 << " | " << F2C5 << " \n " << "---------------" << "\n"
			<< F3C1 << " | " << F3C2 << " | " << F3C3 << " | " << F3C4 << " | " << F3C5 << " \n " << "---------------" << "\n"
			<< F4C1 << " | " << F4C2 << " | " << F4C3 << " | " << F4C4 << " | " << F4C5 << " \n " << "---------------" << "\n"
			<< F5C1 << " | " << F5C2 << " | " << F5C3 << " | " << F5C4 << " | " << F5C5 << endl;

		i++;
		

		if (true)
		{
			tmp = jugador1;
			jugador1 = jugador2;
			jugador2 = tmp;
			ubi = 0;
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







