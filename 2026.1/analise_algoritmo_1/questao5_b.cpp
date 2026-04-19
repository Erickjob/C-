#include <iostream>
#include <fstream>
#include <chrono>

bool prime(long long n)
{
    if (n == 1)
        return false;

    if (n == 2)
        return true;

    if (n % 2 == 0)
        return false;

    int quantidade_divisores = 1;

    for (int i = 3; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            quantidade_divisores++;
        }

        return quantidade_divisores == 1;
    }
}

int main()
{
    std::ifstream entrada("entrada.txt");

    long long numero;

    while (entrada >> numero) // lê vários valores
    {
        auto beg = std::chrono::high_resolution_clock::now();
        bool p = prime(numero);
        auto end = std::chrono::high_resolution_clock::now();
        auto dur = end - beg;
        auto duration = std::chrono::duration_cast<std::chrono::microseconds>(dur);

        std::cout << duration.count() << "\n";
    }
    return 0;
}