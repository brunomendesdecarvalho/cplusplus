#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char const *argv[])
{
    // int array[] = {1, 2, 3, 4, 5};
    // int *parray = &array[0]; // ponteiro para o vetor, iniciando no elemento 0
    // // int **pparray = &parray; // ponteiro para o ponteiro

    // cout << *parray << endl;
    // cout << *(parray + 1) << endl;

    char nome[100];
    char *p, *pini;
    int tam;
    cout << "Digite um nome: " << endl;
    cin >> nome;
    
    tam = strlen(nome);
    p = &nome[tam-1];
    pini = &nome[0];

    while (true) {
        cout << *p;
        if (p == pini)
            break;
        *(p--);
    }

    return 0;
}
