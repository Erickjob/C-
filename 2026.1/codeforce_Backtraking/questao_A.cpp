#include <iostream>
int soma_sublista(int* vetor,int tamanho, int soma){
    if (soma == 0) return 1;
    if (soma < 0 || tamanho == 0) return 0;
    int r1 = soma_sublista(vetor, tamanho-1, soma-vetor[tamanho-1]);
    int r2 = soma_sublista(vetor, tamanho-1,soma);
    return r1+r2;

}

int main(){
    int *vetor, tamanho, soma;
    std::cin >> tamanho >> soma;
    vetor = new int [tamanho];
    for (int indice = 0; indice < tamanho; indice++){
        std::cin >> vetor[indice];
    }
    if (soma_sublista(vetor, tamanho, soma))
        std::cout <<soma_sublista << std::endl;
    else
        std::cout << 0 <<std::endl;

    delete vetor;
    return 0;   
}