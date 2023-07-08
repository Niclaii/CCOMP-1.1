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

void Personaje::Asignar_EquipoPokemon(Pokemon poke1, Pokemon poke2, Pokemon poke3, Pokemon poke4, Pokemon poke5, Pokemon poke6)
{

    EquipoPokemon[0] = poke1;
    EquipoPokemon[1] = poke2;
    EquipoPokemon[2] = poke3;
    EquipoPokemon[3] = poke4;
    EquipoPokemon[4] = poke5;
    EquipoPokemon[5] = poke6;
};

void Personaje::Asignar_Sprite(std::string spritemundo, std::string spritecombate)
{
    Sprite_Mundo = spritemundo;
    Sprite_Combate = spritecombate;
}