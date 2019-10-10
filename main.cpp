#include <iostream>
#include "seleccion.h"
using namespace std;

int main()
{
    Seleccion mexico;

    Jugador j1("Michel", 43);
    Jugador j2("Davalos", 33, 2);
    Jugador j3("Boites", 23, 1);
    Jugador j4("UdG", 13);

    mexico.agregarFinal(j1);
    mexico.agregarFinal(j2);
    mexico.agregarInicio(j3);
    mexico.agregarFinal(j4);

    mexico.mostrar();
    //mexico.ordenarNombre();
    //mexico.ordenarNumero();
    //mexico.ordenarGoles();
    //mexico.eliminarNombre("Davalos");
    mexico.eliminarGoles(0);
    mexico.mostrar();

//    vector<Seleccion> mundial;


    return 0;
}
