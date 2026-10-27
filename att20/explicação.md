Relatório de Projeto: Catálogo de Jogos (Sistema Web Cliente-Servidor)

1. Arquitetura Cliente-Servidor Utilizada

O sistema adota uma arquitetura cliente-servidor desacoplada, dividida em duas camadas principais:

Cliente (Front-end): Composto por páginas HTML estruturadas, folhas de estilo CSS e scripts em TypeScript executados diretamente no navegador do utilizador. É responsável pela interface gráfica, recolha de dados através de formulários e interação visual (listagem, filtros e gestão de eventos).

Servidor (Back-end): Implementado em Node.js com o framework Express, executa no lado do servidor para processar as requisições HTTP, aplicar a lógica de negócio, validar as informações e gerir a persistência de dados na base de dados relacional. A comunicação entre o cliente e o servidor ocorre de forma assíncrona através de requisições HTTP baseadas em JSON.

2. Principais Rotas / Endpoints do Sistema

O back-end disponibiliza uma API RESTful estruturada com as seguintes rotas principais:

GET /api/games: Executa uma operação de leitura para consultar e retornar todos os jogos armazenados na base de dados em formato JSON.

POST /api/games: Recebe os dados enviados pelo formulário de cadastro, valida a entidade e insere um novo registo na base de dados.

PUT /api/games/:id: Localiza um jogo através do identificador único (id) fornecido no parâmetro da rota e atualiza os seus atributos com os novos dados enviados.

DELETE /api/games/:id: Remove permanentemente o registo correspondente ao ID especificado na base de dados.

3. Demonstração das Operações CRUD

O sistema implementa de forma completa as quatro operações básicas de persistência de dados (CRUD):

CREATE (Criar): Realizado através da página de cadastro (add.html), onde o utilizador preenche os campos do jogo e submete um pedido POST que grava um novo registo.

READ (Ler): Executado na página principal (homePage.html), onde uma requisição GET busca os dados no servidor e renderiza dinamicamente os cartões dos jogos no ecrã.

UPDATE (Atualizar): A operação de alteração permite modificar os atributos de um jogo existente na base de dados utilizando o método HTTP PUT.

DELETE (Eliminar): Ativado através do botão de exclusão presente em cada cartão de jogo, enviando um pedido DELETE para apagar o registo correspondente.

4. Explicação da Classe Criada (Jogo)

Para cumprir o requisito de Orientação a Objetos, foi desenvolvida a classe Jogo no servidor:

Atributos: A classe encapsula as propriedades essenciais de um jogo: id, name (nome), genre (género), year (ano de lançamento), cover (URL da imagem de capa) e synopsis (sinopse).

Métodos: Inclui o método validar(), responsável por verificar a integridade dos dados antes de permitir a persistência (garantindo, por exemplo, que o nome e o género não estão vazios e que o ano de lançamento é válido). Isto garante que objetos inválidos não cheguem à base de dados.

5. Explicação da Estrutura de Dados Utilizada (ListaJogos)

No lado do cliente, foi implementada a estrutura de dados Lista através da classe ListaJogos para gerir e manipular os dados recebidos do servidor em memória:

Funcionamento: A classe armazena uma coleção (array) de objetos correspondentes aos jogos obtidos via API.

Utilidade: Disponibiliza métodos específicos como filtrarPorGenero() e buscarPorNometermo(), permitindo realizar buscas textuais e filtragens instantâneas no lado do cliente sem necessidade de efetuar novas consultas constantes ao servidor, otimizando o desempenho e a experiência de navegação.