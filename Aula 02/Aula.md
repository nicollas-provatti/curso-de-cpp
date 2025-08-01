# 📘 Aula 2 - Tipos de Dados, Variáveis e Operadores

---

### 🔵 Dados

#### 🔎 O que são dados ?
Em programação, **dados** são **informações** que um programa **recebe**, **processa** ou **gera**. Esses dados podem vir de diferentes fontes:

- Um valor digitado pelo usuário

- Um número calculado pelo programa

- Um conteúdo vindo de um arquivo ou da internet

- Um texto exibido na tela

**Exemplos de dados:**
`15` (um número)

`"Olá, mundo!"` (um texto)

`true` ou `false` (um valor lógico)

Um dado **sozinho** não tem muito valor, mas quando o usamos dentro de um **algoritmo**, podemos processar, comparar, armazenar e gerar **informações úteis** a partir deles.

---

### 🔵 Tipos de Dados Primitivos
Em C++,** tipos primitivos** (ou tipos básicos) são os blocos fundamentais de dados. Eles definem o tipo de informação que uma variável pode armazenar.

| Tipo     | Descrição                                               | Exemplo               |
|----------|---------------------------------------------------------|----------------------|
| ``int``    | Números inteiros (sem parte decimal)                      | 10, -3, 2025         |
| ``float``  | Números reais (ponto flutuante - precisão simples)         | 3.14, -0.5           |
| ``double`` | Números reais (ponto flutuante - precisão dupla)           | 3.1415926535         |
| ``char``   | Caractere único (entre aspas simples)                     | 'A', 'b', '1'        |
| ``bool``   | Valores lógicos (booleanos)                               | true, false          |

#### 🔹 Detalhes de cada tipo
1. **int**
    - Armazena números inteiros.
    - Ocupa geralmente 4 bytes de memória.

2. **float**
    - Armazena números com ponto decimal, precisão simples (~6 casas decimais).
    - Ocupa geralmente 4 bytes.

3. **double**
    - Também armazena números decimais, mas com **maior precisão** (~15 casas decimais).
    - Ocupa geralmente 8 bytes.

4. **char**
    - Armazena **um único caractere** (letra, número ou símbolo).
    - Usado com aspas simples: `'A'`, `'1'`, `'$'`.

5. **bool**
    - Representa valores lógicos:
    - ✔️ true (verdadeiro)
    - ❌ false (falso)

#### 🔹 Observações importantes:
✔️ **float** e **double** usam ponto e não vírgula para casas decimais.
✔️ **char** armazena somente 1 caractere. Para textos maiores usa-se **std::string** (veremos em outra aula).
✔️ O tipo **bool** é muito usado em condições e decisões no programa.

---

### 🔵 Variáveis e Constantes

#### 🔍 O que são variáveis ?
São espaços nomeados na memória que **armazenam dados**. O valor de uma variável pode ser alterado durante a execução do programa.

#### 🔹 **Declaração de variáveis:**
Declarar uma variável é o mesmo que **criar uma variável**. Ao fazer isso, um espaço na memória é reservado para armazenar algum dado. Durante a criação da variável, é necessário informar o **tipo de dado** que ela vai guardar e **dar um nome** (identificador) a ela. Esse nome será usado para acessar o valor armazenado sempre que for necessário.

**Exemplo:**
```c
int numero;
```

#### 🔹 **Atribuição de variáveis:**
Após criar uma variável, é possível **guardar uma informação** dentro dela. Esse processo é chamado de atribuição.

**Exemplo:**
```c
int numero;
numero = 10;
```

#### 🔹 **Inicialização de variráveis:**
Quando a declaração e a atribuição são feitas na **mesma linha**, chamamos esse processo de inicialização. Inicializar uma variável significa atribuir um valor a ela **no momento em que ela é criada**.

**Exemplo:**
```c
int numero = 10;
```
<br>

#### 🔹 Regras para Nomeação de Variáveis
✅ **Boas práticas:**

- Nomes devem ser descritivos e fáceis de entender (`idade`, `precoProduto`).
- Usar letras minúsculas e `camelCase` para múltiplas palavras (`quantidadeMaxima`).
- Utilizar apenas letras, números e o caractere "_" (`nome_usuario`).
- Sempre começar com uma letra (não pode iniciar com números ou caracteres especiais).

❌ **Evite:**

