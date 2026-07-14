#include <iostream>
int soma(int tamanho,int vetor[],int soma){
    int count = 0;
    for (int indice = 0; indice < tamanho; indice++){
        for(int indicej = indice; indicej < tamanho; indicej++){
            if (soma == (vetor [indice] + vetor [indicej]))
                count++; 
        }
    }
    return count;
}

int main(){
    int tamanho;
    int valor_soma;
    std::cin >> tamanho;
    std::cin >> valor_soma;

    

    int vetor [tamanho];
    for (int indice = 0; indice < tamanho; indice++){
        std::cin >> vetor[indice];
    }

    
    std::cout << soma(tamanho, vetor, valor_soma) << std::endl;

    
}