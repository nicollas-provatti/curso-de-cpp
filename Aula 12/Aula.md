# 📘 Aula 12 - Ponteiro e Alocação Dinâmica

---

## 🔍 O que são ponteiros ?
Ponteiros são variáveis que armazenam o **endereço de memória** de outras variáveis. Eles são fundamentais para manipulação eficiente de dados, passagem por referência, alocação dinâmica e estruturação de dados mais complexos.

---

## 🔵 Operações com ponteiros

🔹 **Declaração:** Para declarar um ponteiro em C++, você deve especificar o tipo de dado para o qual ele aponta, seguido de um **asterisco (*)** e o nome do ponteiro. O tipo de dado do ponteiro deve ser o mesmo tipo da variável cujo endereço ele armazenará.

```cpp
int *ptr;  // Ponteiro para um inteiro
```
Nesse exemplo, `ptr`é um ponteiro que armazena o endereço de uma valor inteiro.

🔹 **Atribuição:** Após declarar um ponteiro, você pode armazenar dentro dele o **endereço de memória** de uma variável compatível com seu tipo. Isso pode ser feito utilizando o operador `&` para obter o endereço da variável.

```cpp
int numero;
ptr = &numero;
```

Nesse exemplo, unsamos o ponteiro `ptr` declarado no primeiro exemplo para guardar o endereço da variável `numero`.

🔹 **Inicialização:** Após declarar um ponteiro, você pode inicializá-lo, atribuindo o endereço de uma variável a ele.

```cpp
int numero = 10
int *ptr = &numero;
```

Nesse exemplo, o ponteiro `ptr` está inicializado com o endereço da variável `numero`. Agora, `ptr` pode ser usado para acessar ou modificar o valor de `numero` indiretamente.

> ⚠️ **Importante:** Inicializar ponteiros é uma boa prática essencial, pois evita comportamentos indefinidos. Um ponteiro não inicializado contém lixo de memória e pode causar falhas graves.

```c
int *ptr = nullptr; // Em C++, use nullptr ao invés de NULL
```


🔹 **Acesso:** Uma vez que um ponteiro armazena o endereço de uma variável, você pode acessar o valor contido nesse endereço utilizando o **operador *** (conhecido como operador de **desreferência**).

```cpp
int numero = 10;
int *ptr = &numero;

std::cout << *ptr << std::endl;  // Saída: 10
```

---
Nesse exemplo, `*ptr` desreferencia o ponteiro, acessando o valor armazenado no endereço contido em `ptr`. Isso significa que `*ptr` retorna o valor de `numero`.

🔹 **Modificação:** Os ponteiros também permitem modificar o valor de uma variável sem acessá-la diretamente, apenas manipulando seu endereço de memória.

```cpp
int numero = 10;
int *ptr = &numero;

*ptr = 20;

std::cout << numero << std::endl;  // Saída: 20
```
Nesse exemplo, o valor de `numero` foi modificado para `20` usando o ponteiro `ptr`, sem que `numero` fosse diretamente alterado no código.

---

## 🔵 Passagem por referência
Na passagem por referência, a função recebe o endereço da variável em vez de uma cópia do seu valor. Isso permite que a função acesse e modifique diretamente a variável original, já que trabalha com o endereço de memória da variável.

**Usando ponteiro:**
```cpp
#include <iostream>

void dobrar(int *numero) {
    *numero = *numero * 2;
}

int main() {
    int numero = 5;
    dobrar(&numero);
    std::cout << numero << std::endl;  // Saída: 10
    return 0;
}
```

**Usando referência:**
```cpp
#include <iostream>

void dobrar(int &numero) {
    numero = numero * 2;
}

int main() {
    int numero = 5;
    dobrar(numero);
    std::cout << numero << std::endl;  // Saída: 10
    return 0;
}
```


Nesse exemplo, ao passar o endereço de `numero` para a função `dobrar()`, a função recebe um ponteiro (`numuro`) que aponta para `numero`(variável declarada na `main`). Ao modificar o valor apontado por num dentro da função (`*numero`), estamos, na verdade, modificando diretamente a variável `numero` no programa principal. Dessa forma, o valor de `numero` é alterado de 5 para 10.

**Exemplo de passagem por valor:**
```cpp
void dobrar(int numero) {
    numero = numero * 2;
}

int main() {
    int numero = 5;
    dobrar(numero);
    std::cout << numero << std::endl;  // Saída: 5
    return 0;
}
```

Nesse exemplo, como usamos a passagem por valor o valor da variável `numero` não foi alterado.

---

