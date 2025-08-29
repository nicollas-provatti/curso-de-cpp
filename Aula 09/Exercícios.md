## 📝 Exercícios 

---

### 🔹 Exercício 1 - Cadastro de Produto - Parte I
**Descrição:** Crie uma `struct` chamada **Produto** que armazene informações de um produto:

- nome (string)
- preço (float)
- quantidade (int)

Implemente dentro da struct:

**1.** Um **construtor padrão**, que inicialize os valores com:

- nome = `"Indefinido"`
- preco = `0.0`
- quantidade = `0`

**2.** Um **construtor com parâmetros**, que permita inicializar os três atributos com os valores: 

- nome: `Caneta`
- preco: `2.5`
- quantidade: `10`

No `main()`:

**1.** Crie três produtos:
- **Produto 1**: usar o construtor padrão.
- **Produto 2**: usar o construtor com parâmetros para inicializar com valores à sua escolha.
- **Produto 3**: solicitar que o usuário digite os dados (nome, preço e quantidade).

**2.** Exiba os dados de todos os produtos.

**Exemplo de:**
- Entrada:
  ```yaml
  Digite o nome do produto: Caderno
  Digite o preço: 12.5
  Digite a quantidade: 5
  ```
 
* Saída:
    ```css
    Produto 1:
    Nome: Indefinido
    Preço: 0
    Quantidade: 0
    ---------------------
    Produto 2:
    Nome: Caneta
    Preço: 2.5
    Quantidade: 10
    ---------------------
    Produto 3:
    Nome: Caderno
    Preço: 12.5
    Quantidade: 5
    ---------------------
  ```

---

### 🔹 Exercício 2 - Cadastro de Produto - Parte II
**Descrição:** Dando continuidade ao exercício anterior, vamos agora **adicionar funcionalidades à struct Produto**.

- Acrescente uma função `mostrarDados()` que exiba os dados do produto.
- Acrescente uma função `valorEstoque()` que calcule e retorne o valor total do produto em estoque (preço × quantidade).

No `main()`:

- Utilize **o produto criado pelo usuário** no exercício anterior.
- Chame as funções `mostrarDados()` e `valorEstoque()` para exibir as informações do produto.

**Exemplo de:**
- Entrada:
  ```yaml
  Digite o nome do produto: Caderno
  Digite o preço: 12.5
  Digite a quantidade: 5
  ```
 
* Saída:
    ```css
    Produto:
    Nome: Caderno
    Preço: 12.5
    Quantidade: 5
    Valor em estoque: 62.5
  ```

---

### 🔹 Exercício 3 - Cadastro de Produto - Parte III

**Descrição:** Dando continuidade aos exercícios anteriores, agora vamos trabalhar com **vários produtos** usando **arrays de structs**.

**1.** Utilize a mesma struct Produto com:

- Construtor com parâmetros
- Função `mostrarDados()`
- Função `valorEstoque()`

**2.** No `main()`:
- Crie um array de 3 produtos:
  - **Produto 1:** construtor padrão
  - **Produto 2:** construtor com parâmetros, com valores definidos no código
  - **Produto 3:** dados fornecidos pelo usuário
<div style="height: 1px"></div>

- Itere sobre o array e para cada produto:
  - Chame `mostrarDados()`
  - Mostre o `valorEstoque()`

**Exemplo de:**
- Entrada:
  ```yaml
  Digite o nome do produto: Lápis
  Digite o preço: 1.5
  Digite a quantidade: 20
  ```
 
* Saída:
    ```css
    Produto 1:
    Nome: Indefinido
    Preço: 0
    Quantidade: 0
    Valor em estoque: 0
    ---------------------
    Produto 2:
    Nome: Caneta
    Preço: 2.5
    Quantidade: 10
    Valor em estoque: 25
    ---------------------
    Produto 3:
    Nome: Lápis
    Preço: 1.5
    Quantidade: 20
    Valor em estoque: 30
    ---------------------
  ```

---

### 🔹 Exercício 4 - Cadastro de Produto - Parte IV
**Descrição:** Dando continuidade aos exercícios anteriores, vamos agora **adicionar uma struct dentro da struct Produto** para representar a data de validade.

**1.** Crie uma `struct Data` com os atributos:

- dia (int)
- mes (int)
- ano (int)

**2.** Altere a `struct Produto` para incluir um atributo Data validade.

**3.** Mantenha na struct Produto:

- Construtor com parâmetros (agora incluindo a data)
- Construtor padrão
- Funções `mostrarDados()` e `valorEstoque()`

**4.** No `main()`:

- Crie três produtos (como no exercício anterior):

  - **Produto 1:** construtor padrão
  - **Produto 2:** construtor com parâmetros
  - **Produto 3:** entrada do usuário (nome, preço, quantidade e data)
<div style="height: 1px"></div>

- Exiba todos os produtos com suas datas de validade e valor em estoque.


**Exemplo de:**
- Entrada:
  ```yaml
  Digite o nome do produto: Lápis
  Digite o preço: 1.5
  Digite a quantidade: 20
  Digite a data de validade (dia mes ano): 15 12 2025
  ```
 
* Saída:
    ```css
    Produto 1:
    Nome: Indefinido
    Preço: 0
    Quantidade: 0
    Data de validade: 00/00/0000
    Valor em estoque: 0
    ---------------------
    Produto 2:
    Nome: Caneta
    Preço: 2.5
    Quantidade: 10
    Data de validade: 10/10/2025
    Valor em estoque: 25
    ---------------------
    Produto 3:
    Nome: Lápis
    Preço: 1.5
    Quantidade: 20
    Data de validade: 15/12/2025
    Valor em estoque: 30
    ---------------------
  ```
---