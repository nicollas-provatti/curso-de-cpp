# Aula 13 - STL (Standard Template Library)

---



## 🔵 Introdução ao STL

### 🔍 O que é a STL
A **STL (Standard Template Library)** é uma biblioteca da linguagem C++ que fornece estruturas de dados e algoritmos prontos para uso.
Ela foi criada para **facilitar o desenvolvimento** e **evitar que o programador tenha que reinventar a roda** sempre que precisar de listas, filas, mapas, etc.

### 🔹 Vantagens do uso da STL

- **Produtividade**: já traz implementações prontas de estruturas de dados e algoritmos.
- **Eficiência**: as implementações são otimizadas.
- **Flexibilidade**: funciona com diferentes tipos de dados graças ao uso de **templates**.
- **Padronização**: é parte do C++ moderno e usada em todo o mundo.

<div style="height: 1px"></div>

### 🔹 Componentes principais da STL

- **Contêineres** → estruturas de dados genéricas (ex: `vector`, `list`, `map`).
- **Iteradores** → objetos que permitem percorrer os elementos dos contêineres (semelhantes a ponteiros).
- **Algoritmos** → funções já prontas para manipular os contêineres (ex: `sort`, `find`, `count`).
- **Functores**  → objetos que podem ser chamados como funções (mais avançado).

---

## 🔵 Vector (Array Dinâmico)

### 🔍 O que é um `vector`?

O `vector` é um **contêiner sequencial** da STL que funciona como um **array dinâmico**:

- Armazena elementos em sequência (como um array comum).
- Seu tamanho **cresce automaticamente** quando novos elementos são adicionados.
- Permite acesso direto aos elementos usando índice (`[]`).

<div style="height: 1px"></div>

### 🔹 Características principais

- Os elementos são armazenados em **memória contígua** (igual array).
- Acesso rápido a qualquer elemento (`O(1)` para leitura/escrita por índice).
- Inserções e remoções no **final** são rápidas (`push_back` e `pop_back`).
- Inserções/remoções no **meio** podem ser mais custosas, pois deslocam os elementos.

<div style="height: 1px"></div>

### 🔹 Métodos mais usados

- `push_back(valor)` → adiciona um elemento ao final.
- `pop_back()` → remove o último elemento.
- `size()` → retorna o número de elementos.
- `empty()` → verifica se está vazio.
- `clear()` → remove todos os elementos.
- `at(indice)` → acessa o elemento com verificação de limite.
- `[]` → acessa o elemento diretamente.
- `front()` → acessa o primeiro elemento.
- `back()` → acessa o último elemento.

<div style="height: 1px"></div>

### 🔹Exemplo prático

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Criando um vector de inteiros
    vector<int> numeros;

    // Adicionando elementos
    numeros.push_back(5);
    numeros.push_back(10);
    numeros.push_back(15);

    cout << "Tamanho do vector: " << numeros.size() << endl;

    // Acessando elementos
    cout << "Primeiro elemento: " << numeros.front() << endl;
    cout << "Último elemento: " << numeros.back() << endl;

    // Percorrendo com for tradicional
    cout << "Elementos: ";
    for (int i = 0; i < numeros.size(); i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    // Removendo o último elemento
    numeros.pop_back();
    cout << "Após remover último elemento: ";
    for (int n : numeros) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}
```

**Saída esperada:**

```yaml
Tamanho do vector: 3
Primeiro elemento: 5
Último elemento: 15
Elementos: 5 10 15 
Após remover último elemento: 5 10
```

---

### 🔵 List (Lista Duplamente Encadeada)

### 🔍 O que é uma list?

O `list` é um **contêiner sequencial da STL** que representa **uma lista duplamente encadeada**:

- Cada elemento conhece o anterior e o próximo.
- Permite inserções e remoções rápidas **em qualquer posição**.
- Não permite acesso direto por índice como o `vector`; é necessário percorrer a lista para acessar elementos.

<div style="height: 1px"></div>

### 🔹 Características principais

- Inserção/remoção eficiente em **qualquer posição** (`O(1)` se tiver o iterador).
- Percurso sequencial (não oferece acesso direto por índice).
- Útil quando há muitas operações de inserção/removal no **meio da sequência**.

<div style="height: 1px"></div>

### 🔹 Métodos mais usados

- `push_back(valor)` → adiciona ao final.
- `push_front(valor)` → adiciona no início.
- `pop_back()` → remove o último.
- `pop_front()` → remove o primeiro.
- `insert(pos, valor)` → insere antes da posição indicada (usando iterador).
- `erase(pos)` → remove o elemento na posição indicada (usando iterador).
- `size()` → retorna o número de elementos.
- `empty()` → verifica se está vazia.
- `clear()` → remove todos os elementos.

<div style="height: 1px"></div>

### 🔹 Exemplo prático

```cpp
#include <iostream>
#include <list>
using namespace std;

