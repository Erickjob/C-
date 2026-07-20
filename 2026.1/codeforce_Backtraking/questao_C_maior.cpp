#include <iostream>
#include <algorithm>

const int infinito = -1e9;

int soma_sublista(int* vetor,int tamanho, int soma, int count){
    if (soma == 0) return count;
    if (soma < 0 || tamanho == 0) return infinito;
    int r1 = soma_sublista(vetor, tamanho-1, soma-vetor[tamanho-1], count+1);
    int r2 = soma_sublista(vetor, tamanho-1, soma, count);

    return std::max(r1,r2);

}

int main(){
    int *vetor, tamanho, soma;
    std::cin >> tamanho >> soma;
    vetor = new int [tamanho];
    for (int indice = 0; indice < tamanho; indice++){
        std::cin >> vetor[indice];
    }
    int maior_tamanho = soma_sublista(vetor, tamanho, soma, 0);

    if (maior_tamanho > infinito)
        std::cout << maior_tamanho << std::endl;
    else
        std::cout << 0 <<std::endl;

    delete vetor;
    return 0;   
}