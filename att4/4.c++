#include <iostream>
using namespace std;

long long fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }

    return n * fatorial(n - 1);
}

int main() {
    int numero;

    cout << "Digite um numero inteiro nao negativo: ";
    cin >> numero;

    if (numero < 0) {
        cout << "Numero invalido!" << endl;
    } else {
        cout << numero << "! = " << fatorial(numero) << endl;
    }

    return 0;
}