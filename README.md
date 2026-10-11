
## Orientações Gerais

* **Linguagem de Programação:** A escolha do aluno.
* **Frameworks e Bibliotecas:** Permitidos, desde que o aluno saiba explicar seu funcionamento.
* **Banco de Dados:** MySQL, PostgreSQL, SQLite ou outro SGBD relacional.
* **Desenvolvimento Web:** Utilizar HTML e CSS e, quando necessário, uma linguagem no cliente ou servidor.
* **Boas Práticas:** Organize o código utilizando nomes significativos, indentação adequada e separação de responsabilidades.
* **Validação:** Sempre que possível, valide os dados fornecidos pelo usuário.

---

## Sumário dos Exercícios

1. [Análise de Números](https://www.google.com/search?q=%231-fun%C3%A7%C3%A3o-para-an%C3%A1lise-de-n%C3%BAmeros)
2. [Validação de Usuário](https://www.google.com/search?q=%232-valida%C3%A7%C3%A3o-utilizando-fun%C3%A7%C3%B5es)
3. [Calculadora Modular](https://www.google.com/search?q=%233-calculadora-modular)
4. [Fatorial Recursivo](https://www.google.com/search?q=%234-fatorial-recursivo)
5. [Sequência de Fibonacci](https://www.google.com/search?q=%235-sequ%C3%AAncia-de-fibonacci)
6. [Soma Recursiva de Lista](https://www.google.com/search?q=%236-soma-recursiva-de-uma-lista)
7. [Gerenciador de Tarefas](https://www.google.com/search?q=%237-gerenciador-de-lista-de-tarefas)
8. [Histórico de Navegação (Pilha)](https://www.google.com/search?q=%238-hist%C3%B3rico-utilizando-pilha)
9. [Sistema de Atendimento (Fila)](https://www.google.com/search?q=%239-sistema-de-atendimento-utilizando-fila)
10. [Comparativo de Estruturas de Dados](https://www.google.com/search?q=%2310-comparando-lista-pilha-e-fila)
11. [Orientação a Objetos Básica (Produto)](https://www.google.com/search?q=%2311-orientada-a-objetos)
12. [Sistema Escolar com Herança](https://www.google.com/search?q=%2312-sistema-orientado-a-objetos)
13. [Modelagem de Banco de Dados](https://www.google.com/search?q=%2313-modelagem-de-banco-de-dados)
14. [Manipulação SQL: INSERT e SELECT](https://www.google.com/search?q=%2314-insert-e-select)
15. [Manipulação SQL: UPDATE e DELETE](https://www.google.com/search?q=%2315-update-e-delete)
16. [Consultas Relacionais com JOIN](https://www.google.com/search?q=%2316-consultas-relacionando-tabelas)
17. [Página HTML Semântica](https://www.google.com/search?q=%2317-p%C3%A1gina-html-de-apresenta%C3%A7%C3%A3o)
18. [Estilização CSS](https://www.google.com/search?q=%2318-estiliza%C3%A7%C3%A3o-com-css)
19. [Requisição HTTP e Consumo de API](https://www.google.com/search?q=%2319-requisi%C3%A7%C3%A3o-http-e-api)
20. [Projeto Final: Sistema Web Cliente-Servidor](https://www.google.com/search?q=%2320-finalizando---sistema-web-cliente-servidor)
21. [Revisão Conceitual](https://www.google.com/search?q=%23%F0%9F%92%A1-quest%C3%B5es-para-revis%C3%A3o-conceitual)

---

## Descrição dos Exercícios

### 1. Função para Análise de Números

Crie um programa que receba uma lista de números inteiros e utilize funções separadas para determinar:

* **a)** O maior valor
* **b)** O menor valor
* **c)** A média dos valores
* **d)** A quantidade de números pares
* **e)** A quantidade de números ímpares

> *Cada operação deve ser implementada em uma função diferente.*

---

### 2. Validação Utilizando Funções

Desenvolva um programa de cadastro de usuário que solicite: **nome**, **idade**, **e-mail** e **senha**. Implemente funções independentes para validar cada informação.

**Regras mínimas:**

* **Nome:** Não pode estar vazio.
* **Idade:** Deve estar entre 14 e 120 anos.
* **E-mail:** Formato minimamente válido (ex: contendo `@` e `.`).
* **Senha:** Mínimo de 8 caracteres.

*O cadastro só é concluído quando todas as validações forem atendidas.*

---

### 3. Calculadora Modular

Construa uma calculadora modular utilizando funções para as operações: **Soma**, **Subtração**, **Multiplicação**, **Divisão**, **Potência** e **Resto da divisão**.

* Apresente um menu iterativo que permita várias operações até a opção de encerrar.
* Trate exceções e situações inválidas (ex: divisão por zero).

---

### 4. Fatorial Recursivo

Implemente uma função recursiva que calcule o fatorial de um número inteiro não negativo.

$$\text{Exemplo: } 5! = 5 \times 4 \times 3 \times 2 \times 1 = 120$$

**Questões conceituais a responder:**

1. Qual é o caso-base da função?
2. O que aconteceria se o caso-base não existisse?
3. Qual seria uma versão não recursiva (iterativa) do mesmo algoritmo?

---

### 5. Sequência de Fibonacci

1. Crie uma função **recursiva** que calcule o $n$-ésimo termo da sequência de Fibonacci.
2. Implemente uma segunda versão utilizando **estruturas de repetição** (iterativa).
3. Compare as duas soluções e explique qual tende a ser mais eficiente para valores elevados de $n$.

---

### 6. Soma Recursiva de uma Lista

Implemente uma função recursiva que receba uma lista de números e retorne a soma de todos os seus elementos (ex: entrada `[10, 20, 5, 3]` $\rightarrow$ saída `38`).

* **Regra:** Não utilize estruturas de repetição (`for`, `while`) dentro da função recursiva.

---

### 7. Gerenciador de Lista de Tarefas

Crie um programa que utilize a estrutura de dados **Lista** para gerenciar tarefas:

* Adicionar tarefa
* Listar tarefas
* Buscar uma tarefa
* Alterar uma tarefa
* Remover uma tarefa
* Informar a quantidade total de tarefas
* **Desafio Adicional:** Permitir marcar uma tarefa como concluída.

---

### 8. Histórico Utilizando Pilha

Implemente uma estrutura de **Pilha (LIFO)** para representar o histórico de páginas navegadas.

* **Funcionalidades:** Visitar nova página, visualizar página atual, voltar para a página anterior e exibir histórico completo.
* **Questão:** Explique por que a estrutura de pilha é a mais adequada para essa situação.

---

### 9. Sistema de Atendimento Utilizando Fila

Implemente um sistema de atendimento usando **Fila (FIFO)**.

* **Entidade Pessoa:** Número da senha, nome e horário de entrada.
* **Funcionalidades:** Adicionar à fila, chamar a próxima pessoa, consultar a próxima pessoa, exibir toda a fila e informar a quantidade de pessoas aguardando.
* **Questão:** Explique por que a estrutura de fila é mais adequada que a pilha neste contexto.

---

### 10. Comparando Lista, Pilha e Fila

Para cada cenário abaixo, indique a estrutura mais adequada (**Lista**, **Pilha** ou **Fila**) e **justifique sua resposta**:

| Cenário | Descrição | Estrutura Indicada | Justificativa |
| --- | --- | --- | --- |
| **A** | Histórico do navegador | Pilha | ... |
| **B** | Pessoas aguardando atendimento | Fila | ... |
| **C** | Catálogo de produtos | Lista | ... |
| **D** | Função "Desfazer" (Ctrl+Z) de um editor | Pilha | ... |
| **E** | Playlist de músicas acessada por posição | Lista | ... |

---

### 11. Orientada a Objetos

Crie uma classe `Produto` com os atributos: `código`, `nome`, `preço` e `quantidade_em_estoque`.

**Métodos obrigatórios:**

* Adicionar unidades ao estoque
* Retirar unidades do estoque *(não permitir retirar mais do que o estoque disponível)*
* Alterar preço
* Calcular o valor total em estoque do produto ($Preço \times Quantidade$)

Instancie pelo menos **3 objetos** para testes.

---

### 12. Sistema Orientado a Objetos (Herança)

Modele um sistema escolar com a seguinte estrutura de classes:

```
      [Pessoa]
      ├── Nome
      └── DataNascimento
        │
  ┌─────┴─────────────┐
  │                   │
[Aluno]          [Professor]
├── Matrícula    ├── Matrícula
├── Curso        └── Disciplina
└── Notas

```

Implemente métodos para cálculo da média do aluno e apresentação dos dados de cada objeto.

---

### 13. Modelagem de Banco de Dados

Projete um banco de dados para uma **Biblioteca** contendo as entidades: `Livros`, `Autores`, `Usuários` e `Empréstimos`.

1. Defina as tabelas, campos, tipos de dados, Chaves Primárias (PK) e Chaves Estrangeiras (FK).
2. Escreva o script de criação do banco utilizando comandos SQL `CREATE TABLE`.

---

### 14. INSERT e SELECT

Utilizando o banco de dados da biblioteca:

1. Insira no mínimo: 5 livros, 3 usuários e 3 empréstimos (`INSERT`).
2. Escreva consultas `SELECT` para:
* Listar todos os livros;
* Mostrar apenas título e autor;
* Buscar livros por autor específico;
* Mostrar livros ordenados alfabeticamente;
* Mostrar apenas livros disponíveis para empréstimo.



---

### 15. UPDATE e DELETE

Escreva os comandos SQL para:

* Alterar o nome de um usuário;
* Alterar a disponibilidade de um livro;
* Atualizar a data de devolução de um empréstimo;
* Excluir um usuário;
* Excluir um livro.

> **Análise de Integridade Referencial:** Explique os riscos e o que acontece ao executar um `DELETE` em registros que possuem dependência de Chaves Estrangeiras (`FOREIGN KEY`).

---

### 16. Consultas Relacionando Tabelas

Escreva consultas SQL utilizando `JOIN` para exibir:

1. Nome do usuário e título do livro emprestado;
2. Todos os empréstimos realizados;
3. Empréstimos pendentes (não devolvidos);
4. Quantidade de empréstimos agrupada por usuário;
5. Livros que nunca foram emprestados (`LEFT JOIN` / `IS NULL`).

---

### 17. Página HTML de Apresentação

Crie uma página web para apresentar um curso técnico contendo obrigatoriamente as tags semânticas:

* `<header>`, `<nav>`, `<main>`, `<section>`, `<article>`, `<footer>`
* **Elementos visíveis:** Título principal, subtítulos, parágrafos, imagem, lista, tabela e formulário.

---

### 18. Estilização com CSS

Desenvolva um arquivo `.css` externo para a página do Exercício 17 contendo:

* Definição de tipografia, paleta de cores, espaçamentos (`margin`/`padding`) e bordas;
* Estilização do menu de navegação e botões com efeitos `:hover`;
* Organização do layout com **Flexbox** ou **Grid**;
* Responsividade básica para telas menores (Mobile);
* Uso adequado de `.classes` e `#ids`.

---

### 19. Requisição HTTP e API

Desenvolva uma aplicação que realize uma requisição `GET` para uma API pública (ex: ViaCEP, OpenWeather, REST Countries).

**O programa deve:**

1. Fazer a requisição e validar o código de status HTTP;
2. Interpretar o JSON de resposta e exibir dados estruturados ao usuário;
3. Tratar potenciais falhas/erros na requisição.

**Perguntas a responder:**

* Qual URL e método HTTP foram utilizados?
* Qual código HTTP indica sucesso (`200 OK`)?
* Em qual formato os dados foram recebidos?
* Qual a diferença entre uma requisição e uma resposta HTTP?

---

## Questões para Revisão Conceitual

Durante a apresentação ou defesa dos exercícios, certifique-se de dominar os seguintes temas:

* [ ] **Fundamentos de Programação:** Diferença entre função e procedimento, parâmetros e valores de retorno.
* [ ] **Recursividade:** Caso-base, estouro de pilha (*stack overflow*) e comparação entre recursão vs. repetição.
* [ ] **Estruturas de Dados:** Funcionamento de listas, pilhas e filas, e os conceitos **LIFO** (*Last In, First Out*) e **FIFO** (*First In, First Out*).
* [ ] **POO:** Conceitos de classe, objeto, atributo, método, encapsulamento e herança.
* [ ] **Banco de Dados:** Modelo relacional, chave primária (PK), chave estrangeira (FK), relacionamentos, comandos DDL/DML (`CREATE`, `INSERT`, `SELECT`, `UPDATE`, `DELETE`) e junções com `JOIN`.
* [ ] **Desenvolvimento Web:** Arquitetura Cliente-Servidor, protocolo HTTP (métodos, cabeçalhos, respostas e códigos de status), HTML semântico, seletores CSS e layouts dinâmicos (Flexbox/Grid).
