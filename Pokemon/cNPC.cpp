#include <iostream>
#include "cNPC.h"

void NPC::setNPC_x(int x)
{
	NPC_X = x;
}

int NPC::getNPC_x()
{
	return NPC_X;
}

void NPC::setNPC_y(int y)
{
	NPC_Y = y;
}

int NPC::getNPC_y()
{
	return NPC_Y;
}

std::string NPC::getInteraccion()
{
	return Interaccion;
}

void NPC::Asignar_Sprite(std::string spriteMundo, std::string spriteCombate) {
	Sprite_MundoNPC = spriteMundo;
	Sprite_CombateNPC = spriteCombate;
}

void NPC::Asignar_Nombre(std::string nombre) {
	Nombre = nombre;
}

void NPC::Asignar_EquipoPokemon(Pokemon poke1, Pokemon poke2, Pokemon poke3, Pokemon poke4, Pokemon poke5, Pokemon poke6)
{
    EquipoPokemon[0] = poke1;
    EquipoPokemon[1] = poke2;
    EquipoPokemon[2] = poke3;
    EquipoPokemon[3] = poke4;
    EquipoPokemon[4] = poke5;
    EquipoPokemon[5] = poke6;
};
