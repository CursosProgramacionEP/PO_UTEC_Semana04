#include <iostream>
#include "../include/calculadora.h"

using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.

int main() {
    int x, y;
    char operador;

    cout << "Ingrese el primer numero: ";   cin >> x;
    cout << "Ingrese el operador: ";        cin >> operador;
    cout << "Ingrese el segundo numero: ";  cin >> y;

    calculadora(operador, &x, &y);          // & porque la funcion pide direcciones
    return 0;
}
