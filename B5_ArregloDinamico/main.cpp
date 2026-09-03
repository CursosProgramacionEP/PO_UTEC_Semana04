#include <iostream>
using namespace std;

int main(){

    // El usuario decide el tamano cuando el programa ya esta corriendo
    int n;
    cout<<"Cuantos elementos? ";
    cin>>n;

    // ARREGLO DINAMICO
    // new int[n] pide n enteros y devuelve la DIRECCION del primero.
    // Esa direccion se guarda en el puntero arr.
    int* arr = new int[n];

    // Llenar: se usa igual que un arreglo normal
    for(int i=0;i<n;i++){
        cout<<"Elemento "<<i<<": ";
        cin>>arr[i];
    }

    // Recorrer
    cout<<"Contenido: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;

    // Modificar
    for(int i=0;i<n;i++){
        arr[i] = arr[i] * 2;
    }

    cout<<"Duplicado: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;

    // Liberar: se pidio con new[], se devuelve con delete[]
    delete[] arr;
    arr = nullptr;

    return 0;
}