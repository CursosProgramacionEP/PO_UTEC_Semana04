#include <iostream>
#include "../include/metodos.h"
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.

int main() {
    // TIP Press <shortcut actionId="RenameElement"/> when your caret is at the <b>lang</b> variable name to see how CLion can help you rename it.

    int c = 5;
    int d = 10;
    std::cout << "Antes: a = " << c<< ", b = " << d << std::endl;
    swap0(c, d);
    std::cout << "Después: a = " << c << ", b = " << d << std::endl;

    int a = 5;
    int b = 10;
    std::cout << "Antes: a = " << a << ", b = " << b << std::endl;
    swap(a, b);
    std::cout << "Después: a = " << a << ", b = " << b << std::endl;

    int *pa = &a;
    int *pb = &b;
    std::cout << "Antes: *pa = " << *pa << ", *pb = " << *pb << std::endl;
    swap(pa, pb);
    std::cout << "Después: *pa = " << *pa << ", *pb = " << *pb << std::endl;

    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}