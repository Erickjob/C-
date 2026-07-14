#include <iostream>


int main(){
    int tamanho;
    int buscar_valor;
    int *data;
    std::cin >> buscar_valor;
    std::cin >> tamanho;
    int vetor [tamanho];
    for (int indice = 0; indice < tamanho; indice++){
        std::cin >> vetor[indice];
    }
    data = vetor;
    while (*data != buscar_valor){
        data++;
        if (data == vetor + tamanho){
            std::cout << "-1" << std::endl;
            return 0;
        }
    }
        
    return 0;
    


}