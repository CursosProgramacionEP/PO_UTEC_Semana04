// serie.cpp -- implementacion

#include <cmath>          // sqrt
#include "serie.h"

double aproximarPi(int n) {

    if (n < 1) return 0;

    // ---------- 1. PEDIR MEMORIA ----------
    // n lo decide el usuario cuando el programa ya esta corriendo,
    // asi que  double t[n];  no sirve: la pila necesita el tamano
    // fijado al compilar. Por eso se pide al monton con new.
    //
    // new double[n] devuelve la DIRECCION del primer double,
    // y esa direccion se guarda en el puntero t.
    double* t = new double[n];

    // ---------- 2. LLENAR ----------
    // t es el puntero; t[i] es la casilla i, que es un double.
    // La serie empieza en 1 pero los indices en 0, de ahi el i+1.
    for (int i = 0; i < n; i++) {
        double k = i + 1;
        t[i] = 1.0 / (k * k);     // 1.0 y no 1: con enteros seria division entera
    }

    // ---------- 3. SUMAR ----------
    double suma = 0;
    for (int i = 0; i < n; i++) {
        suma += t[i];
    }

    // ---------- 4. DEVOLVER LA MEMORIA ----------
    // Se pidio con new[], se devuelve con delete[].
    delete[] t;
    t = nullptr;

    // suma vale pi^2/6, asi que pi = raiz(6 * suma)
    return sqrt(6.0 * suma);
}