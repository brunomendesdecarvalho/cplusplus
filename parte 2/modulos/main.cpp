/* Para incluir arquivos header, declara o .h e inclui entre aspas simples. */

#include <iostream>
#include "modulo.h" 

using namespace std;

int main()
{
    int n = 6;
    double l1, l2;
    l1 = 6.0;
    l2 = 8.0;

    cout << fatorial(n) << endl;
    cout << area_quadrado(l1) << endl;
    cout << area_retangulo(l1, l2) << endl;

    return 0;
}
