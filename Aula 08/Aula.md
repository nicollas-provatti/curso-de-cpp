# 📘 Aula 7 - String e Matriz

---

### 🔍 O que é uma string?
Em C++, uma **string** é uma sequência de caracteres usada para representar texto. Existem duas formas principais de trabalhar com strings em C++:

#### 🔹 Strings como arrays de caracteres 
São arrays fixos de caracteres terminados pelo caractere especial `'\0'` (null terminator).

```cpp
char nome[] = "Maria";
```

Aqui, o compilador armazena os caracteres `M`, `a`, `r`, `i`, `a` seguidos por `'\0'`.

#### 🔹 Strings da biblioteca padrão
`std::string` é uma classe da biblioteca padrão C++ que facilita o uso e manipulação de texto. Permite tamanho dinâmico, operações práticas e segurança maior em relação às C-strings. Para usá-la, você deve incluir o cabeçalho `<string>`.

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string nome = "Maria";
    cout << "Nome: " << nome << std::endl;
    return 0;
}
```

**Por que usar std::string?**
- Não precisa se preocupar com o tamanho do array nem com o caractere nulo.
- Métodos para concatenar, comparar, buscar, substituir, etc.
- Melhora a legibilidade e segurança do código.

---

### 🔵 Manipulação básica de `std::string`

🔹 **Declaração e Inicialização**
```cpp
#include <string>
using namespace std;

string texto1;              // String vazia
string texto2 = "Olá";     // Inicialização direta
string texto3("Mundo");    // Outra forma de inicialização
```

🔹 **Concatenação**
Você pode concatenar strings usando o operador `+` ou o operador `+=`.
```cpp
string nome = "João";
string sobrenome = "Silva";
string nomeCompleto = nome + " " + sobrenome;  // "João Silva"
nome += " Souza";                                   // nome agora é "João Souza"
```

🔹 **Acesso a caracteres**
Assim como arrays, você pode acessar caracteres individuais com o operador `[]` ou o método `.at()`.

```cpp
string palavra = "exemplo";
char c1 = palavra[0];        // 'e'
char c2 = palavra.at(2);     // 'e'

palavra[0] = 'E';            // palavra agora é "Exemplo"
```

> **Observação:** `.at()` verifica limites e lança exceção se o índice for inválido, enquanto `[]` não faz essa checagem.

🔹 **Tamanho da string**
Para saber quantos caracteres uma string tem, use o método `.size()` ou `.length()`.

```cpp
string texto = "C++";
cout << texto.size();   // 3
cout << texto.length(); // 3 (mesma coisa)
```

🔹 **Comparação**
Strings podem ser comparadas diretamente com os operadores relacionais (`==`, `!=`, `<`, `>`, etc.).

```cpp
string s1 = "abc";
string s2 = "def";

