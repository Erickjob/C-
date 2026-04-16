#include <iostream>
#include <vector>

// questão 
// A) 9n+4
// B) O(n)
// C) algoritmo a baixo
// D) Linear

int main(){
    int n,  quant1, quant2;
    std::cin >> n;
    std::vector <int> lista (n);  // "vector" é para n precisar usar o delete para deletar o antigo array.

    for (int i = 0; i < n; i++){        //2n
        std::cin >> lista [i];          //n
    }
    quant1 = 1;                         //1
    quant2 = 1;                         //1

    for (int i = 1; i < n; i++){        //2n
        if (lista [i-1] <= lista [i]){  //n
            quant2 ++;                  //n
        }else{
            quant2 = 1;                 //1
        }
        if (quant2 > quant1){           //2n
            quant1 = quant2;
        } 
    } 

    std::cout << quant1 << std::endl;   //1
    return 0;
    

}