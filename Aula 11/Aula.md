# 📘 Aula 11 - Programação Orientada a Objetos 2

---

## 🔵 Herança

### 🔍 O que é Herança?
Herança é um dos pilares da programação orientada a objetos (POO) e permite criar novas classes baseadas em classes existentes, reaproveitando atributos e métodos. A nova classe **herda** características da classe base (também chamada de superclasse ou classe pai) e pode adicionar novos membros ou modificar os existentes.

**Por que usar herança?**

- Reutilizar código já existente, evitando duplicação.
- Criar uma hierarquia de classes que refletem relações “é um tipo de” (ex: cachorro é um animal).
- Facilitar manutenção e extensão do software.

**Exemplo:**
```cpp
#include <iostream>
using namespace std;

class Animal {
public:
    void comer() {
        cout << "Animal está comendo." << endl;
    }
};

class Cachorro : public Animal {
public:
    void latir() {
        cout << "Cachorro está latindo." << endl;
    }
};

int main() {
    Cachorro dog;
    dog.comer();  // Método herdado da classe Animal
    dog.latir();  // Método da classe Cachorro

    return 0;
}
```

**Conceitos importantes**
- `class Cachorro : public Animal` significa que Cachorro herda publicamente de Animal.

- A classe derivada (filha) pode acessar os membros públicos e protegidos da classe base.

- A herança pode ser de três tipos em C++:
    - `public` (herda membros públicos como públicos)
    - `protected`
    - `private` (mais restritiva)

- Uma classe derivada pode adicionar novos atributos e métodos, além dos herdados.

- Também pode sobrescrever métodos da classe base (que veremos em polimorfismo).

---

## 🔹 Protected

### 🔍 O que é protected?

- `protected` é um **modificador de acesso** em C++ que fica entre `private` e `public`.

- Membros `protected` **não podem ser acessados fora da classe** como `public`, mas **podem ser acessados pelas classes derivadas**.

- Útil para permitir que subclasses manipulem atributos/métodos sem expor para o mundo externo.

**Exemplo:**

```cpp
#include <iostream>
using namespace std;

class Animal {
protected:
    string especie;  // acessível pelas classes filhas

public:
    void setEspecie(string e) { especie = e; }
    void mostrarEspecie() { cout << "Especie: " << especie << endl; }
};

class Cachorro : public Animal {
public:
    void definirEspecie() {
        especie = "Canis lupus familiaris"; // acessando membro protegido
    }
};

int main() {
    Cachorro dog;
    dog.definirEspecie();
    dog.mostrarEspecie();  // Canis lupus familiaris
    return 0;
}
```

<div style="height: 1px"></div>

## 🔹 Tipos de Herança em C+

### 1. Herança pública (`public`)

- Os membros `public` da classe base continuam `public` na classe derivada.

- Os membros `protected` da base continuam `protected` na derivada.

- É o tipo mais usado, pois representa a ideia de "é um tipo de".

```cpp
class Aluno : public Pessoa { ... };
```

> Usado quando você quer que um **Aluno seja uma Pessoa** e mantenha o acesso aos membros públicos.

<div style="height: 1px"></div>

### 2. Herança protegida (`protected`)

- Os membros `public` e `protected` da base viram `protected` na derivada.

- Ou seja, só podem ser acessados dentro da classe derivada ou de quem herdar dela.

```cpp
class Aluno : protected Pessoa { ... };
```

> Restringe mais o acesso, mas ainda permite uso interno pelas subclasses.

<div style="height: 1px"></div>

### 3. Herança privada (`private`) (padrão em `class`)

- Todos os membros `public` e `protected` da base viram `private` na derivada.

- Ou seja, só a classe filha pode usar, mas não é visível fora dela.

```cpp
class Aluno : private Pessoa { ... };
```

> Pouco usada em herança conceitual, porque “esconde” a relação.



---


## 🔹 Encapsulamento em Herança (Chamando o Construtor da Classe Pai)

### 🔍 Por que chamar o construtor da classe base?

Quando uma **classe derivada** é criada, podemos querer **inicializar atributos da classe base** usando seu construtor. Em C++, isso é feito usando **lista de inicialização** na classe derivada.

**Exemplo:**

```cpp
#include <iostream>
using namespace std;

class Animal {
protected:
    string especie;
public:
    Animal(string e) { especie = e; }
    void mostrarEspecie() { cout << "Especie: " << especie << endl; }
};

class Cachorro : public Animal {
    string nome;
public:
    Cachorro(string n, string e) : Animal(e) { // chamando construtor da classe pai
        nome = n;
    }

    void mostrarDados() {
        cout << "Nome: " << nome << ", ";
        mostrarEspecie();
    }
};

int main() {
    Cachorro dog("Rex", "Canis lupus familiaris");
    dog.mostrarDados();  // Nome: Rex, Especie: Canis lupus familiaris
    return 0;
}
```

**Pontos importantes**

- `Cachorro(string n, string e) : Animal(e)` → chama o construtor de `Animal` antes de executar o corpo do construtor de `Cachorro`.

- Permite inicializar corretamente **atributos herdados** da classe base.

---

