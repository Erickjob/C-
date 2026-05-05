#include <iostream>

int repetido(int vetor[], int tamanho){ 
    int contador[tamanho] = 0;
    for (int primeiro_i = 0; primeiro_i < tamanho; primeiro_i ++){
        for ( int segundo_i = 0; segundo_i < tamanho; segundo_i ++){
            if (vetor[primeiro_i] == vetor[segundo_i]){
                int contador[primeiro_i]++;
            }
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
        std::cout << "o número" << vetor [indice] << "se repete" << repetido(vetor, tamanho) <<std::endl;
    }
    
    return 0;
}