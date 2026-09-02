#include <iostream>
#include "../include/nota.h"
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.

int main() {
    float notaPC = 0, puntos = 0;

    ingresarDatos(&notaPC, &puntos);   // & : mando las direcciones
    corregirNota(&notaPC, &puntos);
    imprimirNota(&notaPC);

    return 0;
}































