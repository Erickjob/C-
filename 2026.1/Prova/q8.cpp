#include <iostream>

int main()
{
    int tamanho;
    std::cin >> tamanho;
    int vetor[tamanho];
    for (int indice = 0; indice < tamanho; indice++)
    {
        std::cin >> vetor[indice];
    }
    int dif_temp = 0;
    int maior_dif = 0;

    for (int indice = 0; indice < tamanho; indice++){
        if (vetor[indice] < 0){
                indice++;
            }
        for(int indice2 = indice + 1; indice2 < tamanho; indice2++){
            if(indice2 < 0){
                indice2++;
            }
            dif_temp = vetor[indice] - vetor[indice2];
               
            if (maior_dif < dif_temp){
                maior_dif = dif_temp;
            }
        std::cout <<"a maior diferença é "<< maior_dif << " entre os elementos"     
        }
    }


    for (int indice = 0; indice < tamanho; indice++)
    {
        std::cout << vetor[indice] << "";
    }

    std::cout << std::endl;
    return 0;
}