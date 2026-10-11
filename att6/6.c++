#include <iostream>
#include <vector>
using namespace std;

int somaRecursiva(const vector<int>& numeros, int indice) {
    if (indice == numeros.size()) {
        return 0;
    }

    return numeros[indice] +
           somaRecursiva(numeros, indice + 1);
}

int main() {
    int quantidade;

    cout << "Quantos numeros deseja inserir? ";
    cin >> quantidade;

    vector<int> numeros(quantidade);

    for (int i = 0; i < quantidade; i++) {
        cout << "Digite o numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    int resultado = somaRecursiva(numeros, 0);

    cout << "\nSoma = " << resultado << endl;

    return 0;
}