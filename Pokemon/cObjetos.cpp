#include <iostream>
#include "cObjetos.h"

void Objeto::asignarObjeto() 
{
   objetos[0] = 5   ;     //Pocion
   objetos[1] = 7   ;     //SuperPocion
   objetos[2] = 2   ;     //Despertar
   objetos[3] = 10  ;     //PokeBall
   objetos[4] = 5   ;     //SuperBall
}

void Objeto::manipularObjeto(int indice)
{
    

        objetos[indice] = objetos[indice]-1; // Cambiar el valor del objeto
        
}

void Objeto::visualizarObjetos()
{
  std::cout << "0.Pocion : " << objetos[0] <<"\n";
  std::cout << "1.Super Pocion : " << objetos[1] << "\n";
  std::cout << "2.Despertar : " << objetos[2] << "\n";
  std::cout << "3.Poke Ball : " << objetos[3] << "\n";
  std::cout << "4.Super Ball : " << objetos[4] << "\n";
}