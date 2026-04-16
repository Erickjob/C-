#include <iostream>

int menor_array(int a[], int n)
{

    int resultado = a[0];
    int indice = 0;

    for (unsigned int i = 1; i < n; i++)
    {

        if (a[i] < resultado)
        {
            resultado = a[i];
            indice = i;
        }
    }
    return indice;
}

int main()
{
    unsigned int n;
    std::cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    int menor = menor_array(a, n);

    std::cout << menor << std::endl;

    return 0;
}