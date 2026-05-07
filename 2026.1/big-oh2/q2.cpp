#include <iostream>

int repetido(int vetor[], int tamanho, int indice_alvo){ 
    int contador = 0;

    for (int primeiro_i = 0; primeiro_i < tamanho; primeiro_i ++){
        if (vetor[indice_alvo] == vetor[primeiro_i]){
            contador++;
        }
    }
    return contador;
}

int main(){
    unsigned int tamanho;
    std::cin >> tamanho;
    int vetor [tamanho];

    for (int indice = 0; indice < tamanho; indice++){
        std::cin >> vetor[indice];
    }
    
     for (int indice = 0; indice < tamanho; indice++){
        std::cout << "o número " << vetor [indice] << " se repete " << repetido(vetor, tamanho, indice) <<std::endl;
    }
    
    return 0;
}