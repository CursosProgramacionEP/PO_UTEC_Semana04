#include <iostream>
#include <string>
using namespace std;

int main(){
    int mi_arreglo[6] = {1,2,3,4,5,6};

    // --- LECTURA: mi_arreglo[i] va a la DERECHA, solo se lee ---
    cout<<"Antes:   ";
    for(int i=0;i<6;i++){
        cout<<mi_arreglo[i]<<",";
    }
    cout<<endl;

    // --- ESCRITURA: mi_arreglo[i] va a la IZQUIERDA del = ---
    // Este es el cambio: en vez de imprimir, asignamos.
    for(int i=0;i<6;i++){
        mi_arreglo[i] = mi_arreglo[i] * 10;
    }

    // --- Volvemos a recorrer para ver el resultado ---
    cout<<"Despues: ";
    for(int i=0;i<6;i++){
        cout<<mi_arreglo[i]<<",";
    }
    cout<<endl;

    return 0;
}