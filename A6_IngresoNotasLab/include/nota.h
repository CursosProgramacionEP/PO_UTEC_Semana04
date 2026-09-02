//
// Created by Carlos Palomino Vidal on 1/09/26.
//

#ifndef A6_INGRESONOTASLAB_NOTA_H
#define A6_INGRESONOTASLAB_NOTA_H
// Lee la nota y los puntos desde teclado.
// Recibe punteros porque tiene que MODIFICAR las variables de main.
void ingresarDatos(float* nota, float* puntos);

// Suma los puntos a la nota. Modifica la nota original.
void corregirNota(float* nota, float* puntos);

// Solo muestra, no modifica.
void imprimirNota(float* nota);
 
#endif //A6_INGRESONOTASLAB_NOTA_H
