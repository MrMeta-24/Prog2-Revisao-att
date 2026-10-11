#include <iostream>
#include <queue>
#include <string>
using namespace std;

struct Pessoa {
    int senha;
    string nome;
    string horario;
};

void adicionarPessoa(queue<Pessoa>& fila, int& proximaSenha) {
    Pessoa pessoa;

    pessoa.senha = proximaSenha++;

    cout << "Digite o nome: ";
    getline(cin >> ws, pessoa.nome);

    cout << "Digite o horario de entrada: ";
    cin >> pessoa.horario;

    fila.push(pessoa);

    cout << "\nPessoa adicionada!\n";
    cout << "Senha: " << pessoa.senha << endl;
}

void chamarProxima(queue<Pessoa>& fila) {
    if (fila.empty()) {
        cout << "Nao ha pessoas aguardando.\n";
        return;
    }

    Pessoa pessoa = fila.front();

    cout << "\nChamando:\n";
    cout << "Senha: " << pessoa.senha << endl;
    cout << "Nome: " << pessoa.nome << endl;
    cout << "Horario: " << pessoa.horario << endl;

    fila.pop();
}

void consultarProxima(const queue<Pessoa>& fila) {
    if (fila.empty()) {
        cout << "Nao ha pessoas aguardando.\n";
        return;
    }

    Pessoa pessoa = fila.front();

    cout << "\nProxima pessoa:\n";
    cout << "Senha: " << pessoa.senha << endl;
    cout << "Nome: " << pessoa.nome << endl;
    cout << "Horario: " << pessoa.horario << endl;
}

void exibirFila(queue<Pessoa> fila) {
    if (fila.empty()) {
        cout << "Fila vazia.\n";
        return;
    }

    cout << "\n===== FILA =====\n";

    while (!fila.empty()) {
        Pessoa pessoa = fila.front();

        cout << "Senha: " << pessoa.senha
             << " | Nome: " << pessoa.nome
             << " | Horario: " << pessoa.horario << endl;

        fila.pop();
    }
}

int main() {
    queue<Pessoa> fila;

    int proximaSenha = 1;
    int opcao;

    do {
        cout << "\n===== SISTEMA DE ATENDIMENTO =====\n";
        cout << "1 - Adicionar pessoa\n";
        cout << "2 - Chamar proxima pessoa\n";
        cout << "3 - Consultar proxima pessoa\n";
        cout << "4 - Exibir fila\n";
        cout << "5 - Quantidade de pessoas\n";
        cout << "0 - Sair\n";
        cout << "Escolha: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                adicionarPessoa(fila, proximaSenha);
                break;

            case 2:
                chamarProxima(fila);
                break;

            case 3:
                consultarProxima(fila);
                break;

            case 4:
                exibirFila(fila);
                break;

            case 5:
                cout << "Pessoas aguardando: "
                     << fila.size() << endl;
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