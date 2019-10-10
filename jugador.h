#ifndef JUGADOR_H
#define JUGADOR_H

#include <iostream>
using namespace std;

class Jugador
{
    string nombre;
    size_t numero;
    size_t goles;

public:
    Jugador();
    Jugador(const string &n,
            size_t num,
            size_t g = 0)
    {
        nombre = n;
        numero = num;
        goles = g;
    }

    string getNombre() const;
    void setNombre(const string &value);
    size_t getNumero() const;
    void setNumero(const size_t &value);
    size_t getGoles() const;
    void setGoles(const size_t &value);

    bool operator<(const Jugador &j) const
    {
        return nombre < j.getNombre();
    }
};

#endif // JUGADOR_H
