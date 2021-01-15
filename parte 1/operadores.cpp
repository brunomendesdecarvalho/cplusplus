#include <iostream>

using namespace std;

int main()
{
    int n1, n2, resultado, resultado2, resultado3, resultado5;
    float resultado4;
    
    n1 = 10;
    n2 = 20;

    resultado = n1 + n2;
    resultado2 = n1 - n2;
    resultado3 = n1 * n2;
    resultado4 = (float) n1 / n2;
    resultado5 = n1 % n2;

    cout << resultado << endl;
    cout << resultado2 << endl;
    cout << resultado3 << endl;
    cout << resultado4 << endl;
    cout << resultado5 << endl;

    return 0;
}
