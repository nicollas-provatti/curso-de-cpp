# 📘 Aula 10 - Programação Orientada a Objetos 1

---

### 🔍 O que é Programação Orientada a Objetos (POO)?
A **Programação Orientada a Objetos (POO)** é um paradigma de programação que organiza o código em **objetos**, que são instâncias de **classes**. Esses objetos representam entidades do mundo real ou conceitos abstratos, agrupando **dados (atributos)** e **comportamentos (métodos)** em um só lugar.

#### 🔹 Principais objetivos da POO:

- **Organizar melhor o código**, facilitando a manutenção e evolução;
- Representar entidades do mundo real de forma mais natural;
- Promover **reutilização de código** por meio de herança e composição;
- Facilitar o desenvolvimento de sistemas complexos, dividindo-os em pequenas partes interconectadas.

---

### 🔵 Conceitos de Orientação a Objetos

#### 🔹 Classe
Uma classe é um **molde** (modelo) que define um tipo de dado personalizado. Dentro da classe definimos os **atributos** (dados) e os **métodos** (funções) que os objetos dessa classe terão.

**Exemplo:**
```cpp
class Aluno {
public:
    string nome;
    int idade;
    float nota;

    void exibirDados() {
        cout << "Nome: " << nome << ", Idade: " << idade << ", Nota: " << nota << endl;
    }
};
```

Aqui, `Aluno` é a classe. Ela define o que um "aluno" terá: nome, idade, nota e um método para exibir essas informações. 

#### 🔹 Objeto
Um **objeto** é uma instância de uma classe. Depois que uma classe é declarada, podemos criar quantos objetos quisermos, cada um com seus próprios valores.

**Exemplo:**
```cpp
int main() {
    Aluno aluno1; // objeto do tipo Aluno
    aluno1.nome = "João";
    aluno1.idade = 20;
    aluno1.nota = 8.5;

    aluno1.exibirDados();
}
```

Aqui, `aluno1` é um objeto da classe `Aluno`.

#### 🔹 Encapsulamento
O **encapsulamento** é o princípio que consiste em **ocultar os detalhes internos de implementação** de um objeto e permitir o acesso controlado a seus dados, geralmente usando modificadores de acesso como:

- **public**: Atributo ou método pode ser acessado de fora da classe;
- **private**: Só pode ser acessado de dentro da própria classe.

**Exemplo:**
```cpp
class ContaBancaria {
private:
    double saldo; // só acessível dentro da classe

public:
    void depositar(double valor) {
        saldo += valor;
    }

    double consultarSaldo() {
        return saldo;
    }
};
```

O atributo `saldo` está escondido (private). Só pode ser alterado ou lido por meio dos métodos públicos `depositar()` e `consultarSaldo()`.

**Vantagens do Encapsulamento:**
- Protege os dados contra alterações indevidas;
- Torna o código mais seguro e controlado;
- Permite mudanças internas na classe sem afetar quem usa os objetos dessa classe.

---

### 🔵 Declaração de Classes e Membros
Em C++, uma classe é declarada com a palavra-chave `class`. Dentro dela, definimos os membros da classe, que podem ser:

- **Atributos (variáveis)**: armazenam os dados dos objetos;
- **Métodos (funções)**: definem os comportamentos dos objetos.

**Sintaxe básica:**

```cpp
class NomeDaClasse {
    // Modificadores de acesso:
public:    // acessível de qualquer lugar
    // atributos e métodos públicos

private:   // acessível apenas dentro da classe
    // atributos e métodos privados

protected: // (usado com herança)
    // atributos e métodos protegidos
};
```

**Exemplo completo:**

```cpp
#include <iostream>
#include <string>
using namespace std;

class Aluno {
public:               // Atributos públicos
    string nome;
    int idade;

    void exibirDados() {  // Método público
        cout << "Nome: " << nome << ", Idade: " << idade << endl;
    }

private:              // Atributo privado
    float nota;

public:
    void definirNota(float n) {   // Método público que modifica o atributo privado
        if(n >= 0 && n <= 10)
            nota = n;
    }

    float obterNota() {   // Método público para acessar a nota
        return nota;
    }
};
```

**Uso no `main()`:**
```cpp
int main() {
    Aluno aluno1;
    aluno1.nome = "Maria";
    aluno1.idade = 21;
    aluno1.definirNota(8.5);

    aluno1.exibirDados();
    cout << "Nota: " << aluno1.obterNota() << endl;

    return 0;
}
```

**Observações importantes:**

- O uso de **modificadores de acesso** (public/private) é fundamental para garantir o encapsulamento;
- Normalmente, os atributos ficam **privados** e o acesso ocorre via **métodos públicos** (getters e setters);

---

### 🔵 Construtores e Destrutores

