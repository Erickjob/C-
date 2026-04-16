#include <iostream>
#include <cmath>


int main(){
    int n;
    std::cin >> n;
    double t = pow(2,n)/(n*n) - n + 10;
    std::cout << t << std::endl;
    return 0;
}