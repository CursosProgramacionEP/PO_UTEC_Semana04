//
// Created by Carlos Palomino Vidal on 1/09/26.
//

#include "../include/calculadora.h"
#include <iostream>
using namespace std;

void calculadora(char op, int* a, int* b) {
    switch (op) {
        case '+':
            cout << *a << " + " << *b << " = " << *a + *b << endl;
            break;
        case '-':
            cout << *a << " - " << *b << " = " << *a - *b << endl;
            break;
        case '*':
            cout << *a << " * " << *b << " = " << *a * *b << endl;
            break;
        case '/':
            if (*b == 0) cout << "Error: division entre cero" << endl;
            else         cout << *a << " / " << *b << " = " << *a / *b << endl;
            break;
        default:
            cout << "Operador no valido: " << op << endl;
    }
}