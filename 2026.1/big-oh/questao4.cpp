#include <iostream>
// notação big-oh O(n)
//2n-1+2n+n+1+1+n+n+n+1+2n-1+2= 10n+3

int sub_lista(int vetor[], unsigned int tamanho){
    int contador = 1; //1
    int quantidade = 0;  //1
    for (unsigned int indice = 1; indice < tamanho; indice++){ //2n-1
        if (vetor[indice-1] <= vetor[indice]){ //2n
            contador++; //n
        }
        else{
         contador = 1; //n
        }    
        if (contador > quantidade){ //n
            quantidade = contador; //n
        }
    }
    
    return quantidade;  //1
}

int main(){
    unsigned int tamanho;
    std::cin >> tamanho;
    int vetor[tamanho]; 

    for (unsigned int indice = 0; indice < tamanho; indice++){ 
        std::cin >> vetor[indice]; // 2n-1
    }

    int lista_contigua = sub_lista(vetor, tamanho); //1

    std::cout << lista_contigua << std::endl; 

    return 0; //1
}