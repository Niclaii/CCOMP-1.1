// Hello World program 
// ANSI Codes
// https://gist.github.com/fnky/458719343aabd01cfb17a3a4f7296797

#include <iostream>
#include <cstdlib>

using namespace std;

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
				multijugador = true;
				cout << "Ingrese la letra que quiere usar el Jugador 1:" << x;
				cin >> x;

				cout << "Ingrese la letra que quiere usar el Jugador 2:" << o;
				cin >> o;
				cout << "\n";
				seleccion = true;
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
					cout << "Ingrese la letra que quiere usar el Jugador 1:" << x;
					cin >> x;
					cout << "Ingrese la letra que quiere usar para la IA" << o;
					cin >> o;
					cout << "\n";
					seleccion = true;
					break;
				}
				if (alternativa2 == 2)
				{
					singleplayer = true;
					cout << "no disponible temporalmente. Por favor ingrese otra opcion.\n" << endl;
					/*cout << "Ingrese la letra que quiere usar el Jugador 1:" << x;
					cin >> x;
					cout << "\n";
					seleccion = true;
					break;*/
				}
				if (alternativa2 == 3)
				{
					singleplayer = true;
					cout << "no disponible temporalmente. Por favor ingrese otra opcion.\n" << endl;
					/*cout << "Ingrese la letra que quiere usar el Jugador 1:" << x;
					cin >> x;
					cout << "\n";
					seleccion = true;
					break;*/
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
				if (F1 != x && F1 != o)
				{
					F1 = x;
				}
				else
				{
					cout << "\n";
					cout << "Reingrese una ubicacion: \n";
					i = i - 1;
					reset = true;
					resetU = true;
				}
			}
			else if (ubi == 2)
			{
				if (F2 != x && F2 != o)
				{
					F2 = x;
				}
				else
				{
					cout << "\n";
					cout << "Reingrese una ubicacion: \n";
					i = i - 1;
					reset = true;
					resetU = true;
				}
			}
			else if (ubi == 3)
			{
				if (F3 != x && F3 != o)
				{
					F3 = x;
				}
				else
				{
					cout << "\n";
					cout << "Reingrese una ubicacion: \n";
					i = i - 1;
					reset = true;
					resetU = true;
				}
			}
			else if (ubi == 4)
			{
				if (F4 != x && F4 != o)
				{
					F4 = x;
				}
				else
				{
					cout << "\n";
					cout << "Reingrese una ubicacion: \n";
					i = i - 1;
					reset = true;
					resetU = true;
				}
			}
			else if (ubi == 5)
			{
				if (F5 != x && F5 != o)
				{
					F5 = x;
				}
				else
				{
					cout << "\n";
					cout << "Reingrese una ubicacion: \n";
					i = i - 1;
					reset = true;
					resetU = true;
				}
			}
			else if (ubi == 6)
			{
				if (F6 != x && F6 != o)
				{
					F6 = x;
				}
				else
				{
					cout << "\n";
					cout << "Reingrese una ubicacion: \n";
					i = i - 1;
					reset = true;
					resetU = true;
				}
			}
			else if (ubi == 7)
			{
				if (F7 != x && F7 != o)
				{
					F7 = x;
				}
				else
				{
					cout << "\n";
					cout << "Reingrese una ubicacion: \n";
					i = i - 1;
					reset = true;
					resetU = true;
				}
			}
			else if (ubi == 8)
			{
				if (F8 != x && F8 != o)
				{
					F8 = x;
				}
				else
				{
					cout << "\n";
					cout << "Reingrese una ubicacion: \n";
					i = i - 1;
					reset = true;
					resetU = true;
				}
			}
			else if (ubi == 9)
			{
				if (F9 != x && F9 != o)
				{
					F9 = x;
				}
				else
				{
					cout << "\n";
					cout << "Reingrese una ubicacion: \n";
					i = i - 1;
					reset = true;
					resetU = true;
				}
			}
		}
	

		//JUGADOR 2
		if (multijugador == true)
		{
			if (jugador2)
			{
				if (ubi == 1)
				{
					if (F1 != x && F1 != o)
					{
						F1 = o;
					}
					else
					{
						cout << "\n";
						cout << "Reingrese una ubicacion: \n";
						i = i - 1;
						reset = true;
						resetU = true;
					}
				}
				else if (ubi == 2)
				{
					if (F2 != x && F2 != o)
					{
						F2 = o;
					}
					else
					{
						cout << "\n";
						cout << "Reingrese una ubicacion: \n";
						i = i - 1;
						reset = true;
						resetU = true;
					}
				}
				else if (ubi == 3)
				{
					if (F3 != x && F3 != o)
					{
						F3 = o;
					}
					else
					{
						cout << "\n";
						cout << "Reingrese una ubicacion: \n";
						i = i - 1;
						reset = true;
						resetU = true;
					}
				}
				else if (ubi == 4)
				{
					if (F4 != x && F4 != o)
					{
						F4 = o;
					}
					else
					{
						cout << "\n";
						cout << "Reingrese una ubicacion: \n";
						i = i - 1;
						reset = true;
						resetU = true;
					}
				}
				else if (ubi == 5)
				{
					if (F5 != x && F5 != o)
					{
						F5 = o;
					}
					else
					{
						cout << "\n";
						cout << "Reingrese una ubicacion: \n";
						i = i - 1;
						reset = true;
						resetU = true;
					}
				}
				else if (ubi == 6)
				{
					if (F6 != x && F6 != o)
					{
						F6 = o;
					}
					else
					{
						cout << "\n";
						cout << "Reingrese una ubicacion: \n";
						i = i - 1;
						reset = true;
						resetU = true;
					}
				}
				else if (ubi == 7)
				{
					if (F7 != x && F7 != o)
					{
						F7 = o;
					}
					else
					{
						cout << "\n";
						cout << "Reingrese una ubicacion: \n";
						i = i - 1;
						reset = true;
						resetU = true;
					}
				}
				else if (ubi == 8)
				{
					if (F8 != x && F8 != o)
					{
						F8 = o;
					}
					else
					{
						cout << "\n";
						cout << "Reingrese una ubicacion: \n";
						i = i - 1;
						reset = true;
						resetU = true;
					}
				}
				else if (ubi == 9)
				{
					if (F9 != x && F9 != o)
					{
						F9 = o;
					}
					else
					{
						cout << "\n";
						cout << "Reingrese una ubicacion: \n";
						i = i - 1;
						reset = true;
						resetU = true;
					}
				}
			}
		}

		//IA
		if (singleplayer == true)
		{
			if (IA)
			{
				int random = rand();
				
				cout << random << endl;

				while(true) 
				{
					random = 1 + std::rand()/((RAND_MAX + 1u)/9);  // Note: 1+rand()%6 is biased
        			break;
				}
           		
				ubi = random;



				if (ubi == 1)
				{
					if (F1 != x && F1 != o)
					{
						F1 = o;
					}
					else
					{
						i = i - 1;
						reset = true;
					}
				}
				else if (ubi == 2)
				{
					if (F2 != x && F2 != o)
					{
						F2 = o;
					}
					else
					{
						i = i - 1;
						reset = true;
					}
				}
				else if (ubi == 3)
				{
					if (F3 != x && F3 != o)
					{
						F3 = o;
					}
					else
					{
						i = i - 1;
						reset = true;
					}
				}
				else if (ubi == 4)
				{
					if (F4 != x && F4 != o)
					{
						F4 = o;
					}
					else
					{
						i = i - 1;
						reset = true;
					}
				}
				else if (ubi == 5)
				{
					if (F5 != x && F5 != o)
					{
						F5 = o;
					}
					else
					{
						i = i - 1;
						reset = true;
					}
				}
				else if (ubi == 6)
				{
					if (F6 != x && F6 != o)
					{
						F6 = o;
					}
					else
					{
						i = i - 1;
						reset = true;
					}
				}
				else if (ubi == 7)
				{
					if (F7 != x && F7 != o)
					{
						F7 = o;
					}
					else
					{
						i = i - 1;
						reset = true;
					}
				}
				else if (ubi == 8)
				{
					if (F8 != x && F8 != o)
					{
						F8 = o;
					}
					else
					{
						i = i - 1;
						reset = true;
					}
				}
				else if (ubi == 9)
				{
					if (F9 != x && F9 != o)
					{
						F9 = o;
					}
					else
					{
						i = i - 1;
						reset = true;
					}
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
			//FORMAS DE GANAR JUGADOR 1
			if (F1 == x && F2 == x && F3 == x)
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
					break;
				}
				else
				{
					cout << "\n";
					cout << "Ingrese un numero valido por favor." << endl;
					cout << "\n";
					alternativa = 0;
				}
			}
			else if (F1 == x && F5 == x && F9 == x)
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
					break;
				}
				else
				{
					cout << "\n";
					cout << "Ingrese un numero valido por favor." << endl;
					cout << "\n";
					alternativa = 0;
				}
			}
			else if (F1 == x && F4 == x && F7 == x)
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
					break;
				}
				else
				{
					cout << "\n";
					cout << "Ingrese un numero valido por favor." << endl;
					cout << "\n";
					alternativa = 0;
				}
			}
			else if (F7 == x && F8 == x && F9 == x)
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
					break;
				}
				else
				{
					cout << "\n";
					cout << "Ingrese un numero valido por favor." << endl;
					cout << "\n";
					alternativa = 0;
				}
			}
			else if (F3 == x && F6 == x && F9 == x)
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
					break;
				}
				else
				{
					cout << "\n";
					cout << "Ingrese un numero valido por favor." << endl;
					cout << "\n";
					alternativa = 0;
				}
			}
			else if (F4 == x && F5 == x && F6 == x)
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
					break;
				}
				else
				{
					cout << "\n";
					cout << "Ingrese un numero valido por favor." << endl;
					cout << "\n";
					alternativa = 0;
				}
			}
			else if (F7 == x && F5 == x && F3 == x)
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
					break;
				}
				else
				{
					cout << "\n";
					cout << "Ingrese un numero valido por favor." << endl;
					cout << "\n";
					alternativa = 0;
				}
			}
			//FORMAS DE GANAR JUGADOR 2
			else if (F1 == o && F2 == o && F3 == o)
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
					break;
				}
				else
				{
					cout << "\n";
					cout << "Ingrese un numero valido por favor." << endl;
					cout << "\n";
					alternativa = 0;
				}
			}
			else if (F1 == o && F5 == o && F9 == o)
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
					break;
				}
				else
				{
					cout << "\n";
					cout << "Ingrese un numero valido por favor." << endl;
					cout << "\n";
					alternativa = 0;
				}
			}
			else if (F1 == o && F4 == o && F7 == o)
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
					break;
				}
				else
				{
					cout << "\n";
					cout << "Ingrese un numero valido por favor." << endl;
					cout << "\n";
					alternativa = 0;
				}
			}
			else if (F7 == o && F8 == o && F9 == o)
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
					break;
				}
				else
				{
					cout << "\n";
					cout << "Ingrese un numero valido por favor." << endl;
					cout << "\n";
					alternativa = 0;
				}
			}
			else if (F3 == o && F6 == o && F9 == o)
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
					break;
				}
				else
				{
					cout << "\n";
					cout << "Ingrese un numero valido por favor." << endl;
					cout << "\n";
					alternativa = 0;
				}
			}
			else if (F4 == o && F5 == o && F6 == o)
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
					break;
				}
				else
				{
					cout << "\n";
					cout << "Ingrese un numero valido por favor." << endl;
					cout << "\n";
					alternativa = 0;
				}
			}
			else if (F7 == o && F5 == o && F3 == o)
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
					break;
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
				if (F1 == (o && x) && F2 == (o && x) && F3 == (o && x) && F4 == (o && x) && F5 == (o && x) && F6 == (o && x) && F7 == (o && x) && F8 == (o && x) && F9 == (o && x))

					cout << "Nadie Gana"; std::cout << "\x1B[3;92m";
				std::cout << "/***************************************************/" << std::endl;
				std::cout << "\x1B[m";
			}
		}
		if (singleplayer == true)
		{
			//FORMAS DE GANAR JUGADOR 1

			if (F1 == x && F2 == x && F3 == x)
			{
				cout << "Humano Gana!" << endl;

				cout << "\n";
				cout << "Desea jugar de nuevo?\n1.Si\n2.No" << endl;
				cin >> alternativa3;
				if (alternativa3 == 1)
				{
					rematch = true;
				}
				else if (alternativa3 == 2)
				{
					break;
				}
				else
				{
					cout << "\n";
					cout << "Ingrese un numero valido por favor." << endl;
					cout << "\n";
					alternativa = 0;
				}
			}
			else if (F1 == x && F5 == x && F9 == x)
			{
				cout << "Humano Gana!" << endl;

				cout << "\n";
				cout << "Desea jugar de nuevo?\n1.Si\n2.No" << endl;
				cin >> alternativa3;
				if (alternativa3 == 1)
				{
					rematch = true;
				}
				else if (alternativa3 == 2)
				{
					break;
				}
				else
				{
					cout << "\n";
					cout << "Ingrese un numero valido por favor." << endl;
					cout << "\n";
					alternativa = 0;
				}
			}
			else if (F1 == x && F4 == x && F7 == x)
			{
				cout << "Humano Gana!" << endl;

				cout << "\n";
				cout << "Desea jugar de nuevo?\n1.Si\n2.No" << endl;
				cin >> alternativa3;
				if (alternativa3 == 1)
				{
					rematch = true;
				}
				else if (alternativa3 == 2)
				{
					break;
				}
				else
				{
					cout << "\n";
					cout << "Ingrese un numero valido por favor." << endl;
					cout << "\n";
					alternativa = 0;
				}
			}
			else if (F7 == x && F8 == x && F9 == x)
			{
				cout << "Humano Gana!" << endl;

				cout << "\n";
				cout << "Desea jugar de nuevo?\n1.Si\n2.No" << endl;
				cin >> alternativa3;
				if (alternativa3 == 1)
				{
					rematch = true;
				}
				else if (alternativa3 == 2)
				{
					break;
				}
				else
				{
					cout << "\n";
					cout << "Ingrese un numero valido por favor." << endl;
					cout << "\n";
					alternativa = 0;
				}
			}
			else if (F3 == x && F6 == x && F9 == x)
			{
				cout << "Humano Gana!" << endl;

				cout << "\n";
				cout << "Desea jugar de nuevo?\n1.Si\n2.No" << endl;
				cin >> alternativa3;
				if (alternativa3 == 1)
				{
					rematch = true;
				}
				else if (alternativa3 == 2)
				{
					break;
				}
				else
				{
					cout << "\n";
					cout << "Ingrese un numero valido por favor." << endl;
					cout << "\n";
					alternativa = 0;
				}
			}
			else if (F4 == x && F5 == x && F6 == x)
			{
				cout << "Humano Gana!" << endl;
				cout << "\n";
				cout << "Desea jugar de nuevo?\n1.Si\n2.No" << endl;
				cin >> alternativa3;
				if (alternativa3 == 1)
				{
					rematch = true;
				}
				else if (alternativa3 == 2)
				{
					break;
				}
				else
				{
					cout << "\n";
					cout << "Ingrese un numero valido por favor." << endl;
					cout << "\n";
					alternativa = 0;
				}
			}
			else if (F7 == x && F5 == x && F3 == x)
			{
				cout << "Humano Gana!" << endl;

				cout << "\n";
				cout << "Desea jugar de nuevo?\n1.Si\n2.No" << endl;
				cin >> alternativa3;
				if (alternativa3 == 1)
				{
					rematch = true;
				}
				else if (alternativa3 == 2)
				{
					break;
				}
				else
				{
					cout << "\n";
					cout << "Ingrese un numero valido por favor." << endl;
					cout << "\n";
					alternativa = 0;
				}
			}
			//FORMAS DE GANAR IA
			else if (F1 == o && F2 == o && F3 == o)
			{
				cout << "IA Gana!" << endl;

				cout << "\n";
				cout << "Desea jugar de nuevo?\n1.Si\n2.No" << endl;
				cin >> alternativa3;
				if (alternativa3 == 1)
				{
					rematch = true;
				}
				else if (alternativa3 == 2)
				{
					break;
				}
				else
				{
					cout << "\n";
					cout << "Ingrese un numero valido por favor." << endl;
					cout << "\n";
					alternativa = 0;
				}
			}
			else if (F1 == o && F5 == o && F9 == o)
			{
				cout << "IA Gana!" << endl;
				cout << "\n";
				cout << "Desea jugar de nuevo?\n1.Si\n2.No" << endl;
				cin >> alternativa3;
				if (alternativa3 == 1)
				{
					rematch = true;
				}
				else if (alternativa3 == 2)
				{
					break;
				}
				else
				{
					cout << "\n";
					cout << "Ingrese un numero valido por favor." << endl;
					cout << "\n";
					alternativa = 0;
				}
			}
			else if (F1 == o && F4 == o && F7 == o)
			{
				cout << "IA Gana!" << endl;
				cout << "\n";
				cout << "Desea jugar de nuevo?\n1.Si\n2.No" << endl;
				cin >> alternativa3;
				if (alternativa3 == 1)
				{
					rematch = true;
				}
				else if (alternativa3 == 2)
				{
					break;
				}
				else
				{
					cout << "\n";
					cout << "Ingrese un numero valido por favor." << endl;
					cout << "\n";
					alternativa = 0;
				}
			}
			else if (F7 == o && F8 == o && F9 == o)
			{
				cout << "IA Gana!" << endl;
				cout << "\n";
				cout << "Desea jugar de nuevo?\n1.Si\n2.No" << endl;
				cin >> alternativa3;
				if (alternativa3 == 1)
				{
					rematch = true;
				}
				else if (alternativa3 == 2)
				{
					break;
				}
				else
				{
					cout << "\n";
					cout << "Ingrese un numero valido por favor." << endl;
					cout << "\n";
					alternativa = 0;
				}
			}
			else if (F3 == o && F6 == o && F9 == o)
			{
				cout << "IA Gana!" << endl;
				cout << "\n";
				cout << "Desea jugar de nuevo?\n1.Si\n2.No" << endl;
				cin >> alternativa3;
				if (alternativa3 == 1)
				{
					rematch = true;
				}
				else if (alternativa3 == 2)
				{
					break;
				}
				else
				{
					cout << "\n";
					cout << "Ingrese un numero valido por favor." << endl;
					cout << "\n";
					alternativa = 0;
				}
			}
			else if (F4 == o && F5 == o && F6 == o)
			{
				cout << "IA Gana!" << endl;
				cout << "\n";
				cout << "Desea jugar de nuevo?\n1.Si\n2.No" << endl;
				cin >> alternativa3;
				if (alternativa3 == 1)
				{
					rematch = true;
				}
				else if (alternativa3 == 2)
				{
					break;
				}
				else
				{
					cout << "\n";
					cout << "Ingrese un numero valido por favor." << endl;
					cout << "\n";
					alternativa = 0;
				}
			}
			else if (F7 == o && F5 == o && F3 == o)
			{
				cout << "IA Gana!" << endl;
				cout << "\n";
				cout << "Desea jugar de nuevo?\n1.Si\n2.No" << endl;
				cin >> alternativa3;
				if (alternativa3 == 1)
				{
					rematch = true;
				}
				else if (alternativa3 == 2)
				{
					break;
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
				if (F1 == (o && x) && F2 == (o && x) && F3 == (o && x) && F4 == (o && x) && F5 == (o && x) && F6 == (o && x) && F7 == (o && x) && F8 == (o && x) && F9 == (o && x))

					cout << "Nadie Gana"; std::cout << "\x1B[3;92m";
				std::cout << "/***************************************************/" << std::endl;
				std::cout << "\x1B[m";
				cout << "\n";
				cout << "Desea jugar de nuevo?\n1.Si\n2.No" << endl;
				cin >> alternativa3;
				if (alternativa3 == 1)
				{
					rematch = true;
				}
				else if (alternativa3 == 2)
				{
					break;
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