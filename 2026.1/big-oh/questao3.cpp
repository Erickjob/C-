#include <iostream>

// int maior_soma(int a[], int n)
// int resposta = a{[0] + a[1]
// for (int i=1; i <n-1; i++;
// if (a[i]+a[i+1] > resposta){
//    resposta = a[i]+a[i+1]

int maior_soma(int vetor[], unsigned int tamanho){
    int resultado = 0;
    int soma = 0;
    for (unsigned int indice = 1; indice < tamanho; indice++){
        resultado = vetor[indice - 1] + vetor [indice];
        if (resultado > soma)
        soma = resultado;
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

    int maior = maior_soma(vetor, tamanho);

    std::cout << maior << std::endl;

    return 0;
}
