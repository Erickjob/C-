#include <iostream>
void conta_pares(int a[], int n, int pares[], int &qtd_pares)
{
    for (int i = 0; i < n; ++i)
    {
        if (a[i] % 2 == 0)
        {
            pares[qtd_pares] = a[i];   //aqui quer dizer q "pares no índice 0", pois nesse momento "qtd_pares=0" que foi anunciado logo no início da função main.
            qtd_pares = qtd_pares + 1;
            //seria algo como pares[0] = a[i]
            //qtd_pares = 0+1 (apenas nesse caso) depois daí vai ser (n+1) + 1
        }
    }
}
int main()
{
    int n, qtd_pares = 0;
    std::cin >> n;
    int a[n], pares[n]; // A quantidade máxima de pares é n
    for (int i = 0; i < n; ++i)
    {
        std::cin >> a[i];
    }
    conta_pares(a, n, pares, qtd_pares);
    std::cout << qtd_pares << std::endl;
    if (qtd_pares > 0)
    {
        std::cout << a[0];
        for (int i = 1; i < qtd_pares; ++i)
        {
            std::cout << " " << a[i];
        }
    }
    return 0;
}