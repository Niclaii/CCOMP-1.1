#pragma once
#include <iostream>
#include "cPokemon.h"
#include "cJugador.h"
#include "cNPC.h"
#include "cObjetos.h"

class Combate
{
public:

    void Seleccion_Accion(Jugador&,Pokemon&,Objeto&);

    void BarrasDeVida(Jugador&,Pokemon&);

    void RealizarMovimiento(Jugador&, Pokemon&);

    void CambiarPoke(Jugador&, Pokemon);

    void RealizarMovimientoCPU();

};