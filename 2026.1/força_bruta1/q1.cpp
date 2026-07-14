#include <iostream>

//***** notação big-oh é O(n) *****

int main(){
    int largura;
    int altura;
    int largura_f1;
    int altura_f1;
    int largura_f2;
    int altura_f2;
    std:: cin >> largura >> altura >> largura_f1 >> altura_f1 >> largura_f2 >> altura_f2;

    bool possivel = false;

    //Lado a lado em pé
    if (largura_f1 + largura_f2 < largura and altura_f1 < altura and altura_f2 < altura){
        possivel = true;
    }

    //Empilhado em pé
    if (altura_f1 + altura_f2 < altura and largura_f1 < largura and largura_f2 < largura){
        possivel = true;
    }

    //lado a lado deitado
     if (altura_f1 + altura_f2 < largura and largura_f1 < altura and largura_f2 < altura){
        possivel = true;
    }

    //Empilhado deitado   ****quarto if*****
    if (largura_f1 + largura_f2 < altura and altura_f1 < largura and altura_f2 < largura ){
        possivel = true;
    }

    //Empilhado com foto 2 girada.
    if (altura_f1 + largura_f2 < altura and largura_f1 < largura and altura_f2 < largura){
        possivel = true;
    }

    //Lado a lado foto 1 em pé a e foto 2 girada
    if (largura_f1 + altura_f2 < largura and altura_f1 < altura and largura_f2 < altura){
        possivel = true;
    }

    //empilhado com foto 1 girada e foto 2 em pé
    if (largura_f1 + altura_f2 < altura and altura_f1 < largura and largura_f2 < largura){
        possivel = true;
    }

    //lado a lado com foto 1 girada e foto 2 em pé
    if (altura_f1 + largura_f2 < largura and largura_f1 < altura and altura_f2 < altura){
        possivel = true;
    }
    if(possivel){
        std::cout << 'S' << std::endl;
    }else{
        std::cout << 'N' << std::endl;

    }
    return 0;
    

}