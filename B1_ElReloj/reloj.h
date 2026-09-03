//
// Created by Carlos Palomino Vidal on 2/09/26.
//

#ifndef RELOJ_H
#define RELOJ_H

// Lee hora, minutos y segundos desde teclado.
// Punteros porque debe modificar las tres variables de main.
void ingresarHora(int* h, int* m, int* s);

// Normaliza el acarreo: 121 s -> 2 min + 1 s, etc.
// Referencias: mas limpio de leer y no pueden ser nulas.
void normalizar(int& h, int& m, int& s);

// Imprime en formato HH:MM:SS con ceros a la izquierda.
// Solo lee, no modifica.
void mostrarHora(int h, int m, int s);

#endif
