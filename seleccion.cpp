#include "seleccion.h"
#include <iomanip>
Seleccion::Seleccion()
{

}

void Seleccion::agregarInicio(const Jugador &j)
{
    jugadores.push_front(j);
}

void Seleccion::agregarFinal(const Jugador &j)
{
    jugadores.push_back(j);
}

void Seleccion::mostrar()
{
    cout << left;
    cout << setw(10) << "Nombre" <<
            setw(10) << "Numero" <<
            setw(10) << "Goles" <<
            endl;

    for (auto it = jugadores.begin();
         it != jugadores.end(); it++) {
        Jugador &j = *it;

        cout << setw(10) << j.getNombre() <<
                setw(10) << j.getNumero() <<
                setw(10) << j.getGoles()  <<
                endl;
    }
}

void Seleccion::ordenarNombre()
{
    jugadores.sort();
}

bool comparador(const Jugador &j1,
               const Jugador &j2)
{
    return j1.getNumero() < j2.getNumero();
}

void Seleccion::ordenarNumero()
{
    jugadores.sort(comparador);
}

void Seleccion::ordenarGoles()
{
    jugadores.sort(
    []
    (const Jugador &j1, const Jugador &j2)
    {return j1.getGoles() < j2.getGoles();});
}

void Seleccion::eliminarNombre(const string &n)
{
    for (auto it = jugadores.begin();
         it != jugadores.end(); it++) {
        Jugador &j = *it;

        if (n == j.getNombre()) {
            jugadores.erase(it);
            break;
        }
    }
}
bool comparadorGoles(const Jugador &j)
{
    return j.getGoles() == 0;
}

void Seleccion::eliminarGoles()
{
    jugadores.remove_if(comparadorGoles);
}

void Seleccion::eliminarGoles(size_t g)
{
    jugadores.remove_if(
    [g]
    (const Jugador &j)
    {return j.getGoles() >= g;});
}
