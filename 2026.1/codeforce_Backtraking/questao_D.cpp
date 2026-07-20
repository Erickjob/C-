#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>

using namespace std;

int n, capacidade;
double melhor = 0.0;

vector<int> peso;
vector<double> valor;

void mochila(int indice, int pesoAtual, double valorAtual) {

    if (pesoAtual > capacidade)
        return;

    if (indice == n) {
        melhor = max(melhor, valorAtual);
        return;
    }

    mochila(indice + 1, pesoAtual, valorAtual);

    mochila(indice + 1,
            pesoAtual + peso[indice],
            valorAtual + valor[indice]);
}

int main() {

    cin >> n >> capacidade;

    peso.resize(n);
    valor.resize(n);

    for (int i = 0; i < n; i++) {
        cin >> peso[i] >> valor[i];
    }

    mochila(0, 0, 0.0);

    cout << fixed << setprecision(2) << melhor << endl;

    return 0;
}