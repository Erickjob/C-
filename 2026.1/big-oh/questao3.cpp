#include <iostream>

// int maior_soma(int a[], int n)
// int resposta = a[0] + a[1];
// for (int i=1; i <n-1; i++;
// if (a[i]+a[i+1] > resposta){
//    resposta = a[i]+a[i+1]


int maior_soma(int vetor[], unsigned int tamanho){
    int resultado = 0; //1
    int soma = 0; //1
    for (unsigned int indice = 1; indice < tamanho; indice++){  // 2n-1
        resultado = vetor[indice - 1] + vetor [indice]; //3n
        if (resultado > soma) //2n
        soma = resultado; // n
    }
    return soma; //1
}

int main(){
    unsigned int tamanho;
    std::cin >> tamanho; // 1
    int vetor[tamanho]; 

    for (unsigned int indice = 0; indice < tamanho; indice++){ //  2n-1
        std::cin >> vetor[indice];  // n
    }

    int maior = maior_soma(vetor, tamanho); //2

    std::cout << maior << std::endl; // 1

    return 0;
}
