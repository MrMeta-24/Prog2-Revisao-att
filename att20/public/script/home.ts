class ListaJogos {
  private jogos: any[] = [];

  setJogos(jogos: any[]) {
    this.jogos = jogos;
  }

  filtrarPorGenero(genero: string): any[] {
    return this.jogos.filter((j: any) => j.genre.toLowerCase() === genero.toLowerCase());
  }

  buscarPorNometermo(termo: string): any[] {
    return this.jogos.filter((j: any) => j.name.toLowerCase().includes(termo.toLowerCase()));
  }
}

const gerenciadorLista = new ListaJogos();

async function carregarJogos(filtro?: string) {
  try {
    const resposta = await fetch("http://localhost:3000/api/games");
    const jogos = await resposta.json();
    gerenciadorLista.setJogos(jogos);
    
    const container = document.getElementById("highlights");
    if (!container) return;
    
    container.innerHTML = "";
    
    const listaExibicao = filtro ? gerenciadorLista.filtrarPorGenero(filtro) : jogos;

    if (listaExibicao.length === 0) {
      container.innerHTML = "<p>Nenhum jogo encontrado.</p>";
      return;
    }

    listaExibicao.forEach((jogo: any) => {
      const card = document.createElement("div");
      card.className = "game-card";
      card.innerHTML = `
        <img src="${jogo.cover}" alt="${jogo.name}" style="width:100%; height:200px; object-fit:cover; border-radius:8px;">
        <h3>${jogo.name}</h3>
        <p><strong>Gênero:</strong> ${jogo.genre} (${jogo.year})</p>
        <p>${jogo.synopsis}</p>
        <button class="btn btn-danger btn-sm delete-btn" data-id="${jogo.id}">Excluir</button>
      `;
      container.appendChild(card);
    });
  } catch (erro) {
    console.error("Erro ao carregar jogos:", erro);
  }
}

async function deletarJogo(id: number) {
  if (!confirm("Deseja realmente excluir este jogo?")) return;
  try {
    const resposta = await fetch(`http://localhost:3000/api/games/${id}`, {
      method: "DELETE"
    });
    if (resposta.ok) {
      carregarJogos();
    } else {
      alert("Erro ao excluir o jogo.");
    }
  } catch (erro) {
    console.error("Erro na exclusão:", erro);
  }
}

document.addEventListener("DOMContentLoaded", () => {
  const btnMenu = document.getElementById("btnMenu");
  const btnClose = document.getElementById("btnClose");
  const overlay = document.getElementById("overlay");
  const aside = document.getElementById("aside");

  function toggleAside(): void {
    if (aside && overlay) {
      aside.classList.toggle("show");
      overlay.classList.toggle("show");
    }
  }

  function fecharAside(): void {
    if (aside && overlay) {
      aside.classList.remove("show");
      overlay.classList.remove("show");
    }
  }

  if (btnMenu) btnMenu.addEventListener("click", toggleAside);
  if (btnClose) btnClose.addEventListener("click", fecharAside);
  if (overlay) overlay.addEventListener("click", fecharAside);

  carregarJogos();

  const searchForm = document.getElementById("searchForm");
  const searchInput = document.getElementById("searchInput") as HTMLInputElement;
  if (searchForm && searchInput) {
    searchForm.addEventListener("submit", (e) => {
      e.preventDefault();
      const termo = searchInput.value;
      const resultados = gerenciadorLista.buscarPorNometermo(termo);
      renderizarResultados(resultados);
    });
  }

  document.querySelectorAll(".genre-btn").forEach(btn => {
    btn.addEventListener("click", () => {
      const genero = btn.textContent?.trim();
      if (genero) carregarJogos(genero);
    });
  });

  const highlightsContainer = document.getElementById("highlights");
  if (highlightsContainer) {
    highlightsContainer.addEventListener("click", (e) => {
      const target = e.target as HTMLElement;
      if (target && target.classList.contains("delete-btn")) {
        const id = Number(target.getAttribute("data-id"));
        if (!isNaN(id)) {
          deletarJogo(id);
        }
      }
    });
  }
});

function renderizarResultados(jogos: any[]) {
  const container = document.getElementById("highlights");
  if (!container) return;
  container.innerHTML = "";
  jogos.forEach((jogo: any) => {
    const card = document.createElement("div");
    card.className = "game-card";
    card.innerHTML = `
      <img src="${jogo.cover}" alt="${jogo.name}" style="width:100%; height:200px; object-fit:cover; border-radius:8px;">
      <h3>${jogo.name}</h3>
      <p><strong>Gênero:</strong> ${jogo.genre} (${jogo.year})</p>
      <p>${jogo.synopsis}</p>
      <button class="btn btn-danger btn-sm delete-btn" data-id="${jogo.id}">Excluir</button>
    `;
    container.appendChild(card);
  });
}