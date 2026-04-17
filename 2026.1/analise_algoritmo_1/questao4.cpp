#include <chrono>
#include <iostream>
#include <fstream>

bool prime(long long n)
{
    int qty_divs = 0;
    for (long long d = 1; d <= n; ++d)
        if (n % d == 0)
            qty_divs = qty_divs + 1;
    return qty_divs == 2;
}

int main()
{
    std::ifstream entrada("entrada.txt"); // abre arquivo

    long long n;

    while (entrada >> n) // lê vários valores
    {
        auto beg = std::chrono::high_resolution_clock::now();

        bool p = prime(n);

        auto end = std::chrono::high_resolution_clock::now();

      

        auto dur = end - beg;
        auto duration = std::chrono::duration_cast<std::chrono::microseconds>(dur);

        std::cout << duration.count() << "\n";
    }

    return 0;
}