## 🔵 Ponteiros e arrays
Ponteiros e arrays estão intimamente relacionados em C++, já que o nome de um array é essencialmente um ponteiro para o primeiro elemento desse array. Isso significa que podemos utilizar ponteiros para navegar por arrays, acessar e modificar seus elementos, o que é uma das características mais poderosas dos ponteiros. Nesta seção, veremos como ponteiros e arrays interagem e como podemos tirar proveito dessa relação.

### 🔹 **Relação entre arrays e ponteiros:**

Quando você declara um array, o nome do array representa o endereço do primeiro elemento desse array. Por exemplo, ao declarar:

```cpp
int array[5] = {10, 20, 30, 40, 50};
```
Aqui, `array` é um ponteiro para `array[0]`, o que significa que `array` armazena o endereço do primeiro elemento do `array`. Consequentemente, o valor de `array` é equivalente a `&array[0]`. Podemos utilizar um ponteiro para acessar e manipular os elementos do `array`.

**Exemplo:**
```cpp
int array[5] = {10, 20, 30, 40, 50};
int *ptr = array; 

printf("Primeiro elemento: %d\n", *ptr); // Saída: 10
```

### 🔹 **Navegação em arrays com ponteiros:**
Uma das vantagens de usar ponteiros com arrays é que você pode facilmente navegar pelo array utilizando aritmética de ponteiros. Ao incrementar o ponteiro, ele passa a apontar para o próximo elemento do array, e ao decrementá-lo, ele aponta para o elemento anterior.

**Exemplo:**
```cpp
int array[5] = {10, 20, 30, 40, 50};
int *ptr = array;

for (int i = 0; i < 5; i++) {
    std::cout << *(ptr + i) << std::endl;
}
```
Nesse exemplo, o `*(ptr + i)` é utilizado para acessar os elementos de `array` usando aritmética de ponteiros. O ponteiro `ptr` aponta inicialmente para o primeiro elemento do array, e ao adicionar `i`, obtemos o endereço de outros elementos subsequentes.

### 🔹 **Arrays multidimensionais e ponteiros:**
Os arrays multidimensionais são arrays de arrays, e podem ser acessados de maneira eficiente utilizando ponteiros. A ideia é semelhante à manipulação de arrays unidimensionais, mas com ponteiros que apontam para arrays em vez de valores individuais.

**Exemplo:**
```cpp
int matriz[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};

int *ptr = &matriz[0][0];

for (int i = 0; i < 9; i++) {
    std::cout << *(ptr + i) << " ";
}
```

Nesse exemplo, estamos utilizando um ponteiro para percorrer todos os elementos da `matriz`. Aqui, `ptr` aponta para o primeiro elemento da matriz (`mat[0][0]`), e ao incrementá-lo, acessamos os elementos subsequentes.

### 🔹 **Arrays de ponteiros:**
Também é possível declarar arrays de ponteiros, nos quais cada elemento do array é um ponteiro que pode apontar para diferentes variáveis ou elementos. Isso é útil quando você precisa armazenar endereços de múltiplas variáveis.

```cpp
int a = 10, b = 20, c = 30;
int *array[3];  // Array de ponteiros

array[0] = &a;
array[1] = &b;
array[2] = &c;

for (int i = 0; i < 3; i++) {
    std::cout << *array[i] << std::endl;
}
```

Nesse exemplo, `array`é um array de ponteiros para `int`, onde cada ponteiro armazena o endereço de uma variável (`a`, `b`, `c`). O loop imprime os valores apontados por cada ponteiro no array.

---

## 🔵 Ponteiros para ponteiros
Um ponteiro para ponteiro, como o nome sugere, é um ponteiro que armazena o endereço de outro ponteiro. Em vez de apontar diretamente para um valor, ele aponta para a localização de outro ponteiro que, por sua vez, aponta para o valor desejado.


🔹 **Declaração:** Em C++, um ponteiro para ponteiro é declarado adicionando mais um **asterisco *** à declaração, indicando o nível extra de indireção. Um ponteiro de nível único armazena o endereço de uma variável; já um ponteiro de nível duplo armazena o endereço de um ponteiro.

```cpp
int numero = 10; 
int *ptr = &numero;   // 'ptr' aponta para 'numero' 
int **pptr = &ptr; // 'pptr' aponta para 'ptr'
```
Nese exemplo, `ptr` é um ponteiro que armazena o endereço de `numero`, enquanto `pptr` é um ponteiro para ponteiro, armazenando o endereço de `ptr`.


