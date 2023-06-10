#pragma once

#include <string>

class Personaje {
private:
    std::string Sprite_Mundo;
    std::string Sprite_Combate;
    std::string Nombre;
    std::string Dialogo_Interaccion;

public:
    void Asignar_Sprite(std::string sprite);
};