#### 🔍 O que é um Construtor?
O **construtor** é um método especial da classe que é chamado automaticamente sempre que um objeto é criado. Ele é usado para inicializar os atributos do objeto.

- Tem o mesmo nome da classe;
- Não tem tipo de retorno (nem void);
- Pode ter parâmetros (construtor parametrizado) ou não (construtor padrão).

**Exemplo:**
```cpp
#include <iostream>
#include <string>
using namespace std;

class Aluno {
private:
    string nome;
    int idade;

public:
    // Construtor padrão (sem parâmetros)
    Aluno() {
        nome = "Desconhecido";
        idade = 0;
    }

    // Construtor parametrizado
    Aluno(string n, int i) {
        nome = n;
        idade = i;
    }

    void exibirDados() {
        cout << "Nome: " << nome << ", Idade: " << idade << endl;
    }
};
```

**Uso no `main()`:**
```cpp
int main() {
    Aluno aluno1;                          // chama o construtor padrão
    Aluno aluno2("João", 20);              // chama o construtor parametrizado

    aluno1.exibirDados();
    aluno2.exibirDados();

    return 0;
}
```

#### 🔍 O que é um Destrutor ?
O **destrutor** é um método especial chamado automaticamente quando um objeto **sai de escopo ou é destruído**. Ele serve para liberar recursos usados pela classe (como memória dinâmica ou arquivos).

- Tem o mesmo nome da classe, precedido por `~`;
- Não recebe parâmetros;
- Não tem tipo de retorno.

**Exemplo de Destrutor:**
```cpp
class Aluno {
public:
    Aluno() {
        cout << "Construtor chamado!" << endl;
    }

    ~Aluno() {
        cout << "Destrutor chamado!" << endl;
    }
};
```

**Uso no `main()`:**
```cpp
int main() {
    Aluno aluno1; // Construtor é chamado aqui
    return 0;     // Destrutor é chamado automaticamente ao sair do escopo
}
```

**Observações Importantes:**

- Se você não definir um construtor, o compilador gera um construtor padrão vazio automaticamente;
- Se você definir qualquer construtor, o compilador não gera mais o padrão automaticamente;
- O destrutor **não é obrigatório**, mas é essencial quando sua classe gerencia recursos manuais (como `new`/`delete`, arquivos, etc).

---

### 🔵 Métodos e Atributos Privados/Públicos

#### 🔍 O que são modificadores de acesso?
Em C++, o acesso aos membros (atributos e métodos) de uma classe é controlado por três palavras-chave principais:

| Modificador   | Acesso permitido                                           |
|--------------|-----------------------------------------------------------|
| ``public``     | Acessível de qualquer parte do código.                     |
| ``private``    | Acessível somente dentro da própria classe.                |
| ``protected``  | Acessível na própria classe e em classes derivadas.        |


*(Para esta aula inicial vamos focar em `public` e `private`, deixando `protected` para a parte de herança.)*

#### 🔹 Getters e Setters
- **Getters**: métodos públicos que retornam o valor de um atributo privado.
- **Setters**: métodos públicos que permitem modificar o valor de um atributo privado.

**Exemplo:**

```cpp
#include <iostream>
#include <string>
using namespace std;

class Aluno {
private:
    string nome;
    int idade;

public:
    // Setter para nome
    void setNome(string n) {
        nome = n;
    }

    // Getter para nome
    string getNome() {
        return nome;
    }

    // Setter para idade
    void setIdade(int i) {
        if(i > 0) { // validação simples
            idade = i;
        } else {
            cout << "Idade inválida!" << endl;
        }
    }

    // Getter para idade
    int getIdade() {
        return idade;
    }
};

int main() {
    Aluno aluno1;

    aluno1.setNome("João");
    aluno1.setIdade(20);

    cout << "Nome: " << aluno1.getNome() << endl;
    cout << "Idade: " << aluno1.getIdade() << endl;

    return 0;
}
```

---

### 🔵 O ponteiro `this`
Em C++, o `this` é um ponteiro especial que existe em todos os métodos não-estáticos de uma classe. Ele aponta para o objeto que chamou o método. Ou seja, dentro de um método, o ponteiro `this` representa a própria instância da classe.

Esse ponteiro é útil em várias situações, como:

- Diferenciar entre atributos e parâmetros que têm o mesmo nome;
- Permitir o encadeamento de chamadas de métodos (method chaining);
- Retornar a própria instância do objeto.

**Exemplo:**
```cpp
#include <iostream>
#include <string>
using namespace std;

class Aluno {
private:
    string nome;

public:
    void setNome(string nome) {
        this->nome = nome;  // 'this->nome' é o atributo, 'nome' é o parâmetro
    }

    void exibirNome() {
        cout << "Nome: " << nome << endl;
    }
};

int main() {
    Aluno aluno1;
    aluno1.setNome("João");
    aluno1.exibirNome();

    return 0;
}
```

---