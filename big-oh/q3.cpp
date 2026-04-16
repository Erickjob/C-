#include <iostream>
#include <vector>
//isso serve para eu criar um arry sem precisar usar o delete e criar um espaço na memória
// QUESTÃO B = 9n+2
int main(){
    int n, soma;  
    std::cin >> n;                  // 1
    std::vector <int> lista (n);      // n
    

    for (int i = 0; i < n; i++){    //n-1
        std:: cin >> lista [i];     //n
    }
    soma = lista [0] + lista [1];   //2

    for (int i = 1; i < n; i++){    // 2n
        int soma_temp = lista [i-1] + lista [i]; //2n
        if (soma_temp > soma){      //n
            soma = soma_temp;       //n
        }

    }
    std::cout << soma << std::endl;
    return 0;
}

