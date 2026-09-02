//
// Created by Carlos Palomino Vidal on 1/09/26.
//

#include "../include/programasEvaluar.h"
#include <iostream>
using namespace std;

void programa1() {
    int a = 123;
    int* pa = &a;

    cout << a   << "\n";   // el valor
    cout << &a  << "\n";   // la direccion de a
    cout << pa  << "\n";   // igual a la anterior
    cout << *pa << "\n";   // el valor otra vez
    cout << &pa << endl;   // DIRECCION DISTINTA: la casilla del puntero pa tamnien es una variable
                           //tiene su propia direccion
}
void programa2() {
    int a = 123;
    int* pa = &a;

    cout << a << " " << *pa << endl;
    ++a;                              // se modifica a, NO el puntero
    cout << a << " " << *pa << endl;  // *pa tambien cambio
    //no modifica el puntero, sino la variable a, que es a la que apunta el puntero
    //La moraleja: el puntero no guardó una copia, guardó la ubicación.
}

void programa3() {
    int a = 0;
    int *p1 = &a, *p2 = &a;   // dos punteros, una sola variable

    ++(*p1);                  // a = 1
    ++(*p2);                  // a = 2
    cout << a << endl;
    //La moraleja: varios punteros pueden apuntar al mismo dato, y todos escriben sobre él.
}
void programa4() {
    int a = 0, b = 1;
    int* p = &a;

    *p = b;      // copia el VALOR de b dentro de a  ->  a = 1
                 // (NO hace que p apunte a b; eso seria  p = &b;)
                //operador de desreferencia
    ++a;         // a = 2
    cout << a << endl;

    //La moraleja: *p = b no reapunta el puntero, copia un valor.
}

void programa5() {
    int a = 123;
    int* pa = &a;
    int** ppa = &pa;    // puntero a puntero

    cout << a     << "\n";   // directo
    cout << *pa   << "\n";   // un salto
    cout << **ppa << endl;   // dos saltos
    //La moraleja: el puntero también tiene dirección, así que puedes apuntarle.
}