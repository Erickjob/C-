#include <iostream>
#include <vector>

int main(){
    int n, s;
    std::cin >> n;
    std::vector <int> lista (n);

    for (int i = 0; i < n; i++){
        std::cin >> lista[i];
    }
    std::cin >> s;
    bool encontrou = false;
    
    for (int i = 0; i < n && !encontrou; i++){
        for (int j = 1; j < i; j++){
            if (lista [i] + lista [j] == s){
                encontrou = true;
                break;
            }
        }
    }
    if (encontrou){
            std::cout << "S" << std:: endl;
    }else{
        std::cout << "N" << std:: endl;
    }

    return 0;

}