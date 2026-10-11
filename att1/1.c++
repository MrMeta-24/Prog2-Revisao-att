#include <iostream>
#include <vector>
using namespace std;

int maiorValor(const vector<int>& numeros) {
    int maior = numeros[0];

    for (int numero : numeros) {
        if (numero > maior) {
            maior = numero;
        }
    }

    return maior;
}

int menorValor(const vector<int>& numeros) {
    int menor = numeros[0];

    for (int numero : numeros) {
        if (numero < menor) {
            menor = numero;
        }
    }

    return menor;
}

double calcularMedia(const vector<int>& numeros) {
    int soma = 0;

    for (int numero : numeros) {
        soma += numero;
    }

    return (double)soma / numeros.size();
}

int contarPares(const vector<int>& numeros) {
    int quantidade = 0;

    for (int numero : numeros) {
        if (numero % 2 == 0) {
            quantidade++;
        }
    }

    return quantidade;
}

int contarImpares(const vector<int>& numeros) {
    int quantidade = 0;

    for (int numero : numeros) {
        if (numero % 2 != 0) {
            quantidade++;
        }
    }

    return quantidade;
}

int main() {
    int quantidade;

    cout << "Quantos numeros deseja inserir? ";
    cin >> quantidade;

    vector<int> numeros(quantidade);

    for (int i = 0; i < quantidade; i++) {
        cout << "Digite o " << i + 1 << " numero: ";
        cin >> numeros[i];
    }

    cout << "\nMaior valor: " << maiorValor(numeros) << endl;
    cout << "Menor valor: " << menorValor(numeros) << endl;
    cout << "Media: " << calcularMedia(numeros) << endl;
    cout << "Quantidade de pares: " << contarPares(numeros) << endl;
    cout << "Quantidade de impares: " << contarImpares(numeros) << endl;

    return 0;
}