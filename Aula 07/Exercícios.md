## 📝 Exercícios 

---

### 🔹 Exercício 1 - Sequência de Inteiros Pares
**Descrição:** Faça uma função recursiva que receba como parâmetro um número inteiro positivo N e imprima todos os números pares de N até 0 (ordem decrescente).

Agora, modifique a função para imprimir os números pares de 0 até N (ordem crescente).

**Exemplo de:**

**Ordem decrescente:**
- Entrada:
    ```yaml
    Informe o valor de N: 10
    ```
 
* Saída:
    ```css
    Os números pares de 10 até 0 são: 10 8 6 4 2 0
    ```

**Ordem crescente:**
- Entrada:
    ```yaml
    Informe o valor de N: 10
    ```
 
* Saída:
    ```css
    Os números pares de 0 até 10 são: 0 2 4 6 8 10
    ```

---

### 🔹 Exercício 2 - Transformar Decimal para Binário
**Descrição:** Dado um número N na base decimal, escreva uma função recursiva que converte este número para binário. 

**Dica:** Para converter um número decimal para binário, basta dividir sucessivamente o número por 2. A cada divisão, anota-se o resto da divisão (0 ou 1). O processo continua até o número se tornar 0. O binário final é formado pelos restos lidos de baixo para cima (do último cálculo para o primeiro). Por exemplo, para o número 17:

- 17 ÷ 2 → quociente 8, resto 1
- 8 ÷ 2 → quociente 4, resto 0
- 4 ÷ 2 → quociente 2, resto 0
- 2 ÷ 2 → quociente 1, resto 0
- 1 ÷ 2 → quociente 0, resto 1

Lendo os restos de baixo para cima → 10001

<br>

**Exemplo de:**
- Entrada:
    ```yaml
    Informe o número na base decimal: 17
    ```
 
* Saída:
    ```yaml
    Número na base binária: 10001
    ```

---

### 🔹 Exercício 3 - Quantidade de Dígitos
**Descrição:** Crie um programa que tenha uma única função, além da principal, que receberá como parâmetro um natural N e devolverá a quantidade de dígitos de N.

**Dica:** Para contar os dígitos de um número, podemos usar o **operador de resto da divisão** (`%`) para pegar o último dígito (`N % 10`) e depois atualizar o número dividindo-o por 10 (`N = N / 10`). Esse processo é repetido até que `N` se torne **zero**. A cada passo, incrementamos um contador de dígitos. Por exemplo, para o número 4729:

- `4729 % 10 = 9` → pegamos o último dígito.
    - Atualizamos: `4729 / 10 = 472`
    - Dígitos contados: **1**

* `472 % 10 = 2` → próximo dígito.
    - Atualizamos: `472 / 10 = 47`
    - Dígitos contados: **2**

- `47 % 10 = 7` → próximo dígito.
    - Atualizamos: `47 / 10 = 4`
    - Dígitos contados: **3**

* `4 % 10 = 4` → último dígito.
    - Atualizamos: `4 / 10 = 0` (paramos)
    - Dígitos contados: **4**

Portanto, o número **4729 possui 4 dígitos**.

<br>

**Exemplo de:**
- Entrada:
    ```yaml
    Informe um número: 81726354
    ```
 
* Saída:
    ```yaml
    O número 81726354 possui 8 dígitos
    ```

---

### 🔹 Exercício 4 - Soma dos Dígitos
**Descrição:** Crie um programa que tenha uma única função, além da principal, que receberá como parâmetro um natural N e devolverá a soma dos dígitos de N.

**Exemplo de:**
- Entrada:
    ```yaml
    Informe um número: 2041
    ```
 
* Saída:
    ```yaml
    A soma dos dígitos o número 2041 é 7
    ```

---
