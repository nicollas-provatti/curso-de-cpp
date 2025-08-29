# 📘 Aula 9 – Struct

## 🔍 O que é struct ? 
Em C++, uma `struct` (ou estrutura) é **um tipo de dado composto** que permite **agrupar diferentes tipos de dados** sob um único nome. Elas são muito úteis para organizar dados relacionados de maneira mais eficiente. Por exemplo, imagine que queremos armazenar informações de um aluno: nome, idade e nota. Sem uma struct, precisaríamos criar variáveis separadas para cada dado, sem relação explícita entre elas:

```c++
string nomeAluno;
int idadeAluno;
float notaAluno;
```

Com o aumento do número de alunos ou de informações, isso se torna difícil de organizar e manter. Usando uma `struct`, podemos agrupar todos os dados relacionados em um único tipo:

```c++
struct Aluno {
    string nome;
    int idade;
    float nota;
};

// Criando uma variável do tipo Aluno
Aluno aluno1;
aluno1.nome = "Maria";
aluno1.idade = 20;
aluno1.nota = 9.5;
```

Dessa forma, todos os dados do aluno ficam organizados sob um único nome (`aluno1`), tornando o código mais legível e fácil de gerenciar, especialmente quando lidamos com muitos alunos.

---

## 🔵 Operações com structs

### 🔹 Declaração
A declaração de uma `struct` define o formato da estrutura, ou seja, os tipos e a quantidade de dados que ela conterá:

```cpp
struct Aluno {
    string nome;
    int idade;
    float nota;
};
```
Geralmente uma `struct` é declarada globalmente.

<div style="height: 1px"></div>

### 🔹 Atribuição 
A atribuição de uma `struct` envolve criar uma variável do tipo da `struct` e depois atribuir valores aos seus membros:

**Exemplo:**
```cpp
struct Aluno aluno;
aluno.idade = 20;
aluno.nota = 8.5;
aluno.nome = "João";
```

<div style="height: 1px"></div>

### 🔹 Inicialização 

A inicialização de uma struct consiste em atribuir valores aos seus membros no momento em que a variável é criada. Isso torna o código mais conciso e organizado:

```c
struct Aluno aluno = {"João", 20, 8.5};
```

<div style="height: 1px"></div>

### 🔹 Exemplo completo 
```cpp
#include <iostream>
#include <string>
using namespace std;

struct Aluno {
    string nome;
    int idade;
    float nota;
};

int main(){
    struct Aluno aluno;
    aluno.idade = 20;
    aluno.nota = 8.5;
    aluno.nome = "João";

    return 0;
}
```

---

### 🔵 Acesso aos Membros de uma Struct
Após declarar e inicializar uma struct, o próximo passo é acessar e manipular seus membros. Em C, os membros de uma struct são acessados usando o operador de **ponto (.)** para variáveis do tipo struct e o operador de **seta (->)** para ponteiros para structs. Entender como acessar e modificar os membros é fundamental para utilizar structs de maneira eficaz.

Para acessar um membro de uma struct, você utiliza o operador de **ponto (.)**. O operador de ponto é usado quando você tem uma variável struct e deseja acessar um de seus membros diretamente.

**Exemplo:**

```cpp
#include <iostream>
#include <string>
using namespace std;

struct Aluno {
    string nome;
    int idade;
    float nota;
};

int main(){
    struct Aluno aluno = {"João", 20, 8.5};

    cout << "Nome: " << aluno.nome << endl;
    cout << "Idade: " << aluno.idade << endl;
    cout << "Nota: " << aluno.nota << endl;

    return 0;
}
```
> Nesse exemplo: 
> - `aluno.nome` acessa o membro `nome`.
> - `aluno.idade` acessa o membro `idade`.
> - `aluno.nota` acessa o membro `nota`.

<div style="height: 10px"></div>

Para modificar os valores de um membro de uma struct, você usa o operador de **ponto (.)** e atribui um novo valor ao membro.

<div style="height: 20px"></div>

**Exemplo:**
```cpp
#include <iostream>
#include <string>
using namespace std;

struct Aluno {
    char nome[50];
    int idade;
    float nota;
};

int main(){
    struct Aluno aluno = {"João", 20, 8.5};

    aluno.idade = 21;
    aluno.nota = 8.0;

    return 0;
}
```
> Nesse exemplo, `aluno.idade` e  `aluno.nota` são atualizados com os novos valores.

--- 

