#include <iostream>
#include "cObjetos.h"

void Objeto::asignarObjeto() 
{
   objetos[0] = 5   ;     //Pocion
   objetos[1] = 7   ;     //SuperPocion
   objetos[1] = 2   ;     //Despertar
   objetos[1] = 10  ;     //PokeBall
   objetos[1] = 5   ;     //SuperBall
}

void Objeto::manipularObjeto(int indice)
{
    if (indice >= 0 && indice < size) 
    {
        objetos[indice] = objetos[indice]-1; // Cambiar el valor del objeto
    }
}

void Objeto::visualizarObjetos()
{
  std::cout << "1.Pocion : " << objetos[0] <<"\n";
  std::cout << "2.Super Pocion : " << objetos[2] << "\n";
  std::cout << "3.Despertar : " << objetos[3] << "\n";
  std::cout << "4.Poke Ball : " << objetos[4] << "\n";
  std::cout << "5.Super Ball : " << objetos[5] << "\n";
}