// main.cpp

#include <iostream>
#include "serie.h"
using namespace std;

int main() {
    int n;

    cout << "Cuantos terminos de la serie? ";
    cin >> n;

    cout << "Con " << n << " terminos, pi = " << aproximarPi(n) << "\n";

    return 0;
}