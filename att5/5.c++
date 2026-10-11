#include <iostream>
using namespace std;

long long fibonacciRecursivo(int n) {
    if (n <= 1) {
        return n;
    }

    return fibonacciRecursivo(n - 1) +
           fibonacciRecursivo(n - 2);
}

long long fibonacciIterativo(int n) {
    if (n <= 1) {
        return n;
    }

    long long anterior = 0;
    long long atual = 1;

    for (int i = 2; i <= n; i++) {
        long long proximo = anterior + atual;

        anterior = atual;
        atual = proximo;
    }

    return atual;
}

int main() {
    int n;

    cout << "Digite a posicao de Fibonacci: ";
    cin >> n;

    if (n < 0) {
        cout << "Numero invalido!" << endl;
        return 0;
    }

    cout << "\nRecursivo: "
         << fibonacciRecursivo(n) << endl;

    cout << "Iterativo: "
         << fibonacciIterativo(n) << endl;

    return 0;
}