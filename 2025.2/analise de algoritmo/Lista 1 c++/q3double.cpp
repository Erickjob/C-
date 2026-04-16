#include <iostream>

double area(double diametro, double pi)
{
    double raio = diametro/2.0;
    double resultado = pi * (raio * raio);
    return resultado;
}

int main()
{
    double diametro;
    std::cin >> diametro;
    double pi = 3.14159;
    /*double raio = diametro/2.0;
    double area = pi*(raio*raio);*/
    double resultado = area(diametro, pi);
    std::cout.precision(5);
    std::cout << std::fixed << resultado << std::endl;
    return 0;
}