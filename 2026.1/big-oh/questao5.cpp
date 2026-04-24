#include <iostream>

bool soma(int vetor[], unsigned int tamanho, int valor){
    for (unsigned int indice = 0; indice < tamanho; indice++){                                  // 3n-2
        for (unsigned int sub_indice = indice + 1; sub_indice < tamanho; sub_indice++){         // 3n*(3n-1)
            if(vetor[indice] + vetor[sub_indice] == valor){                                     // 3n*(3n-2) + 3
                return true;                                                                    //1
            }
        }
    }
    return false;                                                                                  //1
  
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

    bool verificar_soma = soma(vetor, tamanho, valor_da_soma); 

    if (verificar_soma == true)
        std::cout << "S" << std::endl;
    else 
        std::cout << "N" << std::endl; 

    return 0; 
}