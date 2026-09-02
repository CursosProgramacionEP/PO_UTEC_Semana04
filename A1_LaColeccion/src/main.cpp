#include <iostream>
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.

int main() {

    int a;
    int* pa=&a;

    cout<<"INT"<<endl;
    cout<<"Tamaño de bytes de int: "<<sizeof(a)<<endl;
    cout<<"Tamaño del bytes del puntero : "<<sizeof(pa)<<endl;
    cout<<"Dirección de memoria de a: "<<&a<<endl;
    cout<<"Valor de la variable a: "<<a<<endl; //lo que sea que ocupo espacio antes
    cout<<"Valor del puntero a int: "<<*pa<<endl;
    cout<<"FIN"<<endl<<endl;

    string b;
    string* pb=&b;

    cout<<"STRING"<<endl;
    cout<<"Tamaño de bytes de string: "<<sizeof(b)<<endl;
    cout<<"Tamaño del bytes del puntero : "<<sizeof(pb)<<endl;
    cout<<"Dirección de memoria de b: "<<&b<<endl;
    cout<<"Valor de la variable b: "<<b<<endl;
    cout<<"Valor del puntero a string: "<<*pb<<endl;
    cout<<"FIN"<<endl<<endl;

    //completar con los siguientes datos
    // float, double, char, bool, long, short, long long



    return 0;
     // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}