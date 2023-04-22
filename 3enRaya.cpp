// Hello World program 
// ANSI Codes
// https://gist.github.com/fnky/458719343aabd01cfF47a3F4f7296797

#include <iostream>
#include <cstdlib>

using namespace std;


void ponerFicha(int& Ubi, char& FX, char X, char O,char figura, int& cont, bool& Reset, bool& ResetU, bool& jugador, bool& IA)
{
	if (jugador == true && IA == false)
	{
		if (FX != X && FX != O)
		{
			FX = figura;
		}
		else
		{
			cout << "\n";
			cout << "Reingrese una ubicacion: \n";
			cont = cont - 1;
			Reset = true;
			ResetU = true;
		}
	}
	else 
	{
		cout << "Turno de la CPU " << endl;
		Ubi = rand() % 9 + 1;
		if (FX != X && FX != O)
		{
			FX = figura;
		}
		else
		{
			cout << "\n";
			cout << "Reingrese una ubicacion: \n";
			cont = cont - 1;
			Reset = true;
			ResetU = true;
		}
	}
	return;
}

void verificarGanador(char FX1,char FX2,char FX3,char X,char O,int& alternativa,int& alternativa3, bool& rematch,bool IA,char F1, char F2, char F3, char F4, char F5, char F6, char F7, char F8, char F9)
{
	if (FX1 == X && FX2 == X && FX3 == X)
	{
		cout << "Jugador 1 Gana!" << endl;
		cout << "\n";
		cout << "Desea jugar de nuevo?\n1.Si\n2.No" << endl;
		cin >> alternativa3;
		if (alternativa3 == 1)
		{
			rematch = true;
		}
		else if (alternativa3 == 2)
		{
		}
		else
		{
			cout << "\n";
			cout << "Ingrese un numero valido por favor." << endl;
			cout << "\n";
			alternativa = 0;
		}
	}
	else if (FX1 == O && FX2 == O && FX3 == O)
	{
		if (IA == true) 
		{
			cout << " IA Gana!" << endl;
			cout << "\n";
			cout << "Desea jugar de nuevo?\n1.Si\n2.No" << endl;
			cin >> alternativa3;
			if (alternativa3 == 1)
			{
				rematch = true;
			}
			else if (alternativa3 == 2)
			{
			}
			else
			{
				cout << "\n";
				cout << "Ingrese un numero valido por favor." << endl;
				cout << "\n";
				alternativa = 0;
			}
		}
		else
		{
			cout << "Jugador 2 Gana!" << endl;
			cout << "\n";
			cout << "Desea jugar de nuevo?\n1.Si\n2.No" << endl;
			cin >> alternativa3;
			if (alternativa3 == 1)
			{
				rematch = true;
			}
			else if (alternativa3 == 2)
			{
			}
			else
			{
				cout << "\n";
				cout << "Ingrese un numero valido por favor." << endl;
				cout << "\n";
				alternativa = 0;
			}
		}
	}
	else 
	{
		if ((F1 == (O || X) && F2 == (O || X) && F3 == (O || X) && F4 == (O || X) && F5 == (O || X) && F6 == (O || X) && F7 == (O || X) && F8 == (O || X) && F9 == (O || X)))
		{
			cout << "Nadie Gana"; std::cout << "\x1B[3;92m";
			std::cout << "/***************************************************/" << std::endl;
			std::cout << "\x1B[m";
		}
	}
	return;
}

void asignar_valores(char x,char o,bool& seleccion)
{
	cout << "Ingrese la letra que quiere usar el Jugador 1:" << x;
	cin >> x;
	cout << "Ingrese la letra que quiere usar para la IA" << o;
	cin >> o;
	cout << "\n";
	seleccion = true;
}