## 🔵 Construtores em Structs
Em C++, uma `struct` pode ter **construtores**, assim como as classes. Um construtor é uma função especial que é chamada automaticamente no momento da criação de um objeto, permitindo **inicializar** seus membros de forma prática e segura.

### 🔹 Características do construtor
1. **Mesmo nome da struct:** O construtor deve ter exatamente o mesmo nome da struct.


2. **Sem tipo de retorno:** Diferente de funções normais, o construtor não retorna valor, nem mesmo void.


3. **Chamada automática:** O construtor é invocado sempre que um objeto da struct é criado.


4. **Sobrecarga é possível:** Podemos ter mais de um construtor com diferentes listas de parâmetros, permitindo diferentes formas de inicialização.

<div style="height: 20px"></div>

**Exemplo:**
```cpp
#include <iostream>
#include <string>

using namespace std;

struct Aluno {
    string nome;
    int idade;
    float nota;

    // Construtor da struct
    Aluno(string n, int i, float nt) {
        nome = n;
        idade = i;
        nota = nt;
    }
};

int main() {
    // O construtor é chamado automaticamente
    Aluno aluno1("Maria", 20, 9.5);

    cout << "Nome: " << aluno1.nome << "\n";
    cout << "Idade: " << aluno1.idade << "\n";
    cout << "Nota: " << aluno1.nota << "\n";

    return 0;
}
```
**Vantagens de usar construtor em struct:**

- Evita atribuições repetitivas após a criação do objeto.
- Garante que o objeto já seja criado em um estado válido.
- Facilita a manutenção e leitura do código, especialmente quando a struct tem muitos membros

<div style="height: 1px"></div>

### 🔹 Construtor Padrão

O construtor padrão é um construtor sem parâmetros. Ele permite criar um objeto sem precisar passar valores na hora da criação, inicializando os membros com valores definidos manualmente ou padrões.

**Exemplo:**
```cpp
#include <iostream>
#include <string>

using namespace std;

struct Aluno {
    string nome;
    int idade;
    float nota;

    // Construtor padrão
    Aluno() {
        nome = "Sem nome";
        idade = 0;
        nota = 0.0;
    }
};

int main() {
    Aluno aluno1; // Construtor padrão é chamado automaticamente

    cout << "Nome: " << aluno1.nome << "\n";
    cout << "Idade: " << aluno1.idade << "\n";
    cout << "Nota: " << aluno1.nota << "\n";

    return 0;
}
```

> Nesse exemplo, `aluno1` já é criado com valores iniciais, mesmo sem fornecer dados manualmente.

<div style="height: 1px"></div>

### 🔹 Construtor com Lista de Inicialização

A lista de inicialização é uma forma moderna e mais eficiente de inicializar os membros de uma struct (ou classe). Ela é especialmente útil quando temos constantes ou referências como membros, ou quando queremos inicializar rapidamente vários membros.

**Exemplo:**
```cpp
#include <iostream>
#include <string>

using namespace std:

struct Aluno {
    string nome;
    int idade;
    float nota;

    // Construtor usando lista de inicialização
    Aluno(string n, int i, float nt) : nome(n), idade(i), nota(nt) {}
};

int main() {
    Aluno aluno1("Maria", 20, 9.5);

    cout << "Nome: " << aluno1.nome << "\n";
    cout << "Idade: " << aluno1.idade << "\n";
    cout << "Nota: " << aluno1.nota << "\n";

    return 0;
}
```

**Vantagens da lista de inicialização:**

- Inicializa os membros diretamente, sem passar por atribuições internas.
- Evita cópias desnecessárias, tornando o código mais eficiente.
- Necessária para membros `const` ou referências, que devem ser inicializados na criação.

<div style="height: 1px"></div>

### 🔹 A palavra-chave `this`

Em C++, a palavra-chave `this` é um **ponteiro que representa o próprio objeto** dentro de um método ou construtor de uma `struct` ou `class`. Ela permite referenciar os membros do objeto atual, mesmo quando há ambiguidade com parâmetros ou variáveis locais.

**Quando usar `this`:**

1. **Parâmetros com o mesmo nome dos membros**
Se um parâmetro do construtor ou método tiver o mesmo nome de um membro, o parâmetro “esconde” o membro. Para acessar o membro da struct, usamos `this->`.
    <div style="height: 20px"></div>

    ```cpp
    struct Aluno {
        string nome;
        int idade;

        Aluno(string nome, int idade) {
            this->nome = nome; 
            this->idade = idade;
        }
    };
    ```
    > Nesse exemplo, `this->nome` refere-se ao membro da struct.

<div style="height: 10px"></div>

