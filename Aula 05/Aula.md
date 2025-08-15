# 📘 Aula 5 – Função 1

### 🔍 O que são funções ?
Funções são **blocos de código** que **executam tarefas específicas** e podem ser **reutilizados** em diferentes partes do programa. Elas ajudam a modularizar o código, tornando-o mais organizado e fácil de entender.

---

### 🔵 Declaração de Funções
Uma declaração de função informa ao compilador sobre a **existência da função** (geralmente colocada no início do código ou em um arquivo de cabeçalho). Ela especifica o nome da função, o tipo de valor que a função retornará (se houver) e os tipos dos parâmetros que a função aceita. A declaração de uma função é chamada de protótipo de função.

**Sintaxe:**
```c
tipo_retorno nome_da_funcao(parâmetros);
```

**Exemplo:**
Se você tem uma função que calcula a soma de dois inteiros e retorna um inteiro, a declaração seria:
```c
int soma(int a, int b);
```
Onde:
- `int` é o tipo do retorno da função.
- `soma` é o nome da função.
- (`int a, int b`) são os parâmetros que a função aceita.

---

### 🔵 Definição de funções
Definição de funções é onde você **especifica o que a função realmente** faz. A definição inclui o corpo da função, que contém o código a ser executado.

**Sintaxe:**
```cpp
tipo_retorno nome_da_funcao(parâmetros) {
   // Corpo da função
   // Código a ser executado

   return valor;
}
```

O `valor` será colocado apenas quando a função tiver um tipo de retorno diferente de void.

**Exemplo:**
```cpp
int soma(int a, int b) { 
   return a + b; 
}
```

O corpo da função contém a lógica para somar a e b e retornar o resultado.

---

### 🔵 Chamadas de funções
Chamada de função é o processo de **utilizar uma função** em uma parte do seu código. Quando você chama uma função, o controle do programa é transferido para a função, que executa seu código e, em seguida, retorna o controle para o ponto onde foi chamada.

**Sintaxe:**
```c
nome_função(parâmetros);
```

**Exemplo:**
Usando a função soma definida anteriormente, você pode chamá-la da seguinte maneira:

```cpp
#include <iostream>
using namespace std;

int main() {
    int resultado = soma(3, 4); 
    cout << "Resultado da soma: " << resultado << endl;
    return 0;
}

```
Onde:
- `soma(3, 4)` chama a função soma com os argumentos 3 e 4.
- A função retorna **7**, que é armazenado na variável resultado.
- O objeto `cout` exibe o resultado na tela.

**Exemplo completo:**
```cpp
#include <iostream>
using namespace std;

// Declaração
int soma(int a, int b);

int main() {
    // Chamada
    int resultado = soma(3, 4); 
    cout << "Resultado da soma: " << resultado << endl;
    return 0;
}

// Definição
int soma(int a, int b) { 
   return a + b; 
}
```

Antes de chamar uma função em C++, é preciso que ela esteja declarada no código. No primeiro exemplo, declaramos a função soma no início e só depois a utilizamos no main. Mesmo que a definição da função venha após a chamada, a declaração informa ao compilador que essa função existe. Isso evita erros de compilação. Também é possível declarar e definir a função ao mesmo tempo:

```cpp
#include <iostream>
using namespace std;

int soma(int a, int b) { 
   return a + b; 
}

int main() {
    int resultado = soma(3, 4); 
    cout << "Resultado da soma: " << resultado << endl;
    return 0;
}
```

A primeira abordagem (declaração separada) é útil por questões de organização, pois facilita a visualização de todas as funções disponíveis no programa, especialmente em

---

### 🔵 Diferença entre parâmetros e argumentos
Na programação existe uma diferença entre argumentos e parâmetros.

#### 🔹 **Parâmetros:**
Parâmetro(s) é/são a(s) **variável(veis)** usada(s) na definição de uma função que atuam como espaço(s) reservado(s) para os valores que serão passados para a função quando ela for chamada. Eles funcionam como “caixas” que recebem os dados enviados pela chamada da função, permitindo que a função trabalhe com esses valores internamente. Os parâmetros são usados para definir o tipo e a quantidade de dados que uma função pode receber. Eles são especificados na declaração ou definição da função. Por exemplo, na função `soma` a e b são parâmetros.

