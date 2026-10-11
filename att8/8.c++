#include <iostream>
#include <stack>
#include <string>
using namespace std;

void visitarPagina(stack<string>& historico) {
    string pagina;

    cout << "Digite a URL da pagina: ";
    cin >> pagina;

    historico.push(pagina);

    cout << "Pagina visitada!\n";
}

void paginaAtual(const stack<string>& historico) {
    if (historico.empty()) {
        cout << "Nenhuma pagina visitada.\n";
        return;
    }

    cout << "Pagina atual: "
         << historico.top() << endl;
}

void voltarPagina(stack<string>& historico) {
    if (historico.size() <= 1) {
        cout << "Nao ha pagina anterior.\n";
        return;
    }

    historico.pop();

    cout << "Voltando para: "
         << historico.top() << endl;
}

void exibirHistorico(stack<string> historico) {
    if (historico.empty()) {
        cout << "Historico vazio.\n";
        return;
    }

    cout << "\n===== HISTORICO =====\n";

    while (!historico.empty()) {
        cout << historico.top() << endl;
        historico.pop();
    }
}

int main() {
    stack<string> historico;
    int opcao;

    do {
        cout << "\n===== HISTORICO =====\n";
        cout << "1 - Visitar pagina\n";
        cout << "2 - Ver pagina atual\n";
        cout << "3 - Voltar\n";
        cout << "4 - Exibir historico\n";
        cout << "0 - Sair\n";
        cout << "Escolha: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                visitarPagina(historico);
                break;

            case 2:
                paginaAtual(historico);
                break;

            case 3:
                voltarPagina(historico);
                break;

            case 4:
                exibirHistorico(historico);
                break;

            case 0:
                cout << "Encerrando...\n";
                break;

            default:
                cout << "Opcao invalida!\n";
        }

    } while (opcao != 0);

    return 0;
}