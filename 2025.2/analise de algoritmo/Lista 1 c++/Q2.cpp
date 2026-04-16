#include <iostream>

int perimetro(int altura, int comprimento){
    int resultado = altura *2 + comprimento*2;
    return resultado;
}

int main(){
    int altura, comprimento;
    std::cin >> altura >> comprimento;
    int resultado = perimetro(altura, comprimento);
    std::cout << resultado << std::endl;
    return 0;
}