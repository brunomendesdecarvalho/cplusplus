/* Módulo com várias funções */


int fatorial(int numero)
{
    int numFat = 1;
    for (int i = numero; i > 0; i--) {
        numFat *= i;
    }

    return numFat;
}

double area_quadrado(double l)
{
    return l * l;
}

double area_retangulo(double l1, double l2)
{
    return l1 * l2;
}