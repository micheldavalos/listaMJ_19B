#ifndef SELECCION_H
#define SELECCION_H

#include "jugador.h"
#include <list>

class Seleccion
{
    list<Jugador> jugadores;
    string nombre;

public:
    Seleccion();

    void agregarInicio(const Jugador &j);
    void agregarFinal(const Jugador &j);
    void mostrar();

    void ordenarNombre();
    void ordenarNumero();
    void ordenarGoles();

    void eliminarNombre(const string &n);
    void eliminarGoles();
    void eliminarGoles(size_t g);
    string getNombre() const;
    void setNombre(const string &value);
};

#endif // SELECCION_H
