#include <iostream>

using namespace std;


void foo(int* n)
{
    *n = 20;
}


int main(int argc, char const *argv[])
{
    int *pvar;
    int var = 10;

    int *vet = new int[10];

    *(vet + 0) = 10;
    *(vet + 1) = 20;
    *(vet + 2) = 30;

    foo(pvar); 
    foo(&var); // endereço (&) da variável var

    cout << pvar << endl; // endereço do ponteiro
    cout << *pvar << endl; // valor armazenado pelo ponteiro
    cout << var << endl; // valor armazenado pelo ponteiro

    cout << *(vet + 0) << endl;
    cout << *(vet + 1) << endl;
    cout << *(vet + 2) << endl;

    free(vet);
    pvar = NULL;

    return 0;
}
