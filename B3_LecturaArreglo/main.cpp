#include <iostream>
#include <string>
using namespace std;

int main(){
    int mi_arreglo[6] = {1,2,3,4,5,6};

    // El indice i cambia; el arreglo no se toca.
    // mi_arreglo[i] a la derecha del << : operacion de LECTURA
    for(int i=0;i<6;i++){
        cout<<mi_arreglo[i]<<",";   // imprime valor + coma
    }
    // Salida: 1,2,3,4,5,6,   <- la coma final sobra

    cout<<endl;
    return 0;
}