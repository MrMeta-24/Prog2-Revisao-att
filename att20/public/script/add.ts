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

  const form = document.getElementById("gameForm") as HTMLFormElement;

  if (form) {
    form.addEventListener("submit", async (e) => {
      e.preventDefault();

      const name = (document.getElementById("gameName") as HTMLInputElement).value;
      const genre = (document.getElementById("gameGenre") as HTMLSelectElement).value;
      const year = Number((document.getElementById("gameYear") as HTMLInputElement).value);
      const cover = (document.getElementById("gameCover") as HTMLInputElement).value;
      const synopsis = (document.getElementById("gameSynopsis") as HTMLTextAreaElement).value;

      const novoJogo = { name, genre, year, cover, synopsis };

      try {
        const resposta = await fetch("http://localhost:3000/api/games", {
          method: "POST",
          headers: {
            "Content-Type": "application/json"
          },
          body: JSON.stringify(novoJogo)
        });

        if (resposta.ok) {
          alert("Jogo cadastrado com sucesso!");
          window.location.href = "homePage.html";
        } else {
          alert("Erro ao cadastrar o jogo. Verifique os dados.");
        }
      } catch (erro) {
        console.error("Erro na requisição POST:", erro);
        alert("Erro de conexão com o servidor.");
      }
    });
  }
});