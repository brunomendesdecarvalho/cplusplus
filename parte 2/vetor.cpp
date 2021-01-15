#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int vetor[100];

    for (int i = 0; i < 100; i++)
    {
        vetor[i] = i;
    }

    for (int i = 0; i < 100; i++)
    {
        cout << vetor[i] << endl;
    }
    return 0;
}
