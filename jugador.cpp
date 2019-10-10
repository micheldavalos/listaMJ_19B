#include "jugador.h"

string Jugador::getNombre() const
{
    return nombre;
}

void Jugador::setNombre(const string &value)
{
    nombre = value;
}

size_t Jugador::getNumero() const
{
    return numero;
}

void Jugador::setNumero(const size_t &value)
{
    numero = value;
}

size_t Jugador::getGoles() const
{
    return goles;
}

void Jugador::setGoles(const size_t &value)
{
    goles = value;
}

Jugador::Jugador()
{

}