## 🔵 Herança Múltipla

#### 🔍 O que é herança múltipla?
Na herança múltipla, uma classe derivada herda características (atributos e métodos) de **mais de uma classe base**. Isso permite combinar funcionalidades de várias classes diferentes.

**Exemplo:**
```cpp
#include <iostream>
using namespace std;

class Mamifero {
public:
    void amamentar() {
        cout << "Mamífero amamentando seu filhote." << endl;
    }
};

class Ave {
public:
    void voar() {
        cout << "Ave voando." << endl;
    }
};

class Morcego : public Mamifero, public Ave {
public:
    void emitirSom() {
        cout << "Morcego emitindo som." << endl;
    }
};

int main() {
    Morcego morcego;

    morcego.amamentar();  // Método herdado de Mamifero
    morcego.voar();       // Método herdado de Ave
    morcego.emitirSom();  // Método próprio da classe Morcego

    return 0;
}
```

**Conceitos importantes**
- `class Morcego : public Mamifero, public Ave` herda de duas classes.
- Isso permite que `Morcego` tenha comportamento tanto de mamífero (amamentar) quanto de ave (voar).
- A herança múltipla pode gerar ambiguidades se as classes base tiverem membros com o mesmo nome — para isso, C++ tem formas específicas para resolver (não entraremos em detalhes por enquanto).

---

## 🔵 Herança Multi-nível

### 🔍 O que é herança multi-nível?

Na **herança multi-nível**, uma classe é derivada de outra classe que, por sua vez, também é derivada de outra. Ou seja, temos uma cadeia de heranças, onde cada classe herda membros da sua classe base, direta ou indiretamente.

**Exemplo:**
```cpp
#include <iostream>
using namespace std;

// Classe base
class SerVivo {
public:
    void nascer() {
        cout << "Ser vivo nasceu." << endl;
    }
};

// Classe derivada de SerVivo
class Animal : public SerVivo {
public:
    void comer() {
        cout << "Animal está comendo." << endl;
    }
};

// Classe derivada de Animal
class Cachorro : public Animal {
public:
    void latir() {
        cout << "Cachorro está latindo." << endl;
    }
};

int main() {
    Cachorro dog;

    dog.nascer();  // Método herdado de SerVivo
    dog.comer();   // Método herdado de Animal
    dog.latir();   // Método próprio de Cachorro

    return 0;
}
```

**Conceitos importantes**

- `Cachorro` herda de `Animal`, que herda de `SerVivo`.
- Isso permite que `Cachorro` tenha acesso a métodos de todas as classes acima na hierarquia.
- Herança multi-nível é útil para criar **hierarquias de classes mais naturais** e refletir relações do mundo real.

---

## 🔵 Polimorfismo

### 🔍 O que é Polimorfismo?

O **polimorfismo** é um dos pilares da POO e significa “muitas formas”. Em C++, ele permite que **objetos de classes diferentes respondam de maneiras diferentes ao mesmo método**.
O polimorfismo torna o código mais flexível e extensível, pois podemos tratar objetos de forma genérica, mas cada objeto pode se comportar de maneira específica.

Existem dois tipos principais de polimorfismo em C++:

**1. Polimorfismo em tempo de compilação (sobrecarga)**

- Também chamado de **compile-time polymorphism**.
- Ocorre quando temos métodos com o mesmo nome, mas **assinaturas diferentes** (quantidade ou tipo de parâmetros).

**2. Polimorfismo em tempo de execução (sobrescrita / override)**

- Também chamado de **runtime polymorphism**.
- Ocorre quando **uma classe derivada redefine um método da classe base**.

Para funcionar corretamente com ponteiros ou referências, geralmente usamos **métodos virtuais** (`virtual`).

<div style="height: 1px"></div>

### 🔹 Exemplo de Sobrescrita (Override)

```cpp
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void emitirSom() {  // método virtual
        cout << "Animal emitindo som genérico." << endl;
    }
};

class Cachorro : public Animal {
public:
    void emitirSom() override { // sobrescrevendo o método
        cout << "Cachorro latindo." << endl;
    }
};

class Gato : public Animal {
public:
    void emitirSom() override {
        cout << "Gato miando." << endl;
    }
};

int main() {
    Cachorro dog;
    Gato gato;

    dog.emitirSom();   // Cachorro latindo
    gato.emitirSom();  // Gato miando

    return 0;
}
```

**Conceitos importantes**

- `virtual` indica que o método pode ser sobrescrito.
- `override` indica que a função da classe derivada substitui a da base.

<div style="height: 1px"></div>

### 🔹 Exemplo de Sobrecarga (Overload)

```cpp
#include <iostream>
using namespace std;

class Matematica {
public:
    int soma(int a, int b) {
        return a + b;
    }

    double soma(double a, double b) {
        return a + b;
    }
};

int main() {
    Matematica m;
    cout << m.soma(2, 3) << endl;      // 5
    cout << m.soma(2.5, 3.7) << endl;  // 6.2
    return 0;
}
```

**Conceitos importantes**

- Mesma função com **assinaturas diferentes** → compilador escolhe a versão correta.
- Polimorfismo em **tempo de compilação**.

---