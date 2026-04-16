#include <iostream>

int quantidade_de_num_impares(int a[], unsigned int n)
{
    int resultado = 0;
    for (unsigned i = 0; i < n; i++){

        if (a[i] % 2 == 1){
            resultado++;
        }

    }
    return resultado;

}

int main(){
    unsigned int n;
    std::cin >> n;
    int a[n];
    for(unsigned int i = 0; i < n; i++){
        std::cin >> a[i];
    }
    int quantidade = quantidade_de_num_impares(a, n);
    std::cout << quantidade << std::endl;

}