#include <iostream>
#include <fstream>
#include <chrono>

bool prime(long long n)
{
    int divisores = 0;
    for (long long i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
            divisores++;
    }
    return divisores == 1;

}

int main()
{
    std::ifstream entrada("entrada.txt");

    long long numero;

    while (entrada >> numero) // lê vários valores
    {

        // Início do cronômetro
        auto beg = std::chrono::high_resolution_clock::now();
        bool numero_primo = prime(numero);

        // Fim do cronômetro
        auto end = std::chrono::high_resolution_clock::now();

        auto dur = end - beg;
        auto duration = std::chrono::duration_cast<std::chrono::microseconds>(dur);

        std::cout << duration.count() << "\n";
    }

    return 0;
}