// app.js

const express = require("express");
const meuController = require("./controllers/meuController");

const app = express();
app.use(express.json());

// Rota padrão
app.get("/", (req, res) => {
  res.send("Bem-vindo à rota raiz!");
});

// Rotas para as operações do controller
app.post("/adicionar", meuController.adicionarItem);
app.get("/listar", meuController.listarItens);
app.put("/editar/:id", meuController.editarItem);
app.delete("/excluir/:id", meuController.excluirItem);

// Iniciando o servidor na porta 3000
const port = 3000;
app.listen(port, () => {
  console.log(`Servidor rodando na porta ${port}`);
});
