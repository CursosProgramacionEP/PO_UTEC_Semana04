// reloj.cpp -- implementacion

#include <iostream>
#include <iomanip>       // para setw y setfill (los ceros a la izquierda)
#include "reloj.h"
using namespace std;

// Tope del reloj: 12h 59min 59s, segun el enunciado.
// Como la hora va de 0 a 12, son 13 valores posibles.
const int HORAS_TOPE = 13;

void ingresarHora(int* h, int* m, int* s) {
    cout << "Ingrese la hora: ";
    cin >> *h;
    cout << "Ingrese los minutos: ";
    cin >> *m;
    cout << "Ingrese los segundos: ";
    cin >> *s;
}

void normalizar(int& h, int& m, int& s) {
    // --- segundos hacia minutos ---
    m = m + s / 60;      // cuantos minutos completos hay en los segundos
    s = s % 60;          // lo que sobra se queda como segundos

    // --- minutos hacia horas ---
    h = h + m / 60;
    m = m % 60;

    // --- horas: da la vuelta al pasar el tope ---
    h = h % HORAS_TOPE;
}

void mostrarHora(int h, int m, int s) {
    // setfill('0') + setw(2) fuerza dos digitos: 7 se imprime como 07
    cout << "Salida: "
         << setfill('0') << setw(2) << h << ":"
         << setw(2) << m << ":"
         << setw(2) << s << endl;
}