int main() {
    // Criando uma lista de inteiros
    list<int> numeros;

    // Adicionando elementos
    numeros.push_back(10);
    numeros.push_back(20);
    numeros.push_front(5); // adiciona no início

    cout << "Elementos da lista: ";
    for (int n : numeros) {
        cout << n << " ";
    }
    cout << endl;

    // Removendo elementos
    numeros.pop_back();
    numeros.pop_front();

    cout << "Após remover elementos do início e do fim: ";
    for (int n : numeros) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}
```

**Saída esperada:**
```yaml
Elementos da lista: 5 10 20 
Após remover elementos do início e do fim: 10
```

<br>

**Observação importante:** Diferente do vector, a list não permite acesso direto pelo índice (numeros[0] não funciona). Para percorrer ou acessar elementos específicos, usamos iteradores (que veremos em detalhe depois).

---

## 🔵 Queue (Fila)

### 🔍 O que é uma queue?

O `queue` é um **contêiner adaptador** da STL que implementa a estrutura **FIFO (First In, First Out)**:

- O primeiro elemento inserido é o primeiro a ser removido.
- Ideal para situações como filas de atendimento, tarefas a serem processadas em ordem, etc.

<div style="height: 1px"></div>

### 🔹 Características principais

- Inserção no **final** da fila (`push`).
- Remoção no **início** da fila (`pop`).
- Não permite acesso direto aos elementos do meio da fila.
- O elemento no início pode ser acessado com `front()`.
- O último elemento pode ser acessado com `back()`.

<div style="height: 1px"></div>

### 🔹 Métodos mais usados

- `push(valor)` → adiciona um elemento ao final da fila.
- `pop()` → remove o elemento do início.
- `front()` → retorna o elemento do início.
- `back()` → retorna o elemento do final.
- `empty()` → verifica se a fila está vazia.
- `size()` → retorna o número de elementos.

<div style="height: 1px"></div>

### 🔹 Exemplo prático

```cpp
#include <iostream>
#include <queue>
using namespace std;

