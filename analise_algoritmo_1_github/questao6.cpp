#include <chrono>
#include <iostream>
#include <fstream>

bool prime(long long n) {
    long long d = 3;
    if (n == 1){
        return false;
    }
    if (n == 2){
        return true;
    }
    if (n % 2 == 0){
        return false;
    }
    else{
        bool p = true;
              while (d <= n/2){
            if (n % d == 0){
                p = false;
            }else{
                d +=2;
            }
        }
        return p;
    }
    

}

int main() {
    std::ifstream entrada("entrada.txt");
    long long numero;
    
    while(entrada >> numero){

    // Início do cronômetro
    auto beg = std::chrono::high_resolution_clock::now();
    bool primo = prime(numero);
    // Fim do cronômetro
    auto end = std::chrono::high_resolution_clock::now();

    if (primo)
    std::cout << numero << " is prime" << std::endl;
    else
    std::cout << numero << " is not prime" << std::endl;

    auto dur = end - beg; // Duração do cronômetro
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(dur);
    std::cerr << numero << " Processing time: "
    << duration.count() << " microseconds(s)" << std::endl;
    }

 return 0;
 }