#include <iostream>
#include <cmath>


int main(){
    int n;
    std::cin >> n;
    double t = 500 + 20* std::log(n);
    std::cout << t << std::endl;
    return 0;
}