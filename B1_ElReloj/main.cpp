// main.cpp
 
#include "reloj.h"
 
int main() {
    int hora = 0, minutos = 0, segundos = 0;
 
    ingresarHora(&hora, &minutos, &segundos);   // & : mando direcciones
    normalizar(hora, minutos, segundos);        // sin & : son referencias
    mostrarHora(hora, minutos, segundos);       // por valor: solo lee
 
    return 0;
}
 