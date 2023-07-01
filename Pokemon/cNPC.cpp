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

void NPC::Equipo_PokemonNPC() { // eq pk

}

void NPC::Asignar_EquipoPokemon(Pokemon* poke1, Pokemon* poke2, Pokemon* poke3, Pokemon* poke4, Pokemon* poke5, Pokemon* poke6)
{
    for (int i = 0; i < 6; ++i)
    {
        EquipoPokemonNPC[i] = new Pokemon();
    }
    EquipoPokemonNPC[0] = poke1;
    EquipoPokemonNPC[1] = poke2;
    EquipoPokemonNPC[2] = poke3;
    EquipoPokemonNPC[3] = poke4;
    EquipoPokemonNPC[4] = poke5;
    EquipoPokemonNPC[5] = poke6;
};