if (s1 == s2) {
    cout << "Strings iguais";
} else {
    cout << "Strings diferentes";  // será impresso
}
```

🔹 **Substrings**
Extrair uma parte da string usando `.substr(posiçãoInicial, tamanho)`

```cpp
string frase = "Aprender C++";
string palavra = frase.substr(9, 2);  // "C+"
```

🔹 **Buscar texto**
Buscar a posição de uma substring com `.find()`.

```cpp
string frase = "Ola mundo";
size_t pos = frase.find("mun");   // retorna 4
if (pos != string::npos) {
    cout << "Encontrado na posição " << pos;
}
```

🔹 **Remover texto**
Usar `.erase(posição, tamanho)` para remover parte da string.

```cpp
string texto = "Hello World!";
texto.erase(5, 6);  // texto agora é "Hello"
```

---

### 🔵 Tabela com as principais funções

| Função / Método         | Descrição                                                                 |
|------------------------|---------------------------------------------------------------------------|
| ``.size()`` / ``.length()`` | Retorna o tamanho (quantidade de caracteres) da string.                     |
| ``.empty()``           | Retorna true se a string está vazia.                                      |
| ``.clear()``           | Remove todo o conteúdo da string, tornando-a vazia.                       |
| ``.at(pos)``           | Retorna o caractere na posição pos com verificação de limites.             |
| ``operator[]`` (colchetes) | Retorna o caractere na posição pos sem verificação de limites.             |
| ``.front()``           | Retorna o primeiro caractere da string.                                   |
| ``.back()``            | Retorna o último caractere da string.                                     |
| ``.append(str)``       | Adiciona a string str ao final da string atual.                            |
| ``.insert(pos, str)``  | Insere a string str a partir da posição pos.                               |
| ``.replace(pos, len, str)`` | Substitui len caracteres a partir de pos pela string str.                 |
| ``.erase(pos, len)``   | Remove len caracteres a partir da posição pos.                             |
| ``.substr(pos, len)``  | Retorna uma substring de len caracteres iniciando em pos.                  |
| ``.find(str)``         | Retorna a posição da primeira ocorrência da substring str.                 |
| ``.rfind(str)``        | Retorna a posição da última ocorrência da substring str.                   |
| ``.compare(str)``      | Compara duas strings lexicograficamente. Retorna 0, <0 ou >0.              |
| ``.c_str()``           | Retorna um ponteiro para uma C-string (const char*).                       |
| ``std::to_string(num)``| Converte um número para uma string.                                        |
| ``std::stoi(str)``     | Converte uma string em um número inteiro (int).                            |
| ``std::stod(str)``     | Converte uma string em um número de ponto flutuante (double).              |

---

### 🔍 O que é matriz ?
Uma **matriz** é um array multidimensional, usada para armazenar dados em formato de linhas e colunas — como uma tabela. 

![](https://media.geeksforgeeks.org/wp-content/uploads/20240416133310/Introduction-to-Matrix.webp)

---

### 🔵 Operações com matrizes
**🔹 Declaração:** No C++, uma matriz bidimensional pode ser declarada da seguinte forma:

```cpp
tipo nome[linhas][colunas];
```

Por exemplo:

```cpp
int matriz[3][4]; // Matriz com 3 linhas e 4 colunas
```

**🔹 Inicialização:** Você pode inicializar uma matriz de maneira similar a do array, mas com as entradas organizadas em linhas e colunas.

```cpp
int matriz[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
```

Outra forma:

```cpp
int matriz[3][4] = { 
    {1, 2, 3, 4}, 
    {5, 6, 7, 8}, 
    {9, 10, 11, 12} 
};
```

As duas formas acima são equivalentes, mas a segunda facilita a visualização da matriz.

🔹 **Acesso:** Para acessar um elemento específico de uma matriz, você usa dois índices: um para a linha e outro para a coluna. Usando a matriz do exemplo anterior:

```cpp
int primeiro = matriz[0][0];
```

Acessa o elemento na primeira linha e primeira coluna (valor 1). Lembrando que começamos no índice zero, então a primeira linha é representada pelo índice zero, assim como a primeira coluna.

---

### 🔵 Percorrendo Matrizes com Loops
Assim como em **arrays unidimensionais**, **matrizes** em C++ também são um conjunto de dados organizados, mas com uma diferença importante: elas possuem duas dimensões (linhas e colunas). Isso significa que, para acessar e manipular todos os elementos de uma matriz, precisamos usar **dois laços**: um para iterar pelas linhas e outro para iterar pelas colunas.

**Exemplo:**
```cpp
for (int i = 0; i < 3; i++) {         // Laço para as linhas
    for (int j = 0; j < 4; j++) {     // Laço para as colunas
        cout << matriz[i][j] << " ";
    }
    count << endl;
}
```

Isso imprime todos os elementos da matriz. Também é possível fazer a mesma coisa para ler os valores de um array.

```cpp
for (int i = 0; i < 3; i++) {         // Laço para as linhas
    for (int j = 0; j < 4; j++) {     // Laço para as colunas
        cin >> matriz[i][j]
    }
}
```


#### 🔹 **Mais por que usar dois laços ?**
- **Primeiro laço**: O primeiro laço (`for (int i = 0; i < 3; i++)`) percorre as linhas da matriz. Cada vez que o laço passa por uma nova iteração, ele avança para uma nova linha.

* **Segundo laço**: O segundo laço (`for (int j = 0; j < 4; j++)`) percorre as colunas de cada linha. Para cada linha, ele percorre todas as colunas.

**Exemplo – Preenchendo e Imprimindo a Matriz:**

```cpp
#include <iostream>
using namespace std;

int main() {
    int matriz[3][4];

    // Entrada de dados
    for (int i = 0; i < 3; i++) {         
        for (int j = 0; j < 4; j++) {
            cout << "Digite um número para a posição [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    // Saída de dados
    cout << "\nMatriz digitada:\n";
    for (int i = 0; i < 3; i++) {         
        for (int j = 0; j < 4; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
```

<br>

> ⚠️ **Importante:** A forma correta de ler uma matriz em C++ (ou em qualquer outra linguagem) é da **esquerda para a direita** e de **cima para baixo**, como nos exemplos mostrados. Isso se deve à maneira como a matriz é organizada na memória e à convenção de acesso aos seus elementos.
Quando você percorre uma matriz de **cima para baixo** e da **esquerda para a direita**, você está seguindo a ordem que a matriz é armazenada na memória e a convenção mais comum de acesso aos seus elementos. Isso facilita a leitura e a manipulação dos dados, uma vez que você acessa a matriz de acordo com sua organização natural.

---

### 🔵 Funções e Matriz
Assim como os arrays unidimensionais, podemos passar matrizes como parâmetros para funções. Porém, no caso de matrizes, é obrigatório especificar o tamanho das colunas (segunda dimensão) ao declarar o parâmetro da função.

🔹 **Sintaxe básica:**

```cpp
tipo nomeDaFuncao(tipo matriz[][3], int linhas, int colunas);
```

A quantidade de linhas e colunas geralmente é passado como argumento extra para que a função saiba a dimensão da matriz.

**🔹 Exemplo 1: Função que imprime uma matriz**

```cpp
#include <iostream>
using namespace std;

void imprimeMatriz(int matriz[][3], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matriz[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    cout << "Matriz:" << endl;
    imprimeMatriz(matriz, 2, 3);

    return 0;
}
```

**Saída:**

```php
Matriz: 
1 2 3
4 5 6
```

**🔹 Exemplo 2: Função que preenche uma matriz**

```cpp
#include <iostream>
using namespace std;

void preencheMatriz(int matriz[][3], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            cout << "Digite um valor para [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
}

int main() {
    int matriz[2][3];

    preencheMatriz(matriz, 2, 3);

    cout << "Matriz preenchida:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
```

---