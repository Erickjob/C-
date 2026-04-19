#include <iostream>

int sub_lista(int vetor[], unsigned int tamanho){
    int contador = 0;
    for (unsigned int indice = 1; indice < tamanho; indice++){
      if (vetor[indice-1] <= vetor[indice])
         contador++;    
    }
    
    return ;
}

int main(){
    unsigned int tamanho;
    std::cin >> tamanho;
    int vetor[tamanho]; 

    for (unsigned int indice = 0; indice < tamanho; indice++){ 
        std::cin >> vetor[indice]; 
    }

    int lista_contigua = sub_lista(vetor, tamanho); 

    std::cout << lista_contigua << std::endl; 

    return 0;
}