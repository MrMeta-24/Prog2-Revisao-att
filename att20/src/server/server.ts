import express, { Request, Response } from "express";
import cors from "cors";
import Database from "better-sqlite3";

const app = express();
app.use(express.json());
app.use(cors());

const db = new Database("database.db");

db.exec(`
  CREATE TABLE IF NOT EXISTS games (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    name TEXT NOT NULL,
    genre TEXT NOT NULL,
    year INTEGER NOT NULL,
    cover TEXT NOT NULL,
    synopsis TEXT NOT NULL
  )
`);

class Jogo {
  constructor(
    public id: number | null,
    public name: string,
    public genre: string,
    public year: number,
    public cover: string,
    public synopsis: string
  ) {}

  validar(): boolean {
    return this.name.trim() !== "" && this.genre.trim() !== "" && this.year > 1950;
  }
}

app.get("/api/games", (req: Request, res: Response) => {
  try {
    const stmt = db.prepare("SELECT * FROM games");
    const rows = stmt.all();
    res.json(rows);
  } catch (error) {
    res.status(500).json({ error: "Erro ao buscar jogos." });
  }
});

app.post("/api/games", (req: Request, res: Response) => {
  const { name, genre, year, cover, synopsis } = req.body;
  
  const jogoObj = new Jogo(null, name, genre, Number(year), cover, synopsis);
  
  if (!jogoObj.validar()) {
    return res.status(400).json({ error: "Dados inválidos para o jogo." });
  }

  try {
    const stmt = db.prepare(`
      INSERT INTO games (name, genre, year, cover, synopsis) 
      VALUES (?, ?, ?, ?, ?)
    `);
    const info = stmt.run(jogoObj.name, jogoObj.genre, jogoObj.year, jogoObj.cover, jogoObj.synopsis);
    
    res.status(201).json({ id: info.lastInsertRowid, ...req.body });
  } catch (error) {
    res.status(500).json({ error: "Erro ao salvar o jogo no banco de dados." });
  }
});

app.put("/api/games/:id", (req: Request, res: Response) => {
  const { id } = req.params;
  const { name, genre, year, cover, synopsis } = req.body;

  try {
    const stmt = db.prepare(`
      UPDATE games SET name = ?, genre = ?, year = ?, cover = ?, synopsis = ? 
      WHERE id = ?
    `);
    const resultado = stmt.run(name, genre, year, cover, synopsis, id);

    if (resultado.changes === 0) {
      return res.status(404).json({ error: "Jogo não encontrado." });
    }

    res.json({ message: "Jogo atualizado com sucesso!" });
  } catch (error) {
    res.status(500).json({ error: "Erro ao atualizar o jogo." });
  }
});

app.delete("/api/games/:id", (req: Request, res: Response) => {
  const { id } = req.params;

  try {
    const stmt = db.prepare("DELETE FROM games WHERE id = ?");
    const resultado = stmt.run(id);

    if (resultado.changes === 0) {
      return res.status(404).json({ error: "Jogo não encontrado." });
    }

    res.json({ message: "Jogo excluído com sucesso!" });
  } catch (error) {
    res.status(500).json({ error: "Erro ao excluir o jogo." });
  }
});

const PORT = 3000;
app.listen(PORT, () => {
  console.log(`Servidor rodando em http://localhost:${PORT}`);
}); 