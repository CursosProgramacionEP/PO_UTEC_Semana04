//
// Created by Carlos Palomino Vidal on 1/09/26.
//

#include "../include/metodos.h"
#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap0(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}