2. **Referência ao próprio objeto**
`this` também pode ser usado para **retornar o próprio objeto** de um método ou passar o objeto como argumento para outra função.  
    <div style="height: 20px"></div>

    ```cpp
    struct Aluno {
        string nome;

        Aluno* setNome(string nome) {
            this->nome = nome; // Atualiza o membro
            return this;      // Retorna o próprio objeto
        }
    };
    ```
    > Nesse exemplo, `this->nome = nome`atualiza o membro e `return this`retorna o próprio objeto.

---

## 🔵 Funções dentro de `struct`
Em C++, uma `struct` pode ter funções membros (ou métodos), que permitem **definir comportamentos para os objetos** criados a partir dela. Isso transforma a struct de um simples agrupamento de dados em uma estrutura **mais organizada e orientada a objeto**.

### 🔹 Características:

1. As funções são definidas **dentro** da struct.
2. Podem acessar **diretamente os membros** da struct.
3. Podem ser chamadas usando o objeto da struct.

<div style="height: 10px"></div>

**Exemplo:**
```cpp
#include <iostream>
#include <string>

using namespace std;

struct Aluno {
    string nome;
    int idade;
    float nota;

    // Função membro que imprime os dados do aluno
    void mostrarDados() {
        cout << "Nome: " << nome << "\n";
        cout << "Idade: " << idade << "\n";
        cout << "Nota: " << nota << "\n";
    }

    // Função membro que verifica aprovação
    bool aprovado() {
        return nota >= 7.0;
    }
};

int main() {
    Aluno aluno1 = {"Maria", 20, 9.5};

    aluno1.mostrarDados(); // Chamando função membro
    if (aluno1.aprovado()) {
        cout << "Aluno aprovado!\n";
    } else {
        cout << "Aluno reprovado.\n";
    }

    return 0;
}
```

**Vantagens de usar funções em struct:**

- Agrupa dados e comportamentos relacionados, melhorando a organização.
- Facilita a reutilização de código.
- Permite encapsular lógica relacionada ao objeto dentro da própria struct.

<div style="height: 10px"></div>

**Observação:** Em C++, não há diferença real entre `struct` e `class` **quanto a funções membros** — a principal diferença é o **padrão de visibilidade** (public em struct e private em class).

---

### 🔵 Arrays de Structs
Em C++, **arrays de `struct`** são uma maneira eficiente de armazenar e manipular **múltiplas instâncias de uma estrutura de dados**. Eles são especialmente úteis quando precisamos lidar com **conjuntos de dados semelhantes**, como uma lista de alunos em uma turma, em que cada aluno possui o mesmo conjunto de informações, mas com valores diferentes.

Sem arrays, seria necessário criar **uma variável separada para cada aluno**, o que se torna pouco prático e difícil de gerenciar à medida que o número de alunos cresce. Com arrays de `struct`, podemos:

- Armazenar todos os objetos de forma **organizada e indexada**.

- Acessar e manipular os dados de cada objeto de forma **simples e eficiente**.

- Iterar sobre todos os objetos usando **laços**, facilitando operações como exibição, busca ou atualização de informações.

**Exemplo típico:** armazenar informações de uma turma inteira, calcular médias ou verificar quais alunos estão aprovados, tudo de forma estruturada e clara.

<div style="height: 1px"></div>

### 🔹 **Declaração e inicialização**
Um array de structs é declarado de maneira similar a um array de qualquer outro tipo de dado. Você especifica o tipo `struct` seguido pelo nome do array e o tamanho desejado.

**Exemplo:**
```cpp
#include <iostream>
#include <string>

using namespace std;

struct Aluno {
    string nome;
    int idade;
    float nota;
};

int main() {
    struct Aluno turma[3] = {
        {"João", 20, 8.5},
        {"Maria", 22, 9.0},
        {"Pedro", 21, 7.5}
    };

    return 0;
}
```

> Nesse exemplo, `turma` é um array de 3 elementos do tipo `struct Aluno`. Cada elemento do array é uma `struct` que é inicializada com informações específicas sobre um aluno.

<div style="height: 1px"></div>

### 🔹 **Acessando e Modificando Elementos em um Array de Structs**
Para acessar ou modificar os membros de um array de structs, você usa o operador de **ponto (.)** junto com o **índice do array**. A ideia é similar ao acesso a elementos de um array normal.

**Exemplo:**
```cpp
#include <iostream>
#include <string>

using namespace std;


struct Aluno {
    string nome;
    int idade;
    float nota;
};

int main() {
    struct Aluno turma[3] = {
        {"João", 20, 8.5},
        {"Maria", 22, 9.0},
        {"Pedro", 21, 7.5}
    };

    turma[1].nota = 8.0;

    return 0;
}
```
> Nesse exemplo, o valor da nota do segundo aluno (Maria) é modificado.

<div style="height: 1px"></div>

### 🔹 **Iterando sobre um Array de Structs**
Quando você precisa realizar operações em todos os elementos de um array de structs, um loop é frequentemente utilizado para iterar através do array e acessar cada struct.

**Exemplo:**
```cpp
#include <iostream>
#include <string>
using namespace std;

struct Aluno {
    string nome;
    int idade;
    float nota;
};

int main() {
    struct Aluno turma[3] = {
        {"João", 20, 8.5},
        {"Maria", 22, 9.0},
        {"Pedro", 21, 7.5}
    };

    float somaNotas = 0.0, mediaNotas;

    for (int i = 0; i < 3; i++) {
        somaNotas += turma[i].nota;
    }

    mediaNotas = somaNotas / 3.0;

    cout << "Média: " << mediaNotas << endl;

    return 0;
}
```
> Nesse exemplo, um loop é usado para somar todas as notas e calcular a média.

<div style="height: 10px"></div>

**Exemplo com range-based for:**

```cpp
float somaNotas = 0.0;
for (Aluno &aluno : turma) {
    somaNotas += aluno.nota; // Acessa cada aluno diretamente
}
float mediaNotas = somaNotas / 3.0;
```

> Essa abordagem é mais legível e evita lidar diretamente com índices, especialmente útil em arrays grandes.



---

### 🔵 Passagem de Structs para Funções
Passar structs para funções é uma prática comum em C++ que permite que funções manipulem dados complexos e realizem operações sobre eles. 

#### 🔹 **Passagem de structs por valor:**
Quando você passa uma struct por valor, uma **cópia completa** da struct é feita e passada para a função. Isso significa que a função opera sobre a cópia, e qualquer modificação feita dentro da função não afeta o valor original da struct.

**Exemplo:**
```cpp
#include <iostream>
#include <string>

using namespace std;

struct Aluno {
    string nome;
    int idade;
    float nota;
};

void atualizarNota(Aluno aluno, float novaNota) { // passagem por valor
    aluno.nota = novaNota;
    cout << "Nota (dentro da função): " << aluno.nota << endl;  // Saída: 9
}

int main() {
    Aluno aluno1 {"João", 20, 8.5};

    atualizarNota(aluno1, 9.0);

    cout << "Nota (fora da função): " << aluno1.nota << endl;  // Saída: 8.5

    return 0;
}
```

> A struct original não foi alterada porque foi passada por valor.

---

### 🔵 Structs Aninhadas
Structs aninhadas permitem que você defina uma struct dentro de outra struct. Essa abordagem é útil para representar dados que possuem uma estrutura hierárquica ou complexa, e permite organizar melhor informações relacionadas.

**Exemplo:**
```cpp
struct Data {
    int dia;
    int mes;
    int ano;
};

struct Aluno {
    string nome;
    int idade;
    float nota;
    Data aniversario; // Struct aninhada
};
```

Aqui, a `struct Aluno` possui uma `struct Data` como um de seus membros. Para acessar a data de nascimento de um aluno:

**Exemplo:**
```cpp
struct Aluno aluno = {"João", 20, {15, 5, 2001}};
cout << "Data de nascimento: " << aluno1.aniversario.dia << "/" << aluno.aniversario.mes << "/" << aluno.aniversario.ano;
```

Para acessar membros da struct aninhada, você utiliza o operador ponto (.) **duas vezes:** uma para acessar o membro da struct externa e outra para acessar o membro da struct interna.

---

### 🔵 Alias de Tipos com `using`
Em C++, a forma **mais moderna e recomendada** para criar um alias (apelido) para tipos de dados é usando a palavra-chave `using`. Isso torna o código mais claro, simples e flexível, especialmente com tipos complexos ou templates.


**Exemplo com Struct:**

```cpp
#include <iostream>
using namespace std;

struct Aluno {
    string nome;
    int idade;
    float nota;
};

using Estudante = Aluno;  // 'Estudante' é um apelido para 'Aluno'

int main() {
    Estudante aluno = {"João", 20, 8.5};
    cout << aluno.nome << endl;
}
```

> Criamos o alias `Estudante` para o tipo `Aluno`, facilitando a leitura e a escrita do código.

---