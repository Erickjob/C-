#include <iostream>
int indice_maior_array(int a[], unsigned int n)
{
    int resultado = a[0];
    int indice = 0;
    for (unsigned int i = 1; i < n; ++i)
    {
        if (a[i] > resultado)
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
    for (unsigned int i = 0; i < n; ++i)
    {
        std::cin >> a[i];
    }
    int indice = indice_maior_array(a, n);
    std::cout << indice << std::endl;
    return 0;
}