#include <iostream> 

using namespace std;

void identificacion_alumno()
{
	std::system("cls");
	std::system("cls");            // Comando para borrar todo el contenido de la pantalla
	std::cout << "\x1B[H";          // Codigo para colocar el cursor en el canto superior izquierdo

	std::cout << "\x1B[3;33m";         // Mostrar el siguiente texto en modo de letra italico "[3;" y color azul "[ ;34m"	
	std::cout << "/***************************************************/" << std::endl;
	std::cout << "\x1B[36m";             // Resetear color a valor por defecto
	std::cout << "Universidad Catolica San Pablo" << std::endl;
	std::cout << "Escuela Profesional de Ciencia de la Computacion I" << std::endl;
	std::cout << "Curso de Ciencia de la Computacion I" << std::endl;
	std::cout << "Alumno Nicolas Quintanilla Escalona" << std::endl;
	std::cout << "Profesor Manuel Loaiza Fernandez" << std::endl;
	std::cout << "Arequipa 2023 - I" << std::endl;
	std::cout << "\x1B[3;33m";         // Mostrar el siguiente texto en modo de letra italico "[3;" y color azul "[ ;34m"	
	std::cout << "/***************************************************/" << std::endl;
	std::cout << "\x1B[34m";             // Resetear color a valor por defecto 
	cout << endl;

	std::cout << "\x1B[m";
	std::cout << "\n";
}

int main() 
{
	identificacion_alumno();
}