#### 🔹 **Argumentos:**
Argumento é o **valor real** que você passa para uma função no momento em que ela é chamada. Os argumentos são fornecidos na chamada da função e servem para preencher os parâmetros definidos na declaração da função. Por exemplo, na chamada `soma(3, 4)`, os valores **3** e **4** são os **argumentos** que serão atribuídos aos parâmetros da função `soma`.

**Resumindo:**
- Parâmetros são como variáveis na definição da função.
- Argumentos são os valores reais fornecidos às funções quando são chamadas.

---

### 🔵 Passagem por valor
Quando você passa uma variável simples para uma função, o **valor dela é copiado** para um novo espaço de memória. Isso significa que **a função trabalha com a cópia**, não com a variável original. Por isso, qualquer alteração feita dentro da função **não afeta o valor original** fora da função.

**Exemplo:**
```cpp
#include <iostream>
using namespace std;

void dobrar(int x) {
    x = x * 2;
    cout << "Dentro da função: " << x << endl;
}

int main() {
    int num = 5;
    dobrar(num);
    cout << "Fora da funçao " << num << endl;
    return 0;
}
```

**Saída:**
```kotlin
Dentro da função: 10
Fora da função: 5
```

---

### 🔵 O comando `return`
O comando `return` termina a execução da função e retorna o controla para  instrução do código de chamada.
Se, após a palavra `return`, houver uma expressão, o valor é retornado à função que chama. Esse valor é convertido para o tipo da função, especificado na sua declaração.
No exemplo da função soma após o comando `return` tínhamos a expressão a + b que é o valor que a função retorna. Funções do tipo `void` apesar de não terem retorno, podem ter o comando `return` porém sem expressão após o comando, servindo apenas para finalizar a função.

---

### 🔵 Tipos de funções
O tipo de uma função é definido pelo tipo de valor que ela retorna por meio do comando `return`, Uma função é do tipo `float` quando retorna um valor do tipo `float`.
Os tipos de funções são os mesmo tipos que o das variáveis, exceto quando a função retorna nada. Nesse caso, ela é do tipo `void`.

As funções podem ser classificadas em:

#### 🔹 **Sem retorno e sem parâmetro:**
```cpp
void mensagem() {
    cout << "Olá, mundo!\n";
}
```

#### 🔹 **Sem retorno e com parâmetros::**
```cpp
void exibirNumero(int num) {
    cout << "Número: " << num << endl;
}
```

#### 🔹 **Com retorno e sem parâmetros:**
```cpp
int obterNumero() {
    return 42;
}
```

#### 🔹 **Com retorno e com parâmetros:**
```cpp
int multiplicar(int x, int y) {
    return x * y;
}
```

---

### 🔵 Escopo de variáveis
O escopo de uma variável refere-se à parte do programa onde a variável **pode ser acessada**. Em C, o escopo de variáveis pode ser categorizado em dois tipos principais: escopo **local** e escopo **global**.

#### 🔹 **Escopo local:**
Uma variável tem escopo local se for declarada dentro de uma função ou bloco. Essas variáveis são acessíveis apenas dentro da função ou bloco onde foram declaradas e não podem ser usadas fora dele. Por exemplo:
```cpp
#include <iostream>
using namespace std;

void soma(int a, int b) {
    int resultado = a + b;
    cout << "Soma: " << resultado << endl;
}

int main() {
    soma(2, 3);
    cout << "Soma: " << resultado << endl;
}
```

A variável `resultado` é declarada dentro da função `exemplo()` e, por isso, só pode ser usada dentro dessa função. Tentar acessar `resultado` fora dela resultará em um erro de compilação, pois essa variável foi criada dentro do escopo local da função `exemplo()`, ou seja, ela só existe e é reconhecida pelo compilador enquanto o código estiver dentro dessa função.

#### 🔹 **Escopo global:**
Uma variável tem escopo global se for declarada **fora de todas as funções**, geralmente no início do arquivo de código. Essas variáveis são acessíveis em qualquer parte do programa, ou seja, em todas as funções após a sua declaração. Por exemplo:

```cpp
#include <iostream>
using namespace std;

int a = 2;
int b = 3;
int resultado;

void soma() {
    resultado = a + b;
    cout << "Soma: " << resultado << endl;
}

int main() {
    soma();
    cout << "Soma: " << resultado << endl;
}
```

