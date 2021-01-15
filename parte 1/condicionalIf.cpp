#include <iostream>

using namespace std;

int main()
{
    int num = 20;

    if (num > 10)
    {
        if (num < 20) 
        {
            cout << "O número " << num << " é maior que 10 e menor do que 20." << endl;
        }
        else 
        {
            cout << "O número " << num << " é maior que 10 e maior ou igual a 20." << endl;
        }
    }
    else 
    {
        cout << "O número " << num << " é menor do que 10." << endl;
    }

    return 0;
}
