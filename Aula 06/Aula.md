# 📘 Aula 6 - Array 

---

### 🔍 O que é array ?
Um **array** (ou vetor) é uma estrutura de dados que armazena uma sequência de elementos do **mesmo tipo** em posições contíguas na memória Ele é usado quando precisamos manipular um conjunto de valores relacionados, como uma lista de números, nomes, temperaturas, etc.

As principais características são:

- Armazena múltiplos valores **do mesmo tipo** (int, float, char, etc.).
- Possui **tamanho fixo**, definido no momento da declaração.
- Cada elemento é acessado por um **índice**, que começa em 0.

![](https://media.geeksforgeeks.org/wp-content/uploads/20240410101419/Getting-Started-with-Array-Data-Structure.webp)

---

### 🔍 Por que usar arrays?
Imagine que queremos armazenar as idades de 5 alunos. Sem arrays, teríamos que declarar 5 variáveis diferentes:

```cpp
int idade1, idade2, idade3, idade4, idade5;
```

Com um array, podemos usar:

```cpp
int idades[5];
```

Assim, temos **uma única variável que guarda 5 valores inteiros**, acessados por um índice.

---

### 🔵 Operações com Arrays

🔹 **Declaração de arrays:** Para declarar um array em C++, usamos a seguinte sintaxe:

```cpp
tipo nome_array[tamanho];
```

**Exemplo:**
```cpp
int numeros[5];  // Declara um array de 5 inteiros
char letras[10]; // Declara um array de 10 caracteres
float notas[3];  // Declara um array de 3 números reais
```

🔹 **Inicialização de arrays:** Um array pode ser inicializado no momento da declaração:

```cpp
int numeros[5] = {1, 2, 3, 4, 5};
```

- Se o número de valores for menor que o tamanho do array, os elementos restantes são preenchidos com zero (para tipos numéricos):

```cpp
int numeros[5] = {10, 20}; // números = {10, 20, 0, 0, 0}
```

- Também é possível deixar o compilador contar o tamanho automaticamente:

```cpp
int numeros[] = {5, 10, 15}; // Tamanho 3
```

🔹 **Acesso aos elementos do array:** O acesso é feito usando o índice, que sempre começa do zero:

```cpp
#include <iostream>
using namespace std;

int main() {
    int numeros[4] = {10, 20, 30, 40};

    cout << "Primeiro elemento: " << numeros[0] << endl; // 10
    cout << "Último elemento: " << numeros[3] << endl;   // 40

    return 0;
}
```

> ⚠️ **Atenção:** acessar um índice fora dos limites do array (por exemplo, `numeros[5]` neste caso) gera um comportamento indefinido (erros imprevisíveis).

---

### 🔵 Percorrendo Arrays com Loops
É comum utilizar **laços** (loops) para acessar e manipular todos os elementos de um array. Isso torna o código mais enxuto e eficiente. Caso contrário, seria necessário acessar cada posição manualmente, o que seria trabalhoso e repetitivo — por exemplo, em um array com 10 elementos, seria preciso escrever o comando `nome_array[indice]` dez vezes.

🔹 **Exemplo 1 - Imprimindo todos os elementos:**
```cpp
#include <iostream>
using namespace std;

int main() {
    int numeros[5] = {10, 20, 30, 40, 50};

    cout << "Elementos do array: ";
    for(int i = 0; i < 5; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}
```

**Saída:**
```php
Elementos do array: 10 20 30 40 50 
```

🔹 **Exemplo 2: Modificando todos os elementos:**
```cpp
#include <iostream>
using namespace std;

int main() {
    int numeros[3] = {1, 2, 3};

    // Multiplicando cada elemento por 2
    for(int i = 0; i < 3; i++) {
        numeros[i] = numeros[i] * 2;
    }

    cout << "Elementos multiplicados por 2: ";
    for(int i = 0; i < 3; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}
```

**Saída:**
```php
Elementos multiplicados por 2: 2 4 6 
```

**🔹 Usando loop range-based for**
O C++ moderno permite um loop simplificado para percorrer arrays:

```cpp
#include <iostream>
using namespace std;

int main() {
    int numeros[4] = {5, 10, 15, 20};

    cout << "Elementos do array: ";
    for(int n : numeros) { // cada elemento de 'numeros' é atribuído a 'n'
        cout << n << " ";
    }
    cout << endl;

    return 0;
}
```

**Saída:**
```php
Elementos do array: 5 10 15 20 
```

---

### 🔵 Funções e Array
Em C++, quando um array é passado como argumento para uma função, na verdade, o que é passado é o **endereço do primeiro elemento do array** (ponteiro), e não uma cópia dos dados. Por isso, qualquer alteração feita no array dentro da função **afeta o array original**.

🔹 **Sintaxe básica:**

```cpp
tipo nomeDaFuncao(tipo array[], int tamanho);
```

Ou equivalente:

```cpp
tipo nomeDaFuncao(tipo* array, int tamanho);
```

O tamanho do array geralmente é passado como argumento extra para que a função saiba quantos elementos o array possui.

**🔹 Exemplo 1: Imprimir os elementos do array**

```cpp
#include <iostream>
using namespace std;

void imprimirArray(int arr[], int tamanho) {
    for(int i = 0; i < tamanho; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int numeros[4] = {10, 20, 30, 40};

    cout << "Array: ";
    imprimirArray(numeros, 4);

    return 0;
}
```

**Saída:**

```php
Array: 10 20 30 40 
```

**🔹 Exemplo 2: Modificar os elementos do array**

```cpp
#include <iostream>
using namespace std;

void dobrarValores(int arr[], int tamanho) {
    for(int i = 0; i < tamanho; i++) {
        arr[i] *= 2; // dobra cada elemento
    }
}

int main() {
    int numeros[3] = {1, 2, 3};

    dobrarValores(numeros, 3);

    cout << "Array após dobrar valores: ";
    for(int i = 0; i < 3; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}
```

**Saída:**

```php
Array após dobrar valores: 2 4 6 
```

---

### 🔵 Algoritmos Clássicos com Arrays

#### 🔹 Busca Linear
Percorre o array do início ao fim, comparando cada elemento com o valor procurado.

```cpp
#include <iostream>

using namespace std;

int buscaLinear(int arr[], int tamanho, int valor) {
  for (int i = 0; i < tamanho; i++) {
    if (arr[i] == valor) {
      return i; // Retorna o índice onde encontrou
    }
  }
  return -1; // Não encontrado
}

int main() {
  int numeros[] = {10, 20, 30, 40, 50};
  int valor = 30;
  int indice = buscaLinear(numeros, 5, valor);

  if (indice != -1) {
    cout << "Valor encontrado na posição: " << indice << endl;
  }
  else {
    cout << "Valor não encontrado." << endl;
  }

  return 0;
}
```

#### 🔹 Ordenação Bubble Sort

```cpp
#include <iostream>
using namespace std;

void bubbleSort(int arr[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Troca os elementos
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int numeros[] = {64, 34, 25, 12, 22, 11, 90};
    int tamanho = 7;

    bubbleSort(numeros, tamanho);

    cout << "Array ordenado: ";
    for (int i = 0; i < tamanho; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}
```