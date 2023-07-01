#pragma once
#include <iostream>
#include "cPokemon.h"
#include "cJugador.h"
#include "cNPC.h"

class Combate
{
public:

    void Seleccion_Accion(Pokemon&, Pokemon&);

    void BarrasDeVida(Pokemon&, Pokemon&);

    void RealizarMovimiento(Pokemon&, Pokemon&);

    void CambiarPoke(Pokemon, Pokemon);

    void RealizarMovimientoCPU();

};