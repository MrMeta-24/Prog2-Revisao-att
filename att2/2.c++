#include <iostream>
#include <string>
using namespace std;

bool validarNome(string nome) {
    return !nome.empty();
}

bool validarIdade(int idade) {
    return idade >= 14 && idade <= 120;
}

bool validarEmail(string email) {
    return email.find('@') != string::npos &&
           email.find('.') != string::npos;
}

bool validarSenha(string senha) {
    return senha.length() >= 8;
}

int main() {
    string nome;
    int idade;
    string email;
    string senha;

    do {
        cout << "Digite seu nome: ";
        getline(cin >> ws, nome);

        if (!validarNome(nome)) {
            cout << "Nome invalido!\n";
        }

    } while (!validarNome(nome));

    do {
        cout << "Digite sua idade: ";
        cin >> idade;

        if (!validarIdade(idade)) {
            cout << "Idade invalida! Deve estar entre 14 e 120.\n";
        }

    } while (!validarIdade(idade));

    do {
        cout << "Digite seu e-mail: ";
        cin >> email;

        if (!validarEmail(email)) {
            cout << "E-mail invalido!\n";
        }

    } while (!validarEmail(email));

    do {
        cout << "Digite sua senha: ";
        cin >> senha;

        if (!validarSenha(senha)) {
            cout << "A senha deve ter pelo menos 8 caracteres!\n";
        }

    } while (!validarSenha(senha));

    cout << "\nCadastro realizado com sucesso!" << endl;

    return 0;
}