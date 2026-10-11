interface User {
    id: number;
    name: string;
    username: string;
    email: string;
    address: {
        city: string;
    };
    company: {
        name: string;
    };
}

const url: string = "https://jsonplaceholder.typicode.com/users/1";

async function consultarApi(): Promise<void> {
    try {
        console.log("A aceder à API...");
        
        const response = await fetch(url);

        if (response.ok) {
            const dados: User = await response.json();

            console.log("\n--- Informações Obtidas com Sucesso ---");
            console.log(`Nome: ${dados.name}`);
            console.log(`Nome de Utilizador: ${dados.username}`);
            console.log(`Correio Eletrónico: ${dados.email}`);
            console.log(`Cidade: ${dados.address.city}`);
            console.log(`Empresa: ${dados.company.name}`);
        } else {
            console.log(`A requisição falhou. Código de estado HTTP: ${response.status}`);
        }

    } catch (error) {
        console.error("Ocorreu um erro de comunicação com a API:", error);
    }
}

consultarApi();

/*
1-Qual URL foi utilizada?
Foi utilizada a URL [https://jsonplaceholder.typicode.com/users/1](https://jsonplaceholder.typicode.com/users/1).   
2-Qual método HTTP foi utilizado?
Foi utilizado o método GET, cujo objetivo é solicitar e obter dados de um recurso específico a partir de um servidor.   
3-Qual código HTTP representa uma requisição bem-sucedida?
O código 200 OK, que indica que o servidor processou a requisição com sucesso e retornou os dados solicitados.   
4-Em qual formato os dados foram recebidos?
Os dados foram recebidos no formato JSON (JavaScript Object Notation), estruturado em pares de chave-valor.   
5-Qual é a diferença entre uma requisição e uma resposta HTTP?
Requisição (Request): É a mensagem enviada pelo cliente para o servidor, contendo o método HTTP, 
o URL e os cabeçalhos a solicitar uma ação ou recurso.   
Resposta (Response): É a mensagem devolvida pelo servidor ao cliente após processar o pedido, 
contendo o código de estado (status code) e os dados solicitados no corpo (body).
*/