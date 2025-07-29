# 📘 Aula 1 – Introdução à Linguagem C++

---

## 🔵 História e Aplicações do C++

### 🔹 Um Pouco de História
O C++ é uma linguagem de programação criada por **Bjarne Stroustrup** no início dos anos 1980, como uma extensão da linguagem **C**. Seu objetivo era combinar o desempenho e a eficiência de C com recursos de programação orientada a objetos.

- **1972**: Linguagem C é criada por Dennis Ritchie.

- **1983**: Surge o nome "C++", como uma brincadeira com o operador `++` de incremento do C.

- **1990**: Primeira versão comercial do C++.

- **1998**: Lançado o padrão **C++98**, seguido de várias atualizações:

    - **C++03**: Pequenas correções.

    - **C++11**: Grandes melhorias modernas (auto, lambda, smart pointers).

    - **C++14**, **C++17**, **C++20**, **C++23**: Avanços contínuos com foco em produtividade e segurança.

> ⚠️ **Curiosidade**: O nome “C++” representa a ideia de uma evolução de C — algo a mais, incrementado!

### 🔹 Onde o C++ é Usado?
C++ é uma linguagem poderosa usada em muitos contextos onde desempenho, controle de memória e eficiência são essenciais.

**Principais aplicações:**
| Área                          | Exemplos de uso                                                                |
|------------------------------|-------------------------------------------------------------------------------|
| Desenvolvimento de Sistemas  | Sistemas operacionais como Windows, Linux (partes), drivers                  |
| Jogos                        | Motores gráficos como Unreal Engine, Unity (em parte)                         |
| Softwares de Alta Performance| Navegadores como Chrome e Firefox, pacotes do Office                         |
| Sistemas Embarcados          | Eletrodomésticos, carros, automação industrial                               |
| Financeiro                   | Algoritmos de alta frequência em bolsas de valores                           |
| Ciência e Engenharia         | Simulações, softwares de CAD, modelagem matemática                            |
| Aplicações multiplataforma   | Qt, wxWidgets e outras bibliotecas permitem GUI em Windows/Linux/macOS


## 🔎 Por que aprender C++ hoje?