As variáveis `a`, `b` e resultado são declaradas fora de qualquer função, o que significa que são acessíveis por todas as funções do programa. A função `soma()` realiza a soma de `a` e `b`, armazena o resultado na variável global resultado e o imprime. Em seguida, no `main()`, a função `soma()` é chamada e o valor da variável resultado também é impresso.

⚠️ **Importante:**
Embora o uso de variáveis globais possa parecer conveniente, ele traz **alguns riscos importantes**. Como essas variáveis podem ser acessadas e modificadas por qualquer parte do código, torna-se difícil controlar onde e quando seus valores estão sendo alterados. Isso pode causar **efeitos colaterais** inesperados, dificultando a manutenção, depuração e reutilização do código. Por isso, o uso de variáveis globais deve ser evitado sempre que possível, priorizando o uso de variáveis locais e passagem de parâmetros para manter o código mais seguro, organizado e previsível.

**Observação:**
O escopo de variáveis também pode ser limitado a blocos de código dentro de funções, como dentro de loops `for`, `while` e blocos condicionais `if`. Por exemplo:

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 5; i++) {
        cout << "Valor de i: " << i << endl;
    }
    cout << "Valor de i: " << i << endl; // // ❌ Erro de compilação
    return 0;
}
```

A variável `i` é declarada dentro do loop for e só pode ser acessada dentro do loop. Tentar acessar `i`fora do loop resultará em um erro de compilação, pois `i` não está no escopo.

---

### 🔵 Reutilização de Código com Funções
As funções permitem que você:

- Evite repetição de código
- Organize o programa em partes lógicas
- Facilite manutenção e testes

**Exemplo de reutilização:**
```cpp
#include <iostream>
using namespace std;

float media(float a, float b) {
    return (a + b) / 2;
}

int main() {
    // Uso em diferentes contextos
    float m1 = media(7, 8);
    float m2 = media(5, 6);
    return 0;
}

```

---

### 🔵 Boas Práticas na Modularização
- Dê nomes significativos às funções (`calcular_area`, `exibir_menu`)
- Uma função deve fazer **apenas uma coisa**
- Evite funções muito grandes
- Prefira **funções curtas e reutilizáveis**
- Use comentários para explicar o propósito de cada função

---

### 🔵 Sobrecarga de Funções
Em C++, é possível criar **múltiplas funções com o mesmo nome**, desde que tenham **diferentes tipos ou quantidades de parâmetros**. O compilador decide automaticamente qual função usar com base nos argumentos fornecidos na chamada.

**Exemplo:**
```cpp
#include <iostream>
using namespace std;

void exibir(int x) {
    cout << "Número inteiro: " << x << endl;
}

void exibir(double x) {
    cout << "Número decimal: " << x << endl;
}

int main() {
    exibir(5);
    exibir(3.14);
    return 0;
}

```

---

### 🔵 Parâmetros com Valores Padrão
Em C++, você pode definir **valores padrão para parâmetros** em funções. Se um argumento não for passado na chamada, o valor padrão será usado.

**Exemplo:**
```cpp
#include <iostream>
using namespace std;

void saudacao(string nome = "Usuário") {
    cout << "Olá, " << nome << "!" << endl;
}

int main() {
    saudacao();           // Usa o valor padrão "Usuário"
    saudacao("Ana");      // Usa "Ana"
    return 0;
}
```

---

### 🔵 Funções Inline
Funções pequenas podem ser declaradas como `inline`. Isso sugere ao compilador que **substitua a chamada da função pelo seu corpo**, evitando o custo de chamada de função (apenas quando for vantajoso).

**Exemplo:**
```cpp
#include <iostream>
using namespace std;

inline int quadrado(int x) {
    return x * x;
}

int main() {
    cout << quadrado(5); // Saída: 25
    return 0;
}
```

---

### 🔵 Templates de Função
Templates permitem criar funções que funcionam com **qualquer tipo de dado**. Isso evita repetição de código para diferentes tipos.

**Exemplo:**
```cpp
#include <iostream>
using namespace std;

template <typename T>
T maior(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << maior(10, 20) << endl;    // int
    cout << maior(3.5, 2.1) << endl;  // double
    cout << maior('a', 'z') << endl;  // char
    return 0;
}
```

---