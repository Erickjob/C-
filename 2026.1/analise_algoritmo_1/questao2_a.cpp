#include <iostream>
#include <cmath>


int main(){
    long n;
    std::cin >> n;
    long t = pow(2,n)/(n*n) - n + 10;
    std::cout << t << std::endl;
    return 0;
}