- Combina **baixo nível** (acesso à memória) com **alto nível** (POO, STL, templates).
- Excelente base para quem deseja aprender **outras linguagens** (C#, Java, Rust, Go).
- Muito usado em competições de programação e entrevistas técnicas.
- Oferece controle fino sobre recursos do sistema — ideal para **performance crítica**.
- Ampla comunidade, suporte e documentação.

---

## 🔵 Diferença entre C, C++ e Outras Linguagens


### 🔍 C x C++: Qual a diferença?

| Característica          | C                                        | C++                                                                 |
|-------------------------|-----------------------------------------|---------------------------------------------------------------------|
| Paradigma              | Estritamente procedural                 | Multi-paradigma: procedural + orientado a objetos + genérico        |
| Orientação a Objetos   | ❌ Não suporta                          | ✅ Suporta classes, objetos, herança, polimorfismo                   |
| Manipulação de memória | Manual com `malloc/free`               | Manual com `new/delete` + smart pointers modernos (ex: `unique_ptr`)|
| Bibliotecas padrão     | Limitadas (`stdlib`, `stdio`)          | Rica (STL: `vectors`, `maps`, `sets`, `algorithms`, etc.)           |
| Templates              | ❌ Não possui                           | ✅ Suporta templates para programação genérica                        |
| Encapsulamento         | ❌ Não possui                           | ✅ Suporta classes com atributos privados/públicos                     |
| Popularidade atual     | Uso em sistemas embarcados, SO         | Jogos, engines gráficas, aplicações de alta performance                |


> C++ é um "C com esteroides", oferecendo mais recursos e flexibilidade, mas com maior complexidade.

<br>

### 🔹 C++ x Outras Linguagens Modernas

| Linguagem | Semelhanças com C++                           | Diferenças principais                                                                     |
|-----------|----------------------------------------------|-------------------------------------------------------------------------------------------|
| Java      | Sintaxe semelhante, suporta POO             | Garbage Collector (GC), não há ponteiros explícitos, execução na JVM                     |
| Python    | Suporta POO                                  | Muito mais simples, interpretada, gerenciamento automático de memória                    |
| C#        | POO forte, sintaxe parecida                 | Integrada ao .NET, GC automático, foco em aplicações desktop/web                         |
| Rust      | Controle de memória sem GC, desempenho alto | Ownership system em vez de ponteiros brutos, segurança de memória rigorosa               |
| Go        | Compilada, eficiente                        | Sem POO clássico, gerenciamento automático de memória, concorrência simplificada         |


---

## 🔵 Estrutura Básica de um Programa em C++

Um programa em C++ é composto por **blocos de código organizados** que dizem ao computador o que fazer. Todo programa C++ segue uma estrutura mínima obrigatória.

**Exemplo:** 
```cpp
#include <iostream>  // Inclusão de biblioteca padrão para entrada/saída

using namespace std; // Permite usar cout e cin sem escrever std::cout

int main() {         // Função principal (ponto de entrada do programa)
    cout << "Olá, mundo!" << endl;  // Saída para o console
    return 0;        // Indica que o programa terminou com sucesso
}
```

### 🔹 Partes obrigatórias e suas funções

| Parte                      | O que faz?                                                                                          |
|---------------------------|---------------------------------------------------------------------------------------------------|
| ``1. Diretivas de pré-processador`` | `#include <iostream>` <br> Inclui bibliotecas necessárias (neste caso, a de entrada/saída).       |
| ``2. Namespace``          | `using namespace std;` <br> Permite usar funções da biblioteca padrão (como `cout`, `cin`) sem precisar escrever `std::` antes. |
| ``3. Função main()``       | `int main() { ... }` <br> Todo programa C++ começa a execução aqui. Deve retornar um inteiro.    |
| ``4. Comandos/Código``     | `cout << "Olá, mundo!";` <br> O que o programa deve executar.                                   |
| ``5. Retorno da função``   | `return 0;` <br> Informa ao sistema operacional que o programa terminou corretamente.            |


### ⚠️ Atenção: 
✔️ Todo comando C++ termina com ponto e vírgula ( ; ).
✔️ A função main() é obrigatória.
✔️ O uso de chaves {} delimita o início e o fim de blocos de código.
✔️ Você pode (e deve) comentar o código para torná-lo mais claro (próximo tópico cobre isso!).

### 🔹 Versão mínima de um programa C++

```cpp
#include <iostream>
using namespace std;

int main() {
    return 0;
}
```

Este código compila e executa, mas não faz nada visível.

---

## 🔵 Comentários de Programa

### 🔍 O que são comentários?
Comentários são **trechos do código ignorados pelo compilador**. Eles servem para você (ou outros programadores) entenderem o que o código faz, mas **não afetam a execução do programa**. Usar comentários é uma boa prática essencial em programação! Mas é bom evitar comentários óbvios.

### 🔹 Tipos de Comentário em C++
**1. Comentário de Linha Única**: Utiliza-se `//` para fazer um comentário que ocupa **uma única linha**.

```cpp
// Este é um comentário de linha única
cout << "Olá!" << endl; // Comentário ao lado de um comando
```

**2. Comentário de Múltiplas Linhas** Utiliza-se `/* ... */` para fazer comentários que ocupam **mais de uma linha**.

```cpp
/* 
   Este é um comentário
   que ocupa várias linhas.
*/
cout << "Exemplo de comentário!" << endl;
```

**💡 Dica:** Comente como se outra pessoa (ou você mesmo no futuro) fosse ler seu código pela primeira vez!

---

## 🔵 Compilador, Compilação, Execução e Instalação 

### 🔍 O que é um compilador?
Um **compilador** traduz o código que você escreve (código-fonte) para um código que o computador entende (código de máquina).


### 🔍 O que é GCC?
O **GCC (GNU Compiler Collection)** é um dos compiladores mais usados no mundo para linguagens como C, C++, Fortran e outras. No nosso caso, usaremos o GCC para **compilar e executar programas C++**.

### 🔹 O processo de compilação no C++ com GCC
1. **Escrever o código-fonte** (Exemplo: `programa.cpp`)
2. **Compilar o código** para gerar um arquivo executável.
3. **Executar o programa compilado**.

### 🔹 Passos no Terminal (Prompt de Comando ou Bash)
**1. Acesse a pasta onde está o arquivo `.cpp`:**
```bahs
cd caminho/da/pasta
```

**2. Compile o arquivo com GCC:**
```bash
g++ programa.cpp -o programa`
```

- `g++`: chama o compilador C++.
- `programa.cpp`: seu arquivo-fonte.
- `-o programa`: define o nome do executável como `programa` (Windows: `programa.exe`).

**3. Execute o programa:**
```bash
./programa
```

### 🔹 Exemplo Prático
**1. Código-fonte: `hello.cpp`**
```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}
```

**2. Compilar:**
```bash
g++ hello.cpp -o hello
```

**3. Executar:**
```bash
./hello
```

## 🔹 Instalação
Iremos instalr o minGW , abreviação de Minimalist GNU for Windows, é um ambiente de desenvolvimento gratuito e de código aberto para **compilar aplicativos nativos do Windows** . Ele fornece uma coleção de ferramentas, incluindo a GNU Compiler Collection (GCC), permitindo que desenvolvedores criem software sem depender de compiladores proprietários.

[Tutorial da instalação](https://www.youtube.com/watch?v=BKsdbwGEsDM)

---

## 🔵 Introdução à IDE: VSCode

### 🔍 O que é uma IDE?
**IDE (Integrated Development Environment)** é um programa que reúne ferramentas essenciais para o desenvolvimento de software, como:

- **Editor de código**
- **Realce de sintaxe**
- **Autocompletar**
- **Compilação**
- **Execução**
- **Depuração (debug)**

No nosso curso, vamos usar o **Visual Studio Code (VSCode)**, uma das IDEs mais leves e populares.

### 🔹 Instalando o VSCode

1. Acesse:
https://code.visualstudio.com/

2. Baixe a versão para seu sistema operacional (Windows, Linux ou macOS).

3. Instale normalmente (próximo → próximo → concluir).

### 🔹 Extensões recomendadas para C++ no VSCode
**1. C/C++ (Microsoft)**
Fornece:
    - Realce de código
    - IntelliSense (autocompletar)
    - Depuração

**2. Code Runner (opcional)**
Permite rodar códigos rapidamente com um clique.

---
