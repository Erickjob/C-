#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
int melhor = 1e9;

vector<vector<int>> A;
vector<vector<int>> prefix;

void backtracking(int linha, int inicioAnterior, int somaAtual)
{
    if (linha == N)
    {
        melhor = min(melhor, somaAtual);
        return;
    }

    int tam = linha + 1;

    // começa na mesma coluna
    int inicio = inicioAnterior;

    if (inicio + tam <= N)
    {
        int peso = prefix[linha][inicio + tam] - prefix[linha][inicio];
        backtracking(linha + 1, inicio, somaAtual + peso);
    }

    // começa uma coluna à esquerda
    inicio = inicioAnterior - 1;

    if (inicio >= 0 && inicio + tam <= N)
    {
        int peso = prefix[linha][inicio + tam] - prefix[linha][inicio];
        backtracking(linha + 1, inicio, somaAtual + peso);
    }
}

int main()
{
    cin >> N;

    A.assign(N, vector<int>(N));
    prefix.assign(N, vector<int>(N + 1, 0));

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> A[i][j];
            prefix[i][j + 1] = prefix[i][j] + A[i][j];
        }
    }

    // primeira linha
    for (int inicio = 0; inicio < N; inicio++)
    {
        backtracking(1, inicio, A[0][inicio]);
    }

    cout << melhor << endl;

    return 0;
}