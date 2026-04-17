#include <iostream>
#include <fstream>
#include <chrono>

bool prime(long long n)
{
   if (n == 1)
        std::cout << "falso" << std::endl;
    
    if(n == 2)
        std::cout << "verdadeiro" << std::endl;
    
    if (n % 2 == 0)
        std::cout << "falso" << std::endl;
    
    int quantidade_divisores = 1;

    for (int i = 3; i < n/2; i++ ){
        if (n % i == 0){
            quantidade_divisores++;
        }
        return quantidade_divisores == 1;
}
int main(){
   std::ifstream entrada("entrada.txt");

    long long numero;

    while (entrada >> numero) // lê vários valores
    {
    auto beg = std::chrono::high_resolution_clock::now();

    
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