- Usar acentos e caracteres especiais (`preço`, `número` ❌).
- Começar com números (`1idade`, 2no`me ❌).
- Utilizar palavras reservadas da linguagem (`int`, `float` ❌).

<br>

#### 🔹 Constantes
São variáveis cujo valor **não pode ser alterado** após a atribuição. Para declarar uma constante usamos a palavra reservada `const`.

**Exemplo:**
```c
const int NUMERO = 10;

NUMERO = 12; // ❌ Erro: não é possível reatribuir uma constante
```
Existe uma convenção em programação na qual os nomes (identificadores) de constantes são escritos em **letras maiúsculas**. Essa prática ajuda a diferenciar constantes de outras variáveis no código.

---

### 🔵 Operadores
Os operadores são símbolos que instruem o compilador a **realizar operações específicas** com variáveis e valores. Em C++, os operadores estão divididos em várias categorias:

#### 🔹 Aritméticos
Utilizados para **operações matemáticas** básicas:

|Operador | Operação       | Exemplo|
|---------|----------------|--------|
| `+`       | Soma         |  `x + y` |
|`-`       | Subtração      | `x - y` |
| `*`       | Multiplicação  | `x * y` |
| `/`       | Divisão        | `x / y` |
| `%`       | Módulo (resto) |  `x % y` |

#### 🔹 Atribuição
Usados para **atribuir valores** a variáveis:

|Operador | Operação       | Exemplo|
|---------|----------------|--------|
| `=`       | Atribuição simples         |  `a = 10` |

#### 🔹 Aritméticos de Atribuição
São formas **resumidas** de aplicar uma operação e atribuir o resultado na mesma variável:

| Operador | Equivalente a | Exemplo   |
|----------|----------------|-----------|
| `+=`     | `x = x + y`    | `x += 2;` |
| `-=`     | `x = x - y`    | `x -= 3;` |
| `*=`     | `x = x * y`    | `x *= 4;` |
| `/=`     | `x = x / y`    | `x /= 2;` |
| `%=`     | `x = x % y`    | `x %= 5;` |

#### 🔹 Relacionais
**Comparam valores** e retornam `true` ou `false` :

| Operador | Significado       | Exemplo   |
|----------|-------------------|-----------|
| `==`     | Igual a           | `a == b`  |
| `!=`     | Diferente de      | `a != b`  |
| `>`      | Maior que         | `a > b`   |
| `<`      | Menor que         | `a < b`   |
| `>=`     | Maior ou igual    | `a >= b`  |
| `<=`     | Menor ou igual    | `a <= b`  |


#### 🔹 Lógicos
Usados para **expressões booleanas** (verdadeiras ou falsas):

| Operador | Significado         | Exemplo             |
|----------|---------------------|---------------------|
| `&&`     | E lógico (AND)      | `(x > 0 && x < 100)`|
|  `\|\|`     |  OU lógico (OR)     | `(x > 0 \|\| x < 100)`|
| `!`      | NÃO lógico (NOT)    | `!(x == 0)`         |

#### 🔹 Incremento e Decremento
Servem para **adicionar ou subtrair 1** de uma variável, com dois formatos:

| Operador | Descrição       | Exemplo            |
|----------|------------------|--------------------|
| `++`     | Incrementa em 1  | `x++;` ou `++x;`   |
| `--`     | Decrementa em 1  | `x--;` ou `--x;`   |

A diferença está na **ordem da execução**:
- `++x`: incrementa antes de usar o valor
- `x++`: incrementa depois de usar o valor

#### 🔹 Operador de Endereço

| Operador | Significado                                       | Exemplo |
|----------|---------------------------------------------------|---------|
| `&`      | Retorna o endereço de memória de uma variável     | `&x`    |

Será usado bastante quando começarmos a trabalhar com ponteiros.

#### 🔹 Operador Ternário
Forma compacta de um **if/else**. Tem três partes:

```c
condição ? valor_se_verdadeiro : valor_se_falso;
```

**Exemplos:**
```c
int idade = 16;
int maiorDeIdade = idade >= 18 ? 1 : 0;
```
Neste exemplo, usamos o **operador ternário** para atribuir um valor à variável `maiorDeIdade` com base em uma condição: se a variável `idade` for maior ou igual a 18, `maiorDeIdade` recebe o valor 1 (verdadeiro); caso contrário, recebe 0 (falso). No exemplo, como `idade` é 16, que é menor que 18, a condição é falsa e `maiorDeIdade` será igual a 0. Esse operador é uma forma compacta de escrever uma estrutura condicional `if-else`.


```c
int idade = 16;
idade >= 18 ? printf("Maior de idade\n") : printf("Menor de idade\n");
```
Neste exemplo, usamos o **operador ternário** para decidir qual mensagem imprimir com base no valor da variável `idade`. A ideia é: se `idade >= 18`, imprime `"Maior de idade"`, senão imprime `"Menor de idade"`.

---

#### 🔵 Precedência de Operadores
A ordem em que os operadores são avaliados é importante para garantir que o resultado esteja correto.

**Ordem da Precedência (maior para menor):**

1. `()` – Parênteses

2. `!`

3. `*`, `/`, `%`

4. `+`, `-`

5. `<`, `>`, `<=`, `>=`

6. `==`, `!=`

7. `&&`

8. `||`

Use parênteses para garantir clareza:
```c
int resultado = (2 + 3) * 4; // resultado = 20
```

---

### 🔵 Entrada e Saída de Dados
Em C++, para interagir com o usuário, usamos as funções de **entrada e saída** para ler dados e mostrar resultados na tela.

As bibliotecas padrão oferecem dois objetos principais para isso:

- `std::cin` — para entrada (input)
- `std::cout` — para saída (output)

Ambos fazem parte do namespace `std` e estão definidos na biblioteca `<iostream`>.

#### 🔹 Saída de Dados
O objeto `std::cout` é usado para imprimir informações no console.

**Exemplo:**

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Olá, mundo!" << endl;
    return 0;
}
```

- `<<` é o operador de inserção (inserir dados na saída).
- `endl` insere uma nova linha e força a limpeza do buffer de saída.

#### 🔹 Entrada de Dados 
O objeto `std::cin` é usado para ler dados do teclado.

```cpp
#include <iostream>
using namespace std;

int main() {
    int idade;
    cout << "Digite sua idade: ";
    cin >> idade;
    cout << "Você tem " << idade << " anos." << endl;
    return 0;
}
```

- `>>` é o operador de extração (extrair dados da entrada).

**Dicas Importantes**
- Sempre informe o que o usuário deve digitar, usando `cout` antes do `cin`.
- `cin` lê até encontrar um espaço, nova linha ou tabulação.
- Para ler strings com espaços, usaremos técnicas mais avançadas (aulas futuras).

---