# 📝 Exercícios

---

## 🔹 Exercício 1 - Leitura de Arquivo de Texto 
**Descrição:** Crie um programa que leia um arquivo `nomes.txt` contendo uma lista de nomes (um por linha) e exiba-os na tela usando `ifstream`.

**Exemplo de:**

- Entrada:
```yaml
Ana
Bruno
Carlos
Diana
```

- Saída:
```yaml
Lista de nomes:
Ana
Bruno
Carlos
Diana
```

---

## 🔹 Exercício 2 - Escrita de Arquivo de Texto 
**Descrição:** Crie um programa que peça ao usuário para digitar nomes e salve-os no arquivo `saida.txt` usando `ofstream`.

**Exemplo de:**

- Entrada:
```yaml
Digite um nome: Maria
Digite um nome: João
Digite um nome: Clara
```

- Saída:
```yaml
Maria
João
Clara
```

---

## 🔹 Exercício 3 - Leitura e Escrita 

**Descrição:** Crie um programa que abra o arquivo `dados.txt` em modo leitura e escrita usando `fstream`. O programa deve mostrar o conteúdo atual e, em seguida, adicionar uma nova linha no final.

**Exemplo de:**

- Entrada:
```yaml
Linha 1
Linha 2
```

- Saída:
```yaml
Linha 1
Linha 2
Nova linha adicionada!
```

---

## 🔹 Exercício 4 - Modos de Abertura 

**Descrição:** Escreva um programa que abra o arquivo `log.txt` em modo de anexação (`ios::app`), adicionando sempre uma nova linha com a mensagem *"Novo registro"*. Execute o programa duas vezes e veja o resultado.

**Execução 1 (conteúdo inicial vazio):**

```yaml
Novo registro
```

**Execução 2 (arquivo já com uma linha):**

```yaml
Novo registro
Novo registro
```

Agora, troque para o modo `ios::trunc` e veja que o conteúdo antigo será apagado.

---

## 🔹 Exercício 5 - Leitura de Arquivo Binário

**Descrição:** Crie um programa armazene 5 números interios em um array de depois que grave eles em um arquivo binário chamado `numeros.bin`. Depois, leia esse mesmo arquivo e exiba os valores.

**Exemplo de:**

- Entrada:
```yaml
Digite 5 números inteiros: 6 9 4 1 3 
```

- Saída:
```yaml
Números gravados e lidos do arquivo: 6 9 4 1 3
```

---

## 🔹 Exercício 6 - Classe em Arquivo Binário

**Descrição:**
Crie uma classe `Pessoa` com nome e idade. Grave duas pessoas em um arquivo binário e depois leia e mostre os dados.

**Exemplo de:**

- Entrada:
```yaml
Nome: Ana
Idade: 25

Nome: João
Idade: 30
```

- Saída:
```yaml
Nome: Ana, Idade: 25
Nome: João, Idade: 30
```

---
