//
// Created by Carlos Palomino Vidal on 1/09/26.
//
#include <iostream>
#include "../include/nota.h"
using namespace std;

void ingresarDatos(float* nota, float* puntos) {
    cout << "Ingrese la nota de la Practica Calificada: ";
    cin >> *nota;      // el valor leido se guarda en la casilla de main
    cout << "Ingrese los puntos extra: ";
    cin >> *puntos;
}

void corregirNota(float* nota, float* puntos) {
    *nota = *nota + *puntos;      // modifica la nota original

    if (*nota > 20) *nota = 20;   // la nota no puede pasar de 20
}

void imprimirNota(float* nota) {
    cout << "Nueva nota: " << *nota << endl;
}































