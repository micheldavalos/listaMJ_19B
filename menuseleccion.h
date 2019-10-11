#ifndef MENUSELECCION_H
#define MENUSELECCION_H

#include "seleccion.h"

class MenuSeleccion
{
public:
    MenuSeleccion();
    void menu(Seleccion &s);
    Jugador capturar();
};

#endif // MENUSELECCION_H
