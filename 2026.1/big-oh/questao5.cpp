#include <iostream>


int soma(int vetor[], unsigned int tamanho, int valor){
    int soma = 0;
    for (unsigned int indice = 0; indice < tamanho; indice++){ 
        for (unsigned int sub_indice = 1; sub_indice < tamanho; sub_indice++){ 
            soma = vetor[indice] + vetor[sub_indice];
            if(soma == valor)
                return soma;
            else
                 return 0;
        }
    }
    return soma;
  
}

int main(){
    unsigned int tamanho;
    std::cin >> tamanho;
    int vetor[tamanho]; 

    for (unsigned int indice = 0; indice < tamanho; indice++){ 
        std::cin >> vetor[indice]; 
    }

    int valor_da_soma;
    std::cin>> valor_da_soma;

    int verificar_soma = soma(vetor, tamanho, valor_da_soma); 

    if (verificar_soma == valor_da_soma)
        std::cout << "S" << std::endl;
    else 
        std::cout << "N" << std::endl; 

    return 0; 
}