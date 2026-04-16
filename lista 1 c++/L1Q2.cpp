#include <iostream>
int perimetro(int a, int b){
    int p = 2*(a +b);
    return p;
}

int main(){
    int l1, l2;
    std::cin >> l1 >> l2;
    int p = perimetro(l1,l2);
    std::cout << p << std::endl;
    return 0;
}