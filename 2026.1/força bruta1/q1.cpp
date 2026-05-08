#include <iostream>

int main(){
    int largura;
    int altura;
    int largura_f1;
    int altura_f1;
    int largura_f2;
    int altura_f2;
    std:: cin >> largura >> altura >> largura_f1 >> altura_f1 >> largura_f2 >> altura_f2;

    bool possivel = false;

    //testar 1 foto em pé se é maior que o álbum
    if(largura_f1 > largura and altura_f1 > altura  || largura_f2 > largura and altura_f2 > altura ){
        possivel = false;
    }
    //Testar 1 foto deitada
      if(largura_f1 > altura and altura_f1 > largura  || largura_f2 > altura and altura_f2 > largura ){
        possivel = false;
    }


    //Lado a lado em pé
    if (largura_f1 + largura_f2 < largura ){
        possivel = true;
    }

    //Empilhado em pé
    if (altura_f1 + altura_f2 < altura ){
        possivel = true;
    }

    //lado a lado deitado
     if (altura_f1 + altura_f2 < largura ){
        possivel = true;
    }

    //Empilhado deitado
    if (altura_f1 + altura_f2 < largura){
        possivel = true;
    }

    //Empilhado com foto 2 girada.
    if (altura_f1 + largura_f2 < altura){
        possivel = true;
    }

    //Lado a lado 1 em pé a outra girada
    if (largura_f1 + altura_f2 < largura){
        possivel = true;
    }

    if(possivel){
        std::cout << 'S' << std::endl;
    }else{
        std::cout << 'N' << std::endl;

    }
    return 0;
    

}