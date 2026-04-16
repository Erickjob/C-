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
int main(){
   std::ifstream entrada("entrada.txt");

    long long numero;

    while (entrada >> numero) // lê vários valores
    {
    auto beg = std::chrono::high_resolution_clock::now();

    if (numero == 1)
        std::cout << "falso" << std::endl;
    
    if(numero == 2)
        std::cout << "verdadeiro" << std::endl;
    
    if (numero % 2 == 0)
        std::cout << "falso" << std::endl;
    
    int quantidade_divisores = 1;

    for (int i = 3; i < numero/2; i++ ){
        if (numero % i == 0){
            quantidade_divisores++;
        }
    auto end = std::chrono::high_resolution_clock::now();
    
    }
    if(quantidade_divisores > 1){
        std::cout << "falso, quantidade de divisores " << quantidade_divisores << " > 1" << std::endl;
    }else{

        
     std::cout << "verdadeiro " << quantidade_divisores <<  std::endl;
       // Fim do cronômetro
        
    auto dur = end - beg;
        auto duration = std::chrono::duration_cast<std::chrono::microseconds>(dur);

        std::cerr << numero << " Processing time: "
                  << duration.count() << " microseconds(s)" << std::endl;
    }
    return 0;
    
}