int main()
{
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


	//

	bool primerapasada{ true }, jugador1{ true }, jugador2{ false }, IA{ false }, tmp{}, reset{ false }, resetU{ false }, multijugador{ false }, singleplayer{ false }, seleccion{ false }, rematch{ false }, win{ false };
	int ubi{ 0 }, i{ 0 }, alternativa{ 0 }, alternativa2{ 0 }, alternativa3{ 0 }; // ubi = ubicacion - I= turno +1
	char x{ ' ' }, o{ ' ' };
	char F1{ ' ' }, F2{ ' ' }, F3{ ' ' }, F4{ ' ' }, F5{ ' ' }, F6{ ' ' }, F7{ ' ' }, F8{ ' ' }, F9{ ' ' };

	srand(time(nullptr));
	std::srand(1);

	do
	{
		while (seleccion == false)
		{
			cout << "Que modalidad desea jugar?\n1.Multijugador\n2.Un solo jugador.\n" << endl;
			cin >> alternativa;
			cout << "\n";

			if (alternativa == 1)
			{
				asignar_valores(x, o,seleccion);
				break;
			}
			else if (alternativa == 2)
			{
				cout << "En que dificultad desea jugar?\n1.Facil\n2.Medio(Pronto)\n3.Dificil(Pronto)\n" << endl;
				cin >> alternativa2;
				cout << "\n";

				if (alternativa2 == 1)
				{
					singleplayer = true;
					asignar_valores(x, o, seleccion);
					break;
				}
				if (alternativa2 == 2)
				{
					singleplayer = true;
					cout << "no disponible temporalmente. Por favor ingrese otra opcion.\n" << endl;
					//asignar_valores(x, o, seleccion);
					break;
				}
				if (alternativa2 == 3)
				{
					singleplayer = true;
					cout << "no disponible temporalmente. Por favor ingrese otra opcion.\n" << endl;
					//asignar_valores(x, o, seleccion);
					break;
				}
				else
				{
					alternativa2 = 0;
				}
			}
			else
			{
				cout << "\n";
				cout << "Ingrese un numero valido por favor." << endl;
				cout << "\n";
				alternativa = 0;
			}
		}

		//PRIMERA PASADA
		if (primerapasada)
		{
			cout << '7' << " | " << '8' << " | " << '9' << "\n" << '4' << " | " << '5' << " | " << '6' << "\n" << '1' << " | " << '2' << " | " << '3' << "\n";
			primerapasada = false;
		}
		//TURNOS
		if (jugador1)
		{
			cout << "Turno del Jugador 1\n";
			cout << "\n";
		}
		if (multijugador == true)
		{
			if (jugador2)
			{
				cout << "Turno del Jugador 2\n";
				cout << "\n";
			}
		}
		if (singleplayer == true)
		{
			if (IA)
			{
				cout << "Turno de la IA\n";
				cout << "\n";
			}
		}
		while (resetU == false)
		{
			cout << "introduzca la ubicacion: ";
			cin >> ubi;

			if (ubi >= 1 && ubi <= 9)
			{
				break;
			}
			else
			{
				cout << "Reingrese un numero entre el 1 al 9." << endl;
				cout << "\n";
			}
		}
		//JUGADOR 1
		if (jugador1)
		{
			if (ubi == 1)
			{
				ponerFicha(ubi,F1,x,o,x,i,reset,resetU,jugador1,IA);
			}
			else if (ubi == 2)
			{
				ponerFicha(ubi, F2, x, o, x, i, reset, resetU, jugador1, IA);
			}
			else if (ubi == 3)
			{
				ponerFicha(ubi, F3, x, o, x, i, reset, resetU, jugador1, IA);
			}
			else if (ubi == 4)
			{
				ponerFicha(ubi, F4, x, o, x, i, reset, resetU, jugador1, IA);
			}
			else if (ubi == 5)
			{
				ponerFicha(ubi, F5, x, o, x, i, reset, resetU, jugador1, IA);
			}
			else if (ubi == 6)
			{
				ponerFicha(ubi, F6, x, o, x, i, reset, resetU, jugador1, IA);
			}
			else if (ubi == 7)
			{
				ponerFicha(ubi, F7, x, o, x, i, reset, resetU, jugador1, IA);
			}
			else if (ubi == 8)
			{
				ponerFicha(ubi, F8, x, o, x, i, reset, resetU, jugador1, IA);
			}
			else if (ubi == 9)
			{
				ponerFicha(ubi, F9, x, o, x, i, reset, resetU, jugador1, IA);
			}
		}

		//JUGADOR 2
		if (multijugador == true)
		{
			if (jugador2)
			{
				if (ubi == 1)
				{
					ponerFicha(ubi, F1, x, o, o, i, reset, resetU, jugador2, IA);
				}
				else if (ubi == 2)
				{
					ponerFicha(ubi, F2, x, o, o, i, reset, resetU, jugador2, IA);
				}
				else if (ubi == 3)
				{
					ponerFicha(ubi, F3, x, o, o, i, reset, resetU, jugador2, IA);
				}
				else if (ubi == 4)
				{
					ponerFicha(ubi, F4, x, o, o, i, reset, resetU, jugador2, IA);
				}
				else if (ubi == 5)
				{
					ponerFicha(ubi, F5, x, o, o, i, reset, resetU, jugador2, IA);
				}
				else if (ubi == 6)
				{
					ponerFicha(ubi, F6, x, o, o, i, reset, resetU, jugador2, IA);
				}
				else if (ubi == 7)
				{
					ponerFicha(ubi, F7, x, o, o, i, reset, resetU, jugador2, IA);
				}
				else if (ubi == 8)
				{
					ponerFicha(ubi, F8, x, o, o, i, reset, resetU, jugador2, IA);
				}
				else if (ubi == 9)
				{
					ponerFicha(ubi, F9, x, o, o, i, reset, resetU, jugador2, IA);
				}
			}
		}

		//IA
		if (singleplayer == true)
		{
			if (IA)
			{
				switch (ubi) {
				case 1:
					ponerFicha(ubi, F1, x, o, o, i, reset, resetU, jugador1, IA);
					break;
				case 2:
					ponerFicha(ubi, F2, x, o, o, i, reset, resetU, jugador1, IA);
					break;
				case 3:
					ponerFicha(ubi, F3, x, o, o, i, reset, resetU, jugador1, IA);
					break;
				case 4:
					ponerFicha(ubi, F4, x, o, o, i, reset, resetU, jugador1, IA);
					break;
				case 5:
					ponerFicha(ubi, F5, x, o, o, i, reset, resetU, jugador1, IA);
					break;
				case 6:
					ponerFicha(ubi, F6, x, o, o, i, reset, resetU, jugador1, IA);
					break;
				case 7:
					ponerFicha(ubi, F7, x, o, o, i, reset, resetU, jugador1, IA);
					break;
				case 8:
					ponerFicha(ubi, F8, x, o, o, i, reset, resetU, jugador1, IA);
					break;
				case 9:
					ponerFicha(ubi, F9, x, o, o, i, reset, resetU, jugador1, IA);
					break;
				}
			}
		}

		cout << F7 << " | " << F8 << " | " << F9 << "\n" << F4 << " | " << F5 << " | " << F6 << "\n" << F1 << " | " << F2 << " | " << F3 << "\n";

		i++;

		//ROTAR TURNOS Y REINICIAR VARIABLES

		if (multijugador == true && reset == false)
		{
			tmp = jugador1;
			jugador1 = jugador2;
			jugador2 = tmp;
			ubi = 0;
		}
		if (singleplayer == true)
		{
			if (reset == false)
			{
				tmp = jugador1;
				jugador1 = IA;
				IA = tmp;
				ubi = 0;
			}
		}

		if (multijugador == true)
		{
			verificarGanador(F1, F2, F3, x, o, alternativa, alternativa3, rematch, IA,F1,F2,F3,F4,F5,F6,F7,F8,F9);
			verificarGanador(F1, F5, F9, x, o, alternativa, alternativa3, rematch, IA,F1, F2, F3, F4, F5, F6, F7, F8, F9);
			verificarGanador(F1, F4, F7, x, o, alternativa, alternativa3, rematch, IA, F1, F2, F3, F4, F5, F6, F7, F8, F9);
			verificarGanador(F7, F8, F9, x, o, alternativa, alternativa3, rematch, IA, F1, F2, F3, F4, F5, F6, F7, F8, F9);
			verificarGanador(F3, F6, F9, x, o, alternativa, alternativa3, rematch, IA, F1, F2, F3, F4, F5, F6, F7, F8, F9);
			verificarGanador(F4, F5, F6, x, o, alternativa, alternativa3, rematch, IA, F1, F2, F3, F4, F5, F6, F7, F8, F9);
			verificarGanador(F4, F5, F6, x, o, alternativa, alternativa3, rematch, IA, F1, F2, F3, F4, F5, F6, F7, F8, F9);
		}
		if (singleplayer == true)
		{
			verificarGanador(F1, F2, F3, x, o, alternativa, alternativa3, rematch, IA, F1, F2, F3, F4, F5, F6, F7, F8, F9);
			verificarGanador(F1, F5, F9, x, o, alternativa, alternativa3, rematch, IA, F1, F2, F3, F4, F5, F6, F7, F8, F9);
			verificarGanador(F1, F4, F7, x, o, alternativa, alternativa3, rematch, IA, F1, F2, F3, F4, F5, F6, F7, F8, F9);
			verificarGanador(F7, F8, F9, x, o, alternativa, alternativa3, rematch, IA, F1, F2, F3, F4, F5, F6, F7, F8, F9);
			verificarGanador(F3, F6, F9, x, o, alternativa, alternativa3, rematch, IA, F1, F2, F3, F4, F5, F6, F7, F8, F9);
			verificarGanador(F4, F5, F6, x, o, alternativa, alternativa3, rematch, IA, F1, F2, F3, F4, F5, F6, F7, F8, F9);
			verificarGanador(F4, F5, F6, x, o, alternativa, alternativa3, rematch, IA, F1, F2, F3, F4, F5, F6, F7, F8, F9);
		}
		if (rematch == true && multijugador == true)
		{
			rematch == false;
			F1 = ' ';
			F2 = ' ';
			F3 = ' ';
			F4 = ' ';
			F5 = ' ';
			F6 = ' ';
			F7 = ' ';
			F8 = ' ';
			F9 = ' ';
			i = 0;
			seleccion = true;
			jugador1 = true;
			jugador2 = false;
			primerapasada = true;
			continue;
		}
		else if (rematch == true && singleplayer == true)
		{
			rematch == false;
			F1 = ' ';
			F2 = ' ';
			F3 = ' ';
			F4 = ' ';
			F5 = ' ';
			F6 = ' ';
			F7 = ' ';
			F8 = ' ';
			F9 = ' ';
			i = 0;
			seleccion = true;
			jugador1 = true;
			IA = false;
			primerapasada = true;
			continue;
		}
		else
		{
			win == true;
		}
		reset = false;
		resetU = false;

	} while (win == false);
	rand();
	return 0;
	
}