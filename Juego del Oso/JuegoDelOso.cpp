#include <iostream>

using namespace std;

int main() 
{
	char F1C1{}, F1C2{}, F1C3{}, F1C4{}, F1C5{}, F2C1{}, F2C2{}, F2C3{}, F2C4{}, F2C5{}, F3C1{}, F3C2{},F3C3{}, F3C4{}, F3C5{}, F4C1{}, F4C2{}, F4C3{}, F4C4{}, F4C5{}, F5C1{}, F5C2{}, F5C3{},F5C4{}, F5C5{};
	int ubi{0}, i{0};
	bool primerapasada{ true }, jugador1{ true }, jugador2{ false }, tmp{};
	char s{'S'}, o{'O'};
	
	do
	{
		//PRIMERA PASADA
		if (primerapasada)
		{
			cout << '7' << " | " << '8' << " | " << '9' << "\n" << '4' << " | " << '5' << " | " << '6' << "\n" << '1' << " | " << '2' << " | " << '3' << "\n";
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
			if (ubi == 1)
			{
				if (F1C1 != s || F1C1 != o)
				{
					F1C1 = s;
				}
			}
			else if (ubi == 2)
			{
				if (F1C2 != s || F1C2 != o)
				{
					F1C2 = s;
				}
			}
			else if (ubi == 3)
			{
				if (F1C3 != s || F1C3 != o)
				{
					F1C3 = s;
				}
			}
			else if (ubi == 4)
			{
				if (F1C4 != s || F1C4 != o)
				{
					F1C4 = s;
				}
			}
			else if (ubi == 5)
			{
				if (F1C5 != s || F1C5 != o)
				{
					F1C5 = s;
				}
			}
			else if (ubi == 6)
			{
				if (F2C1 != s || F2C1 != o)
				{
					F2C1 = s;
				}
			}
			else if (ubi == 7)
			{
				if (F2C2 != s || F2C2 != o)
				{
					F2C2 = s;
				}
			}
			else if (ubi == 8)
			{
				if (F8 != s || F8 != o)
				{
					F8 = s;
				}
			}
			else if (ubi == 9)
			{
				if (F9 != s || F9 != o)
				{
					F9 = s;
				}
			}
		}
		//JUGADOR 2
		if (jugador2)
		{
			switch (ubi)
			{
			case 1:
			{
				if (F1 != s || F1 != o)
				{
					F1 = o;
					break;
				}
			}
			case 2:
			{
				if (F2 != s || F2 != o)
				{
					F2 = o;
					break;
				}
			}
			case 3:
			{
				if (F3 != s || F3 != o)
				{
					F3 = o;
					break;
				}
			}
			case 4:
			{
				if (F4 != s || F4 != o)
				{
					F4 = o;
					break;
				}
			}
			case 5:
			{
				if (F5 != s || F5 != o)
				{
					F5 = o;
					break;
				}
			}
			case 6:
			{
				if (F6 != s || F6 != o)
				{
					F6 = o;
					break;
				}
			}
			case 7:
			{
				if (F7 != s || F7 != o)
				{
					F7 = o;
					break;
				}
			}
			case 8:
			{
				if (F8 != s || F8 != o)
				{
					F8 = o;
					break;
				}
			}
			case 9:
			{
				if (F9 != s || F9 != o)
				{
					F9 = o;
					break;
				}
			}

			}
		}


		cout << F7 << " | " << F8 << " | " << F9 << "\n" << F4 << " | " << F5 << " | " << F6 << "\n" << F1 << " | " << F2 << " | " << F3 << "\n";

		i++;
		ubi = 0;

		if (true)
		{
			tmp = jugador1;
			jugador1 = jugador2;
			jugador2 = tmp;
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








