#include <iostream>

int contador_soma(int vetor[], int tamanho, int soma)
{
    int contador = 0;
    for (int indice = 0; indice < tamanho - 1; indice++)
    {
        for (int indice2 = indice + 1; indice2 < tamanho; indice2++)
        {
            if (vetor[indice] + vetor[indice2] == soma)
            {
                contador++;
            }
        }
    }
    return contador;
}

int main()
{
    int tamanho;
    int soma;
    
    std::cin >> tamanho;

    std::cin >> soma;
    
    int vetor[tamanho];
    for (int indice = 0; indice < tamanho; indice++)
    {
        std::cin >> vetor[indice];
    }
    
    int resultado = contador_soma(vetor, tamanho, soma);
    std::cout << resultado << std::endl;
    return 0;
}