### 🔹 **Acessando Valores Usando Ponteiros para Ponteiros:**
Para acessar o valor original de uma variável usando um ponteiro para ponteiro, é necessário realizar a desreferência em **dois níveis**. O primeiro nível fornece o ponteiro, e o segundo nível fornece o valor original.

```cpp
int numero = 10;
int *ptr = &numero;   // 'ptr' aponta para 'numero'
int **pptr = &ptr; // 'pptr' aponta para 'ptr'

std::cout << numero << std::endl;  // Saída: 10
std::cout << *ptr << std::endl;    // Saída: 10
std::cout << **pptr << std::endl;  // Saída: 10
```

Nesse exemplo, `**pptr` permite o acesso ao valor de `numero` através de **dois níveis** de indireção. Esse mecanismo de ponteiros aninhados pode ser especialmente útil quando manipulamos arrays multidimensionais ou estruturas complexas.

---

## 🔵 Referências (&)
Em C++, além de ponteiros, podemos usar **referências**, que são apelidos para variáveis existentes. Uma referência não ocupa novo espaço de memória e não pode ser "reapontada" após ser inicializada.

**Declaração e uso:**

```cpp
int x = 10;
int &ref = x; // 'ref' é uma referência para 'x'

ref = 20; // Altera 'x' também

std::cout << x << std::endl; // Saída: 20
```

### 🔹 Diferenças entre ponteiros e referências:

| ``Ponteiro``                                       | ``Referência``                                 |
|---------------------------------------------------|----------------------------------------------|
| Pode ser ``nullptr`` ou não inicializado            | Deve ser inicializada na declaração           |
| Pode apontar para diferentes locais                | Sempre refere a mesma variável                |
| Usa operador ``*`` para acessar o valor            | Acesso direto como a variável original        |

---

## 🔍 O que é alocação dinâmica ?
A **alocação dinâmica de memória** é o processo de reservar espaço na memória **durante a execução do programa**, em vez de definir antecipadamente (em tempo de compilação) o quanto será utilizado. Isso oferece **flexibilidade** para trabalhar com quantidades variáveis de dados e permite que programas se adaptem a diferentes cenários de uso.

Em C++, isso pode ser feito através do `new` e `delete` que manipulam diretamente a memória do computador. Ao contrário da **alocação estática**, onde o espaço é fixo e limitado (como em arrays com tamanho definido), a alocação dinâmica permite:

- Criar variáveis ou estruturas de dados cujo tamanho só é conhecido em **tempo de execução**;

- Economizar memória, usando apenas o necessário;

- Reutilizar e liberar espaços de memória conforme o programa evolui;

- Criar estruturas de dados dinâmicas como listas encadeadas, árvores, filas e muito mais.

**Por que usar alocação dinâmica?:**
 Imagine um programa que lê notas de alunos. Com arrays estáticos, precisaríamos definir um limite máximo de alunos (por exemplo, `float notas[100];`). E se tivermos 500? Ou só 12? Isso desperdiça memória ou impede o funcionamento. Com alocação dinâmica, podemos ajustar o espaço exatamente ao necessário.

---

## 🔵 Alocação dinâmica com `new` e `delete`
Em C++, a maneira recomendada de fazer alocação dinâmica de memória é utilizando os operadores `new` e `delete`, que substituem as funções da biblioteca `<stdlib.h>` usadas em C (`malloc`, `calloc`, `realloc`, `free`). Eles são mais seguros e integrados com o sistema de tipos do C++.

### 🔹 O operador `new`
O operador `new` aloca dinamicamente memória para um objeto ou um array de objetos no heap e retorna um ponteiro do tipo apropriado, dispensando a necessidade de cast (diferente do `malloc` em C).

**Sintaxe:**
```cpp
tipo* ponteiro = new tipo;
```

Ou para alocar um vetor:

```cpp
tipo* ponteiro = new tipo[tamanho];
```

**Exemplo - Alocando um inteiro:**
```cpp
#include <iostream>
using namespace std;

int main() {
    int* p = new int;  // aloca espaço para 1 inteiro

    *p = 42;           // armazena valor no espaço alocado
    cout << "Valor: " << *p << endl;

    delete p;         // libera a memória alocada
    p = nullptr;      // boa prática: evita ponteiro danificado

    return 0;
}
```

**Exemplo - Alocando um vetor de inteiros:**
```cpp
#include <iostream>
using namespace std;

int main() {
    int tamanho = 5;
    int* vetor = new int[tamanho];  // aloca vetor de 5 inteiros

    for (int i = 0; i < tamanho; i++) {
        vetor[i] = i * 10;
        cout << "vetor[" << i << "] = " << vetor[i] << endl;
    }

    delete[] vetor;   // libera o vetor inteiro
    vetor = nullptr;  // boa prática

    return 0;
}
```

