#include <iostream>
#include <fstream>
#include <chrono>

bool prime(long long n)
{
    int qty_divs = 0;
    for (long long d = 1; d <= n; ++d)
        if (n % d == 0)
            qty_divs++;
    return qty_divs == 2;
}

int main()
{
    std::ifstream entrada("entrada.txt");

    long long numero;

    while (entrada >> numero) // lê vários valores
    {

        // Início do cronômetro
        auto beg = std::chrono::high_resolution_clock::now();
        int divisores = 0;

        for (long long i = 1; i <= numero / 2; i++)
        {
            if (numero % i == 0)

                divisores++;
        }
        
        // Fim do cronômetro
        auto end = std::chrono::high_resolution_clock::now();
       

        if (divisores == 1)
            std::cout << "verdadeiro" << std::endl;

        else
            std::cout << "falso" << std::endl;

        auto dur = end - beg;
        auto duration = std::chrono::duration_cast<std::chrono::microseconds>(dur);

        std::cerr << numero << " Processing time: "
                  << duration.count() << " microseconds(s)" << std::endl;
    }

    return 0;
}