int main() {
    // Criando uma fila de inteiros
    queue<int> fila;

    // Adicionando elementos
    fila.push(10);
    fila.push(20);
    fila.push(30);

    cout << "Primeiro elemento: " << fila.front() << endl;
    cout << "Último elemento: " << fila.back() << endl;

    // Removendo elementos
    fila.pop(); // remove o 10

    cout << "Após remover o primeiro elemento, o novo início é: " << fila.front() << endl;

    return 0;
}
```

**Saída esperada:**

```yaml
Primeiro elemento: 10
Último elemento: 30
Após remover o primeiro elemento, o novo início é: 20
```

<br>
 
**Observação:** O `queue` **não permite acesso por índice**. Para percorrer todos os elementos, geralmente usamos um **loop removendo elementos** até a fila ficar vazia ou iteradores em `deque` (se precisar percorrer sem remover).

---

## 🔵 Deque (Double-Ended Queue)

### 🔍 O que é um `deque`?

O `deque` (double-ended queue) é um **contêiner sequencial** da STL que funciona como um **vetor dinâmico**, permitindo inserções e remoções rápidas tanto no **início** quanto no **fim**:

- Semelhante a `queue`, mas mais flexível.
- Útil quando precisamos de acesso eficiente às extremidades.

<div style="height: 1px"></div>

### 🔹 Características principais

- Inserção/remoção rápida nas **duas extremidades** (início e fim).  
- Acesso direto a elementos por índice (`O(1)` para leitura/escrita).  
- Pode ser percorrido usando **loops** ou **iteradores**.  
- Mais eficiente que `vector` para operações no início da sequência.

<div style="height: 1px"></div>

### 🔹 Métodos mais usados

- `push_back(valor)` → adiciona no final.  
- `push_front(valor)` → adiciona no início.  
- `pop_back()` → remove do final.  
- `pop_front()` → remove do início.  
- `at(indice)` → acessa o elemento pelo índice com verificação.  
- `operator[]` → acessa o elemento diretamente pelo índice.  
- `size()` → retorna o número de elementos.  
- `empty()` → verifica se está vazio.  
- `clear()` → remove todos os elementos.

<div style="height: 1px"></div>

### 🔹 Exemplo prático

```cpp
#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;

    dq.push_back(10);   // final
    dq.push_front(5);   // início
    dq.push_back(20);   // final

    cout << "Elementos do deque: ";
    for (int n : dq) cout << n << " ";
    cout << endl;

    dq.pop_front(); // remove o 5
    dq.pop_back();  // remove o 20

    cout << "Após remover elementos do início e do fim: ";
    for (int n : dq) cout << n << " ";
    cout << endl;

    return 0;
}
```

**Saída esperada:**

```yaml
Elementos do deque: 5 10 20 
Após remover elementos do início e do fim: 10
```

<br>

**Observação:** O `deque` combina **flexibilidade da lista** (remoção/inserção nas extremidades) com **acesso rápido por índice** (como vector).
É a escolha ideal quando precisamos de **estrutura dupla com operações rápidas nas duas extremidades**.

---


## 🔵 Set (Conjunto)

### 🔍 O que é um set?

O `set` é um **contêiner associativo** da STL que armazena **valores únicos** de forma **ordenada automaticamente**.

- Não permite elementos duplicados.
- Mantém os elementos ordenados (por padrão, em ordem crescente).
- Útil para representar coleções matemáticas, como conjuntos, onde não há repetição.

<div style="height: 1px"></div>

### 🔹 Características principais

- Todos os elementos são **únicos**.
- Armazenamento **ordenado automaticamente**.
- Inserções, buscas e remoções geralmente são rápidas (`O(log n)`).
- Não permite acesso por índice (`set` não é sequencial).

<div style="height: 1px"></div>

### 🔹 Métodos mais usados

- `insert(valor)` → adiciona um elemento (não adiciona se já existir).
- `erase(valor)` → remove um elemento.
- `find(valor)` → retorna um iterador para o elemento (ou `end()` se não encontrado).
- `count(valor)` → retorna `1` se o elemento existir, `0` caso contrário.
- `size()` → retorna o número de elementos.
- `empty()` → verifica se está vazio.
- `clear()` → remove todos os elementos.

<div style="height: 1px"></div>

### 🔹 Exemplo prático

```cpp
#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> numeros;

    // Adicionando elementos
    numeros.insert(10);
    numeros.insert(5);
    numeros.insert(20);
    numeros.insert(10); // duplicado, não será adicionado

    cout << "Elementos do set: ";
    for (int n : numeros) {
        cout << n << " ";
    }
    cout << endl;

    // Removendo elemento
    numeros.erase(5);

    cout << "Após remover 5: ";
    for (int n : numeros) {
        cout << n << " ";
    }
    cout << endl;

    // Verificando existência
    if (numeros.count(10)) {
        cout << "10 está no set." << endl;
    }

    return 0;
}
```

**Saída esperada:**

```yaml
Elementos do set: 5 10 20 
Após remover 5: 10 20 
10 está no set.
```

<br>

**Observação:** O `set` é ótimo quando você quer **armazenar elementos únicos** e **manter ordem automaticamente**.
Se quiser permitir duplicatas, usaríamos o `multiset`.

---

## 🔵 Map (Mapa / Dicionário)

### 🔍 O que é um map?

O `map` é um **contêiner associativo** da STL que armazena **pares de chave-valor**:

- Cada chave é **única**.
- Cada chave está associada a **um valor**.
- Útil **para busca rápida**, tabelas de símbolos, dicionários, contadores, etc.

<div style="height: 1px"></div>

### 🔹 Características principais

- Chaves **únicas**; valores podem se repetir.
- Os elementos são **ordenados pela chave**.
- Inserção, busca e remoção têm custo **O(log n)**.
- Não permite acesso por índice; o acesso é feito através da **chave**.

<div style="height: 1px"></div>

### 🔹 Métodos mais usados

- `insert({chave, valor})` → adiciona um par chave-valor.
- `map[chave] = valor` → insere ou atualiza o valor da chave.
- `erase(chave)` → remove o elemento pela chave.
- `find(chave)` → retorna iterador para a chave (ou `end()` se não existir).
- `count(chave)` → retorna `1` se a chave existir, `0` caso contrário.
- `size()` → retorna o número de elementos.
- `empty()` → verifica se está vazio.
- `clear()` → remove todos os elementos.

<div style="height: 1px"></div>

### 🔹 Exemplo prático

```cpp
#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> idade;

    // Inserindo elementos
    idade["Lucas"] = 21;
    idade["Maria"] = 23;
    idade.insert({"Pedro", 30});

    cout << "Idades:\n";
    for (auto par : idade) {
        cout << par.first << " tem " << par.second << " anos.\n";
    }

    // Atualizando valor
    idade["Maria"] = 24;

    // Removendo elemento
    idade.erase("Pedro");

    cout << "\nApós atualizar e remover:\n";
    for (auto par : idade) {
        cout << par.first << " tem " << par.second << " anos.\n";
    }

    return 0;
}
```

**Saída esperada:**

```yaml
Idades:
Lucas tem 21 anos.
Maria tem 23 anos.
Pedro tem 30 anos.