### 🔹 O operador `delete`
O operador `delete` libera a memória alocada com `new`. O operador `delete[]` libera memória alocada para vetores com `new[]`.

> ❗ **IMPORTANTE:** Sempre use `delete[]` para memória alocada com `new[]`. Usar delete simples para um array gera comportamento indefinido!

**Exemplo de erro comum:**
```cpp
int* vetor = new int[10];
delete vetor;    // ERRO! Deveria ser delete[] vetor;
```

### 🔹 Boas práticas com `new` e `delete`
- Sempre inicialize ponteiros após a alocação.
- Use `delete` ou `delete[]` assim que a memória não for mais necessária.
- Após `delete`, defina o ponteiro como `nullptr` para evitar ponteiros danificados (dangling pointers).
- Nunca use `delete` em um ponteiro que já foi liberado ou que não foi alocado com `new`.
- Para programas modernos, prefira smart pointers (como `std::unique_ptr`, que veremos adiante).

---

## 🔵 Vetores Dinâmicos
Quando o tamanho de um vetor só é conhecido **em tempo de execução**, usamos alocação dinâmica para criá-lo. Isso é especialmente útil para ler dados cuja quantidade não sabemos de antemão (como números digitados pelo usuário, registros de arquivos, etc).

### 🔍 Como criar um vetor dinâmico?
Usando o operador `new[]`, podemos criar um vetor cujo tamanho é definido durante a execução do programa.

**Exemplo - Criando um vetor de tamanho definido pelo usuário:**

```cpp
#include <iostream>
using namespace std;

int main() {
    int tamanho;

    cout << "Digite o tamanho do vetor: ";
    cin >> tamanho;

    int* vetor = new int[tamanho]; // aloca vetor com tamanho escolhido

    // preenchendo o vetor
    for(int i = 0; i < tamanho; i++) {
        cout << "Digite o valor para vetor[" << i << "]: ";
        cin >> vetor[i];
    }

    // mostrando o vetor
    cout << "Valores do vetor: ";
    for(int i = 0; i < tamanho; i++) {
        cout << vetor[i] << " ";
    }

    delete[] vetor;  // libera o vetor
    vetor = nullptr; // evita ponteiro danificado

    return 0;
}
```

### 🔹 Modificando um vetor dinâmico
Se precisar de um vetor maior (ou menor), é necessário:

1. Alocar um novo vetor de tamanho diferente;
2. Copiar os valores do antigo para o novo;
3. Liberar a memória do vetor antigo.

**Exemplo - Redimensionando um vetor:**
```cpp
#include <iostream>
using namespace std;

int main() {
    int tamanho = 3;
    int* vetor = new int[tamanho];

    // inicializa vetor original
    for(int i = 0; i < tamanho; i++) {
        vetor[i] = i + 1;
    }

    // deseja aumentar para tamanho 5
    int novoTamanho = 5;
    int* novoVetor = new int[novoTamanho];

    // copia os valores do vetor antigo
    for(int i = 0; i < tamanho; i++) {
        novoVetor[i] = vetor[i];
    }

    // preenche as novas posições
    for(int i = tamanho; i < novoTamanho; i++) {
        novoVetor[i] = 0; // valor padrão
    }

    delete[] vetor;  // libera o vetor antigo
    vetor = novoVetor; // o ponteiro aponta agora para o novo vetor
    tamanho = novoTamanho;

    // mostra o vetor redimensionado
    for(int i = 0; i < tamanho; i++) {
        cout << vetor[i] << " ";
    }

    delete[] vetor; // libera a memória final
    vetor = nullptr;

    return 0;
}
```

### 🔹 Boas práticas com vetores dinâmicos

- Sempre usar `delete[]` para liberar memória de vetores alocados com `new[]`.
- Após liberar, defina o ponteiro como `nullptr` para evitar uso acidental.
- Cuidado ao redimensionar vetores: C++ puro não tem função equivalente ao `realloc` de C; a cópia precisa ser manual.
- Para casos reais e modernos, prefira usar o container `std::vector`, que faz isso automaticamente (será estudado mais adiante).

---

## 🔵 Introdução a std::unique_ptr
Em programas C++ modernos, é recomendado evitar a manipulação direta de memória com `new` e `delete`, pois isso pode gerar problemas como **vazamento de memória** ou **uso de ponteiros danificados**. Para tornar o código mais seguro e fácil de manter, a biblioteca padrão C++ oferece os **Smart Pointers** — ponteiros inteligentes que gerenciam automaticamente a memória alocada. O mais simples deles é o `std::unique_ptr`.

### 🔍 O que é `std::unique_ptr`?
O `std::unique_ptr` é um ponteiro exclusivo que assume a responsabilidade total por um objeto alocado dinamicamente. Quando o `unique_ptr` sai de escopo, ele **libera automaticamente** a memória, sem a necessidade de chamar `delete`.

**Vantagens:**
- Evita vazamentos de memória.
- Código mais limpo e seguro.
- Não permite cópias — só pode haver um dono do recurso.

### 🔍 Como usar `std::unique_ptr`?
Para usar, inclua a biblioteca:

```cpp
#include <memory>
```

**Exemplo 1 – Alocando um único inteiro dinamicamente:**

```cpp
#include <iostream>
#include <memory>  // Necessário para smart pointers
using namespace std;

int main() {
    unique_ptr<int> ponteiro = make_unique<int>(42); // cria um inteiro dinâmico com valor 42

    cout << "Valor: " << *ponteiro << endl;

    // Não é necessário chamar delete, o unique_ptr libera automaticamente!

    return 0;
}
```

**Observe:**
- Usamos `make_unique`, forma recomendada para criar `unique_ptr`.
- O recurso é automaticamente liberado quando o `unique_ptr` sai do escopo.

**Exemplo 2 – Vetor dinâmico com `unique_ptr`:**

```cpp
#include <iostream>
#include <memory>
using namespace std;

int main() {
    int tamanho = 5;

    unique_ptr<int[]> vetor = make_unique<int[]>(tamanho);

    for(int i = 0; i < tamanho; i++) {
        vetor[i] = i * 10;
    }

    for(int i = 0; i < tamanho; i++) {
        cout << vetor[i] << " ";
    }

    // Memória automaticamente liberada ao final do escopo!

    return 0;
}
```

### 🔹 Restrições do `unique_ptr`

- Não permite cópias:

```cpp
unique_ptr<int> p1 = make_unique<int>(5);
// unique_ptr<int> p2 = p1; // ❌ Erro! Cópia não permitida
```

- Mas permite transferência de posse (move semantics):

```cpp
unique_ptr<int> p1 = make_unique<int>(5);
unique_ptr<int> p2 = move(p1); // ✔️ Transferência permitida
```

---

## 🔵 Introdução ao `std::shared_ptr`
O `std::shared_ptr` é outro tipo de **smart pointer** da biblioteca padrão C++. Ele permite que **dois ou mais ponteiros compartilhem a posse de um mesmo recurso alocado dinamicamente**. O recurso só será liberado quando todos os `shared_ptr` que o compartilham forem destruídos (ou resetados). Isso é útil em casos onde o mesmo objeto precisa ser usado em vários lugares do programa sem preocupação manual com o gerenciamento da memória.

### 🔍 O que é `std::shared_ptr`?

- Gerencia automaticamente a memória.
- Vários `shared_ptr` podem apontar para o **mesmo recurso**.
- A memória é liberada somente quando o último `shared_ptr` for destruído.

### 🔍 Como usar `std::shared_ptr`?

Inclua a biblioteca:

```cpp
#include <memory>
```

**Exemplo 1 – Uso básico:**

```cpp
#include <iostream>
#include <memory>
using namespace std;

int main() {
    shared_ptr<int> p1 = make_shared<int>(100); // cria um inteiro com valor 100

    cout << "Valor: " << *p1 << endl;

    // Criando outro shared_ptr que compartilha o mesmo recurso
    shared_ptr<int> p2 = p1;

    cout << "Valor no segundo ponteiro: " << *p2 << endl;

    // Quando p1 e p2 saírem do escopo, a memória será liberada automaticamente!

    return 0;
}
```

> ✔️ Ambos `p1` e `p2` possuem o mesmo ponteiro. O recurso só será liberado quando o último `shared_ptr` sair do escopo.

**Exemplo 2 – Contagem de Referências:**

```cpp
#include <iostream>
#include <memory>
using namespace std;

int main() {
    shared_ptr<int> p1 = make_shared<int>(50);
    cout << "Contagem de referências: " << p1.use_count() << endl; // 1

    shared_ptr<int> p2 = p1;
    cout << "Contagem de referências: " << p1.use_count() << endl; // 2

    p2.reset(); // p2 deixa de apontar para o recurso
    cout << "Contagem de referências após reset: " << p1.use_count() << endl; // 1

    return 0;
}
```

---