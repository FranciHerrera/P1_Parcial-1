/*
Proyecto 1
Francisco Javier Herrera Ruiz
22110123
Grupo 2O
*/
#include <iostream>
#include "Figuras.h"
#include "Cuadrado.h"
#include "Rombo.h"
#include "Triangulo.h"
using namespace std;

figura::figura(int lado) {
	this->lado = lado;
}

cuadrado::cuadrado(int lado) : figura(lado) {

}
rombo::rombo(int lado) : figura(lado) {

}
triangulo::triangulo(int lado) : figura(lado) {

}

void figura::draw() {

}

void cuadrado::draw() {
    int opc;

    cout << "Como quiere el cuadrado?\n";
    cout << "1- Lleno \n";
    cout << "2- Hueco \n";
    cout << "Opcion:  ";
    cout << "\n";

    cin >> opc;

    if (opc == 1) {

        for (int i = 0; i < lado; i++) {
            for (int j = 0; j < lado; ++j) {
                cout << "*";
            }
            cout << "\n";
        }
    }
    else
    {
        cout << "\n";
        for (int i = 0; i < lado; i++) {
            for (int j = 0; j < lado; j++) {
                if (i == 0 || j == 0 || (i == lado - 1) || (j == lado - 1)) {
                    cout << "*";
                }
                else {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
}


void rombo::draw() {
    for (int j = 0; j < lado; ++j) {
        for (int i = 0; i < lado - j - 1; ++i)
            cout << " ";
        for (int i = 0; i < 2 * j + 1; ++i)
            cout << "*";
        cout << endl;
    }

    for (int j = lado - 2; j >= 0; --j) {
        for (int i = 0; i < lado - j - 1; ++i)
            cout << " ";
        for (int i = 0; i < 2 * j + 1; ++i)
            cout << "*";
        cout << endl;
    }
}

void triangulo::draw() {
    for (int i = 0; i < lado; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << "\n";
    }
}