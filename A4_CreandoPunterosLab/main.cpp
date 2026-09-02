// Ejercicio 1 - Declaraciones
// a) Un puntero a un caracter
// b) Un puntero a un puntero a caracter
// c) Un puntero a un puntero a entero
// d) Inicializar cada uno e imprimir sus valores y sus direcciones
 
#include <iostream>
using namespace std;
 
int main() {
 
    // ---------- a) puntero a caracter ----------
    char  letra = 'A';
    char* pLetra = &letra;      // un asterisco = un salto hasta el char
 
    cout << "a) PUNTERO A CHAR\n";
    cout << "   letra          = " << letra          << "\n";
    // OJO: si imprimes pLetra directo, cout lo trata como texto y saca basura.
    // Hay que convertirlo a void* para ver la direccion.
    cout << "   pLetra         = " << (void*)pLetra  << "   (direccion de letra)\n";
    cout << "   *pLetra        = " << *pLetra        << "   (el valor apuntado)\n";
    cout << "   &pLetra        = " << (void*)&pLetra << "   (donde vive el puntero)\n\n";

    /*
     * El (void*) por todos lados en la parte del char. Sin él,
     * cout << pLetra imprime la letra y lo que venga después en
     * memoria hasta topar un cero.
     *
    * "En C++ el texto se guarda como char*. Por eso cuando cout ve un char*, imprime texto."
    * "Pero el nuestro apunta a una letra sola, no a un texto. cout no nota la diferencia y
    * trata de imprimir texto igual."
    * "Por eso ponemos (void*): para que cout no lo confunda con texto y muestre la dirección."
    * void* es un puntero sin tipo 
     */
 
    // ---------- b) puntero a puntero a caracter ----------
    char** ppLetra = &pLetra;   // guarda la direccion del puntero pLetra
 
    cout << "b) PUNTERO A PUNTERO A CHAR\n";
    cout << "   ppLetra        = " << (void*)ppLetra  << "   (direccion de pLetra)\n";
    cout << "   *ppLetra       = " << (void*)*ppLetra << "   (esto ES pLetra)\n";
    cout << "   **ppLetra      = " << **ppLetra       << "   (dos saltos: la letra)\n";
    cout << "   &ppLetra       = " << (void*)&ppLetra << "\n\n";
 
 
    // ---------- c) puntero a puntero a entero ----------
    int   numero  = 77;
    int*  pNumero = &numero;
    int** ppNumero = &pNumero;
 
    cout << "c) PUNTERO A PUNTERO A INT\n";
    cout << "   numero         = " << numero     << "\n";
    cout << "   pNumero        = " << pNumero    << "   (direccion de numero)\n";
    cout << "   ppNumero       = " << ppNumero   << "   (direccion de pNumero)\n";
    cout << "   *ppNumero      = " << *ppNumero  << "   (esto ES pNumero)\n";
    cout << "   **ppNumero     = " << **ppNumero << "   (dos saltos: el 77)\n";
    cout << "   &ppNumero      = " << &ppNumero  << "\n\n";
 
 
    // ---------- comprobacion ----------
    // Los tres punteros pesan lo mismo aunque apunten a cosas distintas.
    cout << "TAMANOS\n";
    cout << "   sizeof(char)   = " << sizeof(char)   << "\n";
    cout << "   sizeof(int)    = " << sizeof(int)    << "\n";
    cout << "   sizeof(char*)  = " << sizeof(char*)  << "\n";
    cout << "   sizeof(char**) = " << sizeof(char**) << "\n";
    cout << "   sizeof(int**)  = " << sizeof(int**)  << "\n";
 
    return 0;
}
 