Após atualizar e remover:
Lucas tem 21 anos.
Maria tem 24 anos.
```

<br>

**Observação:** O map é ideal quando você precisa associar informações a uma chave única e realizar buscas rápidas.
Se permitir múltiplos valores para a mesma chave, usaríamos o multimap.

---

## 🔵 Iterators

### 🔍 O que é um iterator?

Um **iterator** é um objeto que permite **percorrer elementos** de um contêiner da STL de forma **sequencial**, sem precisar conhecer a estrutura interna do contêiner.

- Funciona como **um ponteiro abstrato** para o elemento atual.
- Cada contêiner possui seu próprio tipo de iterator.

<div style="height: 1px"></div>

### 🔹 Características principais

- Permite percorrer **vetores, listas, sets, maps**, etc.
- Suporta operações como:

    - `++` → avançar para o próximo elemento
    - `--` → voltar para o elemento anterior (dependendo do contêiner)
    - `*` → acessar o valor do elemento atual

- Mantém o código **genérico**, independente do tipo de contêiner.

<div style="height: 1px"></div>

### 🔹 Métodos importantes

- `begin()` → retorna o iterator para o **primeiro elemento**.
- `end()` → retorna o iterator **após o último elemento** (não aponta para um valor válido).
- `rbegin()` e `rend()` → iterators reversos (do último para o primeiro).

<div style="height: 1px"></div>

### 🔹 Exemplo prático com vector

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numeros = {10, 20, 30, 40, 50};

    // Usando iterator para percorrer o vector
    cout << "Elementos do vector: ";
    for (vector<int>::iterator it = numeros.begin(); it != numeros.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
```

**Saída esperada:**

```yaml
Elementos do vector: 10 20 30 40 50
```

### 🔹 Exemplo prático com map

```cpp
#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> idade;
    idade["Lucas"] = 21;
    idade["Maria"] = 24;

    // Usando iterator para percorrer o map
    for (map<string, int>::iterator it = idade.begin(); it != idade.end(); ++it) {
        cout << it->first << " tem " << it->second << " anos." << endl;
    }

    return 0;
}
```

**Saída esperada:**

```yaml
Lucas tem 21 anos.
Maria tem 24 anos.
```

<br>

**Observação:** Iterators são fundamentais para **manipular qualquer contêiner STL de forma genérica**.
Eles permitem escrever **loops independentes do tipo do contêiner** e são especialmente úteis em **algoritmos STL**.

---

## 🔵 Algorithms (Algoritmos da STL)

### 🔍 O que são algorithms?

Os **algorithms** da STL são funções prontas que permitem realizar **operações comuns** em contêineres de forma eficiente e genérica.

- Podem ser aplicados em `vector`, `list`, `deque`, `set`, `map` (com adaptadores), etc.
- Evitam a necessidade de escrever loops manuais para tarefas frequentes.

<div style="height: 1px"></div>

### 🔹 Principais algoritmos

**1. Ordenação**

- `sort(begin, end)` → ordena elementos em ordem crescente.
- `reverse(begin, end)` → inverte a ordem dos elementos.

**2. Busca**

- `find(begin, end, valor)` → retorna iterator do elemento ou `end()` se não encontrado.
- `binary_search(begin, end, valor)` → verifica se elemento existe (array ou vector precisa estar ordenado).

**3. Manipulação**

- `count(begin, end, valor)` → conta quantas vezes o valor aparece.
- `max_element(begin, end)` / `min_element(begin, end)` → retorna iterator para o maior/menor elemento.
- `accumulate(begin, end, inicial)` → soma (ou acumula) os elementos.

**4. Modificação**

- `fill(begin, end, valor)` → preenche elementos com um valor.
- `swap(a, b)` → troca dois elementos.

<div style="height: 1px"></div>

### 🔹 Exemplo prático com vector

```cpp
#include <iostream>
#include <vector>
#include <algorithm> // para sort, find
#include <numeric>   // para accumulate
using namespace std;

int main() {
    vector<int> numeros = {10, 5, 20, 15, 5};

    // Ordenar
    sort(numeros.begin(), numeros.end());

    cout << "Ordenado: ";
    for (int n : numeros) cout << n << " ";
    cout << endl;

    // Buscar
    auto it = find(numeros.begin(), numeros.end(), 15);
    if (it != numeros.end())
        cout << "15 encontrado no índice " << distance(numeros.begin(), it) << endl;

    // Soma de elementos
    int soma = accumulate(numeros.begin(), numeros.end(), 0);
    cout << "Soma: " << soma << endl;

    // Contar elementos iguais a 5
    int qtd = count(numeros.begin(), numeros.end(), 5);
    cout << "Número de elementos 5: " << qtd << endl;

    return 0;
}
```

**Saída esperada:**

```yaml
Ordenado: 5 5 10 15 20 
15 encontrado no índice 3
Soma: 55
Número de elementos 5: 2
```

<br>

**Observação:** Os **algorithms** da STL tornam o código mais **limpo, eficiente e legível**, além de evitar erros em loops manuais.
Eles podem ser combinados com **iterators** para trabalhar com qualquer contêiner STL.