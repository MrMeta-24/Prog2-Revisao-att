#include <iostream>
#include <string>
using namespace std;

class Produto {
private:
    int codigo;
    string nome;
    double preco;
    int quantidadeEstoque;

public:
    Produto(int codigo, string nome, double preco, int quantidadeEstoque) {
        this->codigo = codigo;
        this->nome = nome;
        this->preco = preco;
        this->quantidadeEstoque = quantidadeEstoque;
    }

    void adicionarEstoque(int quantidade) {
        if (quantidade > 0) {
            quantidadeEstoque += quantidade;
            cout << "Estoque atualizado!\n";
        } else {
            cout << "Quantidade invalida!\n";
        }
    }

    void retirarEstoque(int quantidade) {
        if (quantidade <= 0) {
            cout << "Quantidade invalida!\n";
        } else if (quantidade > quantidadeEstoque) {
            cout << "Nao ha estoque suficiente!\n";
        } else {
            quantidadeEstoque -= quantidade;
            cout << "Produto retirado do estoque!\n";
        }
    }

    void alterarPreco(double novoPreco) {
        if (novoPreco >= 0) {
            preco = novoPreco;
            cout << "Preco atualizado!\n";
        } else {
            cout << "Preco invalido!\n";
        }
    }

    double valorTotalEstoque() {
        return preco * quantidadeEstoque;
    }

    void mostrarDados() {
        cout << "\nCodigo: " << codigo << endl;
        cout << "Nome: " << nome << endl;
        cout << "Preco: R$ " << preco << endl;
        cout << "Quantidade: " << quantidadeEstoque << endl;
        cout << "Valor total em estoque: R$ "
             << valorTotalEstoque() << endl;
    }
};

int main() {

    Produto produto1(1, "Notebook", 3500.00, 5);
    Produto produto2(2, "Mouse", 80.00, 20);
    Produto produto3(3, "Teclado", 150.00, 10);

    cout << "===== PRODUTOS INICIAIS =====";

    produto1.mostrarDados();
    produto2.mostrarDados();
    produto3.mostrarDados();

    cout << "\n===== TESTANDO OPERACOES =====\n";

    produto1.adicionarEstoque(3);
    produto2.retirarEstoque(5);
    produto3.alterarPreco(180.00);

    cout << "\n===== PRODUTOS ATUALIZADOS =====";

    produto1.mostrarDados();
    produto2.mostrarDados();
    produto3.mostrarDados();

    return 0;
}