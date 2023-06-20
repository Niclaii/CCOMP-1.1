#include <iostream>
#include "cPersonaje.h"

void setSpriteMundo();
std::string getSpriteMundo();

void setSpriteCombate();
std::string getSpriteCombate();

void setNombrePersonaje();
std::string getNombrePersonaje();

void  Personaje::Dialogo_Interaccion()
{

};




void Personaje::Asignar_EquipoPokemon(Pokemon)
{

};

void Personaje::Asignar_Sprite(std::string spritemundo, std::string spritecombate)
{
    Sprite_Mundo = spritemundo;
    Sprite_Combate = spritecombate;
}



