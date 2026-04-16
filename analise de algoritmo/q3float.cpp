#include <iostream>

float area(float diametro, float pi)
{
    float raio = diametro/2.0;
    float resultado = pi * (raio * raio);
    return resultado;
}

int main()
{
    float diametro;
    std::cin >> diametro;
    float pi = 3.14159;
    float resultado = area(diametro, pi);
    std::cout.precision(5);
    std::cout << std::fixed << resultado << std::endl;
    return 0;
}