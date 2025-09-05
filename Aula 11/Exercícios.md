# 📝 Exercícios

---

## 🔹 Exercício 1 - Cadastro de Funcionários e Estagiários - I
**Descrição:** Você deve criar uma classe `Funcionario` com os atributos `nome` e `salario`, e um método `mostrarDados()` que imprime essas informações.
Depois, crie uma classe `Estagiario` que **herda** de `Funcionario` e adiciona um atributo `curso`.
O `Estagiario` deve ter seu próprio método `mostrarDados()`, que mostra todas as informações, incluindo o curso.

**Requisitos:**

-  Criar a classe `Funcionario` com atributos protegidos (`protected`) e método público `mostrarDados()`.

*  Criar a classe `Estagiario` que herda de `Funcionario` e adiciona o atributo `curso`.

- Criar 1 objeto de cada classe e testar o método `mostrarDados()`.

**Exemplo de:**

- Entrada:
```yaml
Funcionario: Nome = João, Salario = 2500
Estagiario: Nome = Maria, Salario = 1200, Curso = Engenharia
```

- Saída:
```yaml
Funcionario: João, Salario: 2500
Estagiario: Maria, Salario: 1200, Curso: Engenharia
```

---

## 🔹 Exercício 2 - Cadastro de Funcionários e Estagiários - II
**Descrição:** Dando continuidade ao exercício anterior, agora você deve implementar **construtores** para as classes `Funcionario` e `Estagiario`.
O construtor da classe `Funcionario` deve inicializar `nome` e `salario`.
O construtor da classe `Estagiario` deve chamar o **construtor da classe base** para inicializar `nome` e `salario`, e também inicializar `curso`.

Além disso, os atributos devem ser **privados** e o acesso a eles deve ser feito através de **métodos get e set** (encapsulamento).

**Requisitos:**

- Classe `Funcionario`:
    - Atributos privados: `nome`, `salario`.
    - Construtor para inicializar os atributos.
    - Métodos `getNome()`, `setNome()`, `getSalario()`, `setSalario()`.
    - Método `mostrarDados()` que imprime as informações.

* Classe `Estagiario`:

    - Herda de `Funcionario`.
    - Atributo privado: `curso`.
    - Construtor que chama o construtor da classe base e inicializa `curso`.
    - Métodos `getCurso()` e `setCurso()`.
    - Sobrescreve `mostrarDados()` para imprimir todas as informações.

- Criar objetos de cada classe e testar os métodos.

**Exemplo de:**

- Entrada:
```yaml
Funcionario: Nome = João, Salario = 2500
Estagiario: Nome = Maria, Salario = 1200, Curso = Engenharia
```

- Saída:
```yaml
Funcionario: João, Salario: 2500
Estagiario: Maria, Salario: 1200, Curso: Engenharia
```

---

## 🔹 Exercício 3 - Cadastro de Funcionários e Estagiários - III
**Descrição:** Você recebeu o código base com as classes `Funcionario` e `Estagiario`.
Seu trabalho é **modificar o código para que o método** `mostrarDados()` **seja polimórfico**, permitindo que, se um ponteiro da classe base `Funcionario` apontar para um objeto de `Estagiario`, o método da derivada seja chamado corretamente.

**Instruções:**

- Identifique qual método deve ser declarado `virtual`.
* Adicione `override` na classe derivada no método que sobrescreve o da base.
- Teste criando ponteiros da classe base apontando para objetos de cada classe.

**Código base fornecido:**
```cpp
#include <iostream>
using namespace std;

class Funcionario {
protected:
    string nome;
    double salario;

public:
    Funcionario(string n, double s) : nome(n), salario(s) {}

    void mostrarDados() {
        cout << "Funcionario: " << nome << ", Salario: " << salario << endl;
    }
};

class Estagiario : public Funcionario {
private:
    string curso;

public:
    Estagiario(string n, double s, string c) : Funcionario(n, s), curso(c) {}

    void mostrarDados() {
        cout << "Estagiario: " << nome << ", Salario: " << salario << ", Curso: " << curso << endl;
    }
};

int main() {
    Funcionario f("Joao", 2500);
    Estagiario e("Maria", 1200, "Engenharia");

    Funcionario* ptr1 = &f;
    Funcionario* ptr2 = &e;

    ptr1->mostrarDados();
    ptr2->mostrarDados();

    return 0;
}
```

**Exemplo de saída esperada após correção:**

```yaml
Funcionario: Joao, Salario: 2500
Estagiario: Maria, Salario: 1200, Curso: Engenharia
```

---

## 🔹 Exercício 4 - Cadastro de Funcionários e Consultores - I
**Descrição:** Crie três classes:

- `Funcionario` – contém `nome` e `salario` e método `mostrarFuncionario()`.
* `Consultor` – contém `projeto` e método `mostrarConsultor()`.
- `FuncionarioConsultor` – herda **de ambas** as classes `Funcionario` e `Consultor`.

    - Deve ter um método `mostrarDados()` que imprime todas as informações: nome, salário e projeto.

**Requisitos:**

- Classe `Funcionario`:

    - Atributos: `nome` (string), `salario` (double)
    - Método: `mostrarFuncionario()`

* Classe `Consultor`:

    - Atributo: `projeto` (string)
    - Método: `mostrarConsultor()`

- Classe `FuncionarioConsultor`:

    - Herança múltipla de `Funcionario` e `Consultor`
    - Método `mostrarDados()` que imprime **nome**, **salário** e **projeto**

* Criar **um objeto de** `FuncionarioConsultor`, inicializar todos os atributos e testar o método `mostrarDados()`.

**Exemplo de:**

- Entrada:
```yaml
Nome: Carlos
Salario: 5000
Projeto: Sistema Financeiro
```

- Saída:
```yaml
FuncionarioConsultor:
Nome: Carlos
Salario: 5000
Projeto: Sistema Financeiro
```

---

## 🔹 Exercício 5 - Cadastro de Funcionário Consultor

**Descrição:** Duas classes possuem métodos com o mesmo nome:

- `Funcionario` – contém `nome`, `salario` e método `mostrar()`.
- `Consultor` – contém projeto e método `mostrar()`.
- `FuncionarioConsultor` – herda de ambas.

**Objetivo:**

- Resolver o conflito dos métodos `mostrar()` usando **scope resolution** (`::`).
- Criar um método `mostrarDados()` na classe derivada que utilize os métodos corretos de cada classe base para exibir todas as informações.

**Exemplo de:**

- Entrada:
```yaml
Nome: Ana
Salario: 4500
Projeto: Sistema de Vendas
```

- Saída:
```yaml
Funcionario: Ana, Salario: 4500
Consultor: Projeto Sistema de Vendas
```