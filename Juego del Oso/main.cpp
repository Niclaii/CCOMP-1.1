// Hello World program 
// ANSI Codes
// https://gist.github.com/fnky/458719343aabd01cfb17a3a4f7296797

#include <iostream>

using namespace std;

int main() 
{   
	std::system("cls");
	std::system("cls");            // Comando para borrar todo el contenido de la pantalla
    std::cout << "\x1B[H";          // Codigo para colocar el cursor en el canto superior izquierdo

    std::cout << "\x1B[3;33m";         // Mostrar el siguiente texto en modo de letra italico "[3;" y color azul "[ ;34m"	
	std::cout << "/***************************************************/" << std::endl; 
	std::cout << "\x1B[34m";             // Resetear color a valor por defecto
	std::cout << "Universidad Catolica San Pablo" << std::endl; 
	std::cout << "Escuela Profesional de Ciencia de la Computacion I" << std::endl; 
	std::cout << "Curso de Ciencia de la Computacion I" << std::endl; 
	std::cout << "Alumno Nicolas Quintanilla Escalona" << std::endl; 
	std::cout << "Arequipa 2023 - I" << std::endl; 
	std::cout << "\x1B[3;31m";         // Mostrar el siguiente texto en modo de letra italico "[3;" y color azul "[ ;34m"	
	std::cout << "/***************************************************/" << std::endl;
	std::cout << "\x1B[34m";             // Resetear color a valor por defecto 
	std::cout << "Hello, World!! 2023 - I "<< endl;  
	cout << "\n";
	
	std::cout<<"\x1B[m";

	bool primerapasada{ true }, jugador1{ true }, jugador2{ false }, tmp{ };
	int ubi{ 0 }, i{ 0 };
	char x{ 'X' }, o{ 'O' };
	char F1{ ' ' }, F2{ ' ' }, F3{ ' ' }, F4{ ' ' }, F5{ ' ' }, F6{ ' ' }, F7{ ' ' }, F8{ ' ' }, F9{' '};
		
	do 
	{
		//PRIMERA PASADA
		if (primerapasada) 
		{
			cout << '7' << " | " << '8' << " | " << '9' << "\n" << '4' << " | " << '5' << " | " << '6' << "\n" << '1' << " | " << '2' << " | " << '3' << "\n";
			primerapasada = false;
		}
		//TURNOS
		if(jugador1)
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
				if(F1 != x || F1 != o)
                {				
				    F1 = x;
                }
			}
			else if (ubi == 2)
			{
				if(F2 != x || F2 != o)
				{
				    F2 = x;
				}
			}
			else if (ubi == 3)
			{
				if(F3 != x || F3 != o)
				{
				    F3 = x;
				}
			}
			else if (ubi == 4)
			{
				if(F4 != x || F4 != o)
				{
				F4 = x;
				}
			}
			else if (ubi == 5)
			{
				if(F5 != x || F5 != o)
				{
				F5 = x;
				}
			}
			else if (ubi == 6)
			{
				if(F6 != x || F6 != o)
				{
				F6 = x;
				}
			}
			else if (ubi == 7)
			{
				if(F7 != x || F7 != o)
				{
				    F7 = x;
				}
			}
			else if (ubi == 8)
			{
				if(F8 != x || F8 != o)
				{
				F8 = x;
				}
			}
			else if (ubi == 9)
			{
				if(F9 != x || F9 != o)
				{
				F9 = x;
				}
			}
		}
		//JUGADOR 2
		if (jugador2)
		{
		    switch(ubi)
			{    
			    case 1:
			    {
			        if(F1 != x || F1 != o)
			        {
				        F1 = o;
				        break;
			        }
			    }
			    case 2:
			    {
			        if(F2 != x || F2 != o)
			        {
				    F2 = o;
				    break;
			        }
			    }
			    case 3:
			    {
				    if(F3 != x || F3 != o)
				    {
				    F3 = o;
				    break;
				    }
			    }
			    case 4:
			    {
				    if(F4 != x || F4 != o)
				    {
				    F4 = o;
				    break;
				    }
			    }
			    case 5:
			    {
				    if(F5 != x || F5 != o)
				    {
				    F5 = o;
				    break;
				    }
			    }
			    case 6:
			    {
				    if(F6 != x || F6 != o)
				    {
				    F6 = o;
				    break;
				    }
			    }
			    case 7:
			    {
				    if(F7 != x || F7 != o)
				    {
				    F7 = o;
				    break;
				    }
			    }
			    case 8:
			    {
				    if(F8 != x || F8 != o)
				    {
				    F8 = o;
				    break;
				    }
			    }
			    case 9:
			    {
				    if(F9 != x || F9 != o)
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

		if(true)
		{
			tmp = jugador1;
			jugador1 = jugador2;
			jugador2 = tmp;
		}
		//FORMAS DE GANAR JUGADOR 1
		if (F1 == x && F2 == x && F3 == x) 
		{
			cout << "Jugador 1 Gana!" << endl;
			break;
		}
		else if (F1 == x && F5 == x && F9 == x)
		{
			cout << "Jugador 1 Gana!" << endl;
			break;
		}
		else if (F1 == x && F4 == x && F7 == x)
		{
			cout << "Jugador 1 Gana!" << endl;
			break;
		}
		else if (F7 == x && F8 == x && F9 == x)
		{
			cout << "Jugador 1 Gana!" << endl;
			break;
		}
		else if (F3 == x && F6 == x && F9 == x)
		{
			cout << "Jugador 1 Gana!" << endl;
			break;
		}
		else if (F4 == x && F5 == x && F6 == x)
		{
			cout << "Jugador 1 Gana!" << endl;
			break;
		}
		else if (F7 == x && F5 == x && F3 == x)
		{
			cout << "Jugador 1 Gana!" << endl;
			break;
		}
		
		//FORMAS DE GANAR JUGADOR 2
		else if (F1 == o && F2 == o && F3 == o)
		{
			cout << "Jugador 2 Gana!" << endl;
			break;
		}
		else if (F1 == o && F5 == o && F9 == o)
		{
			cout << "Jugador 2 Gana!" << endl;
			break;
		}
		else if (F1 == o && F4 == o && F7 == o)
		{
			cout << "Jugador 2 Gana!" << endl;
			break;
		}
		else if (F7 == o && F8 == o && F9 == o)
		{
			cout << "Jugador 2 Gana!" << endl;
			break;
		}
		else if (F3 == o && F6 == o && F9 == o)
		{
			cout << "Jugador 2 Gana!" << endl;
			break;
		}
		else if (F4 == o && F5 == o && F6 == o)
		{
			cout << "Jugador 2 Gana!" << endl;
			break;
		}
		else if (F7 == o && F5 == o && F3 == o)
		{
			cout << "Jugador 2 Gana!" << endl;
			break;
		}
		else
		{
			cout << "nadie gana\n---------------------------\n";
		}

	} while (i < 9);

	return 0;


}