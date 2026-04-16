# include <iostream>
# include <iomanip>

double area(double r){
    double pi = 3.14159;
    double a = pi*(r*r);
    return a;
}

int main(){
    double r;
    std::cin >> r;
    double a = area(r);
    std::cout << std::fixed << std::setprecision(5) << a << std::endl;
    return 0;

}