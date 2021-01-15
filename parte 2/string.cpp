#include <iostream>
#include <string.h>

using namespace std;


int main(int argc, char const *argv[])
{
    char str1[100], str2[100];
    cout << "Digite a string 1: ";
    cin >> str1;
    cout << "Digite a string 2: ";
    cin >> str2;

    if (strstr(str1, str2))
        cout << "é substring." << endl;
    else
        cout << "não é substring." << endl;

    return 0;
}
