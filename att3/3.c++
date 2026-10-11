#include <iostream>
#include <cmath>
using namespace std;

double soma(double a, double b) {
    return a + b;
}

double subtracao(double a, double b) {
    return a - b;
}

double multiplicacao(double a, double b) {
    return a * b;
}

double divisao(double a, double b) {
    return a / b;
}

double potencia(double a, double b) {
    return pow(a, b);
}

int resto(int a, int b) {
    return a % b;
}

int main() {
    int opcao;

    do {
        cout << "\n===== CALCULADORA =====\n";
        cout << "1 - Soma\n";
        cout << "2 - Subtracao\n";
        cout << "3 - Multiplicacao\n";
        cout << "4 - Divisao\n";
        cout << "5 - Potencia\n";
        cout << "6 - Resto da divisao\n";
        cout << "0 - Sair\n";
        cout << "Escolha: ";
        cin >> opcao;

        if (opcao >= 1 && opcao <= 5) {
            double a, b;

            cout << "Digite o primeiro numero: ";
            cin >> a;

            cout << "Digite o segundo numero: ";
            cin >> b;

            switch (opcao) {
                case 1:
                    cout << "Resultado: " << soma(a, b) << endl;
                    break;

                case 2:
                    cout << "Resultado: " << subtracao(a, b) << endl;
                    break;

                case 3:
                    cout << "Resultado: " << multiplicacao(a, b) << endl;
                    break;

                case 4:
                    if (b == 0) {
                        cout << "Erro: nao e possivel dividir por zero!\n";
                    } else {
                        cout << "Resultado: " << divisao(a, b) << endl;
                    }
                    break;

                case 5:
                    cout << "Resultado: " << potencia(a, b) << endl;
                    break;
            }

        } else if (opcao == 6) {
            int a, b;

            cout << "Digite o primeiro numero inteiro: ";
            cin >> a;

            cout << "Digite o segundo numero inteiro: ";
            cin >> b;

            if (b == 0) {
                cout << "Erro: nao e possivel calcular resto por zero!\n";
            } else {
                cout << "Resultado: " << resto(a, b) << endl;
            }

        } else if (opcao != 0) {
            cout << "Opcao invalida!\n";
        }

    } while (opcao != 0);

    cout << "Calculadora encerrada.\n";

    return 0;
}