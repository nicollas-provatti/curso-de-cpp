# 📝 Exercícios

---

## 🔹 Exercício 1 - Manipulando Ponteiros
**Descrição:** Crie um programa em C++ que faça o seguinte:

**1.** Declare uma variável inteira `x` e inicialize com um valor qualquer.
**2.** Declare um ponteiro `p` que aponte para `x`.
**3.** Mostre o valor de `x` usando o ponteiro `p`.
**4.** Modifique o valor de `x` usando o ponteiro `p`.
**5.** Mostre o novo valor de `x` usando a variável original.

**Exemplo de:**

- Entrada:
```yaml
Digite um valor para x: 10
Digite um novo valor para x através do ponteiro: 25
```

- Saída:
```yaml
Valor original de x: 10
Valor de x acessado pelo ponteiro: 10
Novo valor de x após alteração pelo ponteiro: 25
```

---

## 🔹 Exercício 2 - Trocando Valores
**Descrição:** Crie um programa em C++ que:

**1.** Declare duas variáveis inteiras `a` e `b`.
**2.** Solicite ao usuário que digite os valores de `a` e `b`.
**3.** Crie uma função trocar que receba `a` e `b` por referência e troque seus valores.
**4.** Chame a função trocar passando `a` e `b`.
**5.** Mostre os valores de `a` e `b` antes e depois da troca.

**Exemplo de:**

- Entrada:
```yaml
Digite o valor de a: 5
Digite o valor de b: 10
```

- Saída:
```yaml
Antes da troca: a = 5, b = 10
Após a troca: a = 10, b = 5
```

---

## 🔹 Exercício 3 - Ponteiro para Objeto
**Descrição:** Crie um programa em C++ que:

**1.** Defina uma classe Aluno com os seguintes atributos públicos:
- `string nome`
- `int idade`

**2.** No `main`:

- Crie um objeto `Aluno` chamado `aluno1`.
- Crie um ponteiro `pAluno` que aponte para `aluno1`.
- Solicite ao usuário que digite o `nome` e a `idade` do aluno.
- Preencha os atributos do objeto usando o ponteiro (`->`).
- Exiba os dados do aluno usando o ponteiro (`->`).

**Exemplo de:**

- Entrada:
```yaml
Digite o nome do aluno: João
Digite a idade do aluno: 20 
```

- Saída:
```yaml
Nome: João
Idade: 20
```

---

## 🔹 Exercício 4 - Array Dinâmico 1
**Descrição:** Crie um programa em C++ que:

**1.** Solicite ao usuário **quantos números deseja armazenar**.
**2.** Crie um **array dinâmico** usando `new` ou `unique_ptr` (C++ moderno).
**3.** Solicite ao usuário que digite os números para preencher o array.
**4.** Mostre os números digitados na tela.
**5.** Se usar `new`, lembre-se de liberar a memória com `delete[]`.

**Exemplo de:**

- Entrada:
```yaml
Quantos números deseja armazenar? 4
Digite o número 1: 5
Digite o número 2: 10
Digite o número 3: 3
Digite o número 4: 8
```

- Saída:
```yaml
Você digitou: 5 10 3 8
```

---

## 🔹 Exercício 5 - Array Dinâmico 2
**Descrição:** Crie um programa em C++ que:

**1.** Solicite ao usuário **quantos números deseja armazenar** inicialmente.
**2.** Crie um **array dinâmico** usando `new`.
**3.** Preencha o array com os valores digitados pelo usuário.
**4.** Mostre os números digitados.
**5.** Pergunte ao usuário **quantos números deseja adicionar** ao array.
**6.** Crie um **novo array maior**, copie os valores antigos para o novo array e adicione os novos números.
**7.** Mostre o array final.
**8.** Libere toda a memória usada com `delete[]`.

**Exemplo de:**

- Entrada:
```yaml
Quantos números deseja armazenar? 3
Digite o número 1: 5
Digite o número 2: 10
Digite o número 3: 3
Quantos números deseja adicionar? 2
Digite o novo número 1: 8
Digite o novo número 2: 12
```

- Saída:
```yaml
Array final: 5 10 3 8 12
```

<br>

**Sugestões de Mudanças**

**1. Diminuir o array:**

- Ao invés de aumentar o array, tente reduzir o número de elementos.

- Observe como copiar apenas os elementos que serão mantidos e liberar a memória antiga.

**2. Redimensionamento múltiplo:**

- Tente redimensionar o array mais de uma vez, adicionando e removendo elementos.
- Analise se a lógica funciona corretamente e se não há vazamento de memória.

**3. Inicialização de valores:**

- Preencha os novos elementos com valores padrão (por exemplo, zero) ao redimensionar.

**4. Uso de funções:**

- Crie uma função `redimensionarArray` que receba o array, o tamanho atual e o novo tamanho, e retorne o novo array.

- Isso ajuda a separar a lógica do programa e deixa o código mais organizado.

---