#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Pessoa {
protected:
    string nome;
    string dataNascimento;

public:
    Pessoa(string nome, string dataNascimento) {
        this->nome = nome;
        this->dataNascimento = dataNascimento;
    }

    virtual void apresentarDados() {
        cout << "Nome: " << nome << endl;
        cout << "Data de nascimento: "
             << dataNascimento << endl;
    }
};

class Aluno : public Pessoa {
private:
    string matricula;
    string curso;
    vector<double> notas;

public:
    Aluno(string nome, string dataNascimento,
          string matricula, string curso,
          vector<double> notas)
        : Pessoa(nome, dataNascimento) {

        this->matricula = matricula;
        this->curso = curso;
        this->notas = notas;
    }

    double calcularMedia() {
        double soma = 0;

        for (double nota : notas) {
            soma += nota;
        }

        return soma / notas.size();
    }

    void apresentarDados() override {
        cout << "\n===== ALUNO =====\n";
        cout << "Nome: " << nome << endl;
        cout << "Nascimento: " << dataNascimento << endl;
        cout << "Matricula: " << matricula << endl;
        cout << "Curso: " << curso << endl;
        cout << "Media: " << calcularMedia() << endl;
    }
};

class Professor : public Pessoa {
private:
    string matricula;
    string disciplina;

public:
    Professor(string nome, string dataNascimento,
              string matricula, string disciplina)
        : Pessoa(nome, dataNascimento) {

        this->matricula = matricula;
        this->disciplina = disciplina;
    }

    void apresentarDados() override {
        cout << "\n===== PROFESSOR =====\n";
        cout << "Nome: " << nome << endl;
        cout << "Nascimento: " << dataNascimento << endl;
        cout << "Matricula: " << matricula << endl;
        cout << "Disciplina: " << disciplina << endl;
    }
};

int main() {

    vector<double> notas = {8.0, 7.5, 9.0, 8.5};

    Aluno aluno(
        "Joao",
        "15/04/2008",
        "2026001",
        "Informatica",
        notas
    );

    Professor professor(
        "Carlos",
        "10/08/1980",
        "P1001",
        "Programacao"
    );

    aluno.apresentarDados();
    professor.apresentarDados();

    return 0;
}