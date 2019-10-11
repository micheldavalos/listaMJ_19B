#include <iostream>
#include "menuseleccion.h"
#include <vector>
using namespace std;

int main()
{
 /*   Seleccion mexico;

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
*/

    /*Seleccion mexico;
    MenuSeleccion m;
    m.menu(mexico);*/

    vector<Seleccion> mundial;
    string op;

    while (true) {
        cout << "1) Agregar Seleccion" << endl;
        cout << "2) Elegir Seleccion" << endl;
        cout << "0) Salir";
        getline(cin, op);

        if (op == "1") {
            string nombre;

            cout << "Nombre: ";
            getline(cin, nombre);

            Seleccion s;
            s.setNombre(nombre);

            mundial.push_back(s);
        }
        else if (op == "2") {
            if (mundial.empty()) {
                cout << "Mundial vacio" << endl;
            }
            else {
                for (size_t i = 0;
                     i < mundial.size(); i++) {
                    Seleccion &s = mundial[i];
                    cout << i + 1 << ") ";
                    cout << s.getNombre() <<
                            endl;
                }
                cout << "0) Salir" << endl;

                size_t ops;

                cin >> ops; cin.ignore();

                if (ops > mundial.size()) {
                    cout << "Opcion incorrecta"
                         << endl;
                }
                else if (ops != 0) {
                    Seleccion &s = mundial[ops-1];
                    MenuSeleccion m;
                    m.menu(s);
                }



            }
        }
        else if (op == "0") {
            break;
        }
    }


    return 0;
}
