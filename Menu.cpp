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
#include "Menu.h"
using namespace std;

int menu::regresalado() {
	int back;
	cout << "Ingresa el tamano de la figura: ";
	cin >> back;
	return back;
}

void menu::run() {
	int opcion;
	figura* cuadrado1;
	figura* rombo1;
	figura* triangulo1;
	do {
		cout << "Hola, bievenido al programa :D \n";
		cout << "Que figura quiere dibujar? \n";
		cout << "1-. Cuadrado \n";
		cout << "2-. Rombo \n";
		cout << "3-. Triangulo \n";
		cout << "4-. Finalizar \n";
		cout << "------------------------------ \n";
		cin >> opcion;

		switch (opcion) {
		case 1:
			cuadrado1 = new cuadrado(regresalado());
			cuadrado1->draw();
			break;
		case 2:
			rombo1 = new rombo(regresalado());
			rombo1->draw();
			break;
		case 3:
			triangulo1 = new triangulo(regresalado());
			triangulo1->draw();
			break;
		case 4:
			break;
		default:
			cout << "No disponible >:/ \n";
			break;
		}
	} while (opcion != 4);
}