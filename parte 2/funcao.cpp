# include <iostream>

using namespace std;


void mensagem (int n)
{
    cout << "O número digitado foi: " << n << endl;
}


void mensagem ()
{
    cout << "Não foi digitado número algum." << endl;
}


int fatorial(int numero)
{
    int numFat = 1;
    for (numero; numero > 0; numero--) {
        numFat *= numero;
    }
}


int main()
{
    int num = 6;
    cout << fatorial(num) << endl;
    mensagem(num);
    mensagem();
    return 0;
}
