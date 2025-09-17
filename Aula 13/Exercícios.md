# 📝 Exercícios

---

## 🔹 Exercício 1 - Adicionando Números
**Descrição:** Crie um programa que leia **5 números inteiros** e os armazene em um `vector<int>`. Depois, exiba os números na ordem em que foram digitados.
Use o método `push_back`.

**Exemplo de:**

- Entrada:
```yaml
10 20 30 40 50
```

- Saída:
```yaml
Você digitou: 10 20 30 40 50
```

---

## 🔹 Exercício 2 - Removendo Elementos
**Descrição:** Crie um programa que leia um `vector<int>` de 6 números.
Depois, remova o **primeiro e o último elemento** usando os métodos `erase` e `pop_back`.
Exiba o vetor resultante.

**Exemplo de:**

- Entrada:
```yaml
1 2 3 4 5 6
```

- Saída:
```yaml
Após remoções: 2 3 4 5
```

---

## 🔹 Exercício 3 - Iteradores em Ação
**Descrição:** Crie um `vector<string>` com os nomes de 4 cidades.
Percorra o vetor utilizando um **iterador** e exiba cada cidade em uma linha.

**Exemplo de:**

- Saída:
```yaml
São Paulo
Rio de Janeiro
Belo Horizonte
Curitiba
```

---

## 🔹 Exercício 4 - Ordenando Valores
**Descrição:** Crie um programa que leia **7 números inteiros** e os armazene em um `vector<int>`.
Use a função `sort` da STL para exibir os números:

- Em ordem crescente.
- Em ordem decrescente.

**Exemplo de:**

- Entrada:
```yaml
5 2 9 1 7 3 6
```

- Saída:
```yaml
Ordem crescente: 1 2 3 5 6 7 9
Ordem decrescente: 9 7 6 5 3 2 1
```

---

## 🔹 Exercício 5 - Buscando Elementos
**Descrição:** Crie um programa que leia **10 números inteiros** em um `vector<int>`.
Depois, peça ao usuário um número X e utilize `find` para verificar se ele está no vetor.

- Se encontrado, exiba a posição.
- Caso contrário, exiba "Número não encontrado".

**Exemplo de:**

- Entrada:
```yaml
Números: 10 20 30 40 50 60 70 80 90 100
Procurar: 60
```

- Saída:
```yaml
Número encontrado na posição 5
```

---

## 🔹 Exercício 6 - Estatísticas com `vector`
**Descrição:** Crie um programa que leia vários números inteiros positivos e os armazene em um `vector<int>` até que o usuário digite **0**.
Depois:

- Exiba a **quantidade** de números digitados.
- Exiba o **maior** e o **menor** número (use `max_element` e `min_element`).
- Exiba a **soma total** dos elementos (use `accumulate`).

**Exemplo de:**

- Entrada:
```yaml
8 12 4 20 15 0
```

- Saída:
```yaml
Quantidade: 5
Maior número: 20
Menor número: 4
Soma total: 59
```

---

