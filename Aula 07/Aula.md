# 📘 Aula 7 - Recursão

---

### 🔍 O que é recursão?
A **recursão** é uma técnica poderosa e elegante da programação onde uma função chama a si mesma para resolver um problema. Vamos entender como ela funciona, seus elementos essenciais e aplicá-la em exemplos clássicos.

**Exemplo simples:**
```cpp
#include <iostream>
using namespace std;

void contar(int n) {
    cout << n << endl;
    contar(n + 1); // Sem condição de parada
}
```

A função `contar()` chama a si mesma, caracterizando uma **recursão**. Como não há uma condição de parada, essa chamada se repete indefinidamente, causando um erro de **estouro de pilha (stack overflow)**. Para evitar isso, devemos usar uma condição que interrompa as chamadas — o chamado **caso base**.

---

### 🔵 Elementos da recursão
Para uma função recursiva funcionar corretamente, são necessários dois componentes fundamentais:

**🔹 Caso base:**
Define a **condição de parada** da recursão, evitando chamadas infinitas.

**🔹 Passo recursivo:**
Parte da função que **chama a si mesma** com um problema menor.

**Exemplo:**
```cpp
#include <iostream>
using namespace std;

void contar(int n) {
    if (n > 5) { // Caso base
        return;
    }
    cout << n << endl;
    contar(n + 1); // Passo recursivo
}

int main() {
    contar(0); // Saída: 0 1 2 3 4 5
    return 0;
}
```

Esse exemplo demonstra claramente os dois elementos:

- **Caso base**: `if (n > 5) return;`
- **Passo recursivo**: `contar(n + 1);`

---

### 🔵 Pilha de recursão
Cada chamada recursiva é empilhada na **pilha de execução**, como uma nova função. Quando o caso base é alcançado, as chamadas começam a retornar uma a uma, no esquema **LIFO** (Last In, First Out — último a entrar, primeiro a sair).

**Exemplo:**
```cpp
#include <iostream>
using namespace std;

void contar(int n) {
    if (n > 5) { // Caso base
        return;
    }
    contar(n + 1); // Chamada antes da ação
    cout << n << endl; // Impressão na "volta" da recursão
}

int main() {
    contar(0); // Saída: 5 4 3 2 1 0
    return 0;
}
```

Aqui, as chamadas recursivas ocorrem antes do `cout`, acumulando na pilha até atingir o caso base. Na "volta" da recursão, os valores são impressos na **ordem inversa**, mostrando o comportamento LIFO da pilha.

---

### 🔵 Exemplos Clássicos
**🔹 Fatorial:**
O **fatorial** de um número natural `n` é o produto de todos os inteiros positivos de 1 até `n`. Por definição, `0! = 1`.

Exemplo: `5! = 5 × 4 × 3 × 2 × 1 = 120`

**Código:**
```cpp
#include <iostream>
using namespace std;

int fatorial(int n) {
    if (n == 0) { // Caso base
        return 1;
    }
    return n * fatorial(n - 1); // Passo recursivo
}

int main() {
    cout << "Fatorial de 5: " << fatorial(5) << endl; // Saída: 120
    return 0;
}
```

Processo para `fatorial(3)`:

```markdown
fatorial(3) → 3 * fatorial(2)
           → 3 * (2 * fatorial(1))
           → 3 * (2 * (1 * fatorial(0)))
           → 3 * 2 * 1 * 1 = 6
```

<br>

**🔹 Fibonacci:**
A **sequência de Fibonacci** é definida por:

```r
F(0) = 0  
F(1) = 1  
F(n) = F(n-1) + F(n-2)  (para n > 1)
```

**Código:**
```cpp
#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0) return 0; // Caso base
    if (n == 1) return 1; // Caso base
    return fibonacci(n - 1) + fibonacci(n - 2); // Passo recursivo
}

int main() {
    cout << "Fibonacci de 5: " << fibonacci(5) << endl; // Saída: 5
    return 0;
}
```

Processo para `fibonacci(4)`:

```markdown
fibonacci(4)
→ fibonacci(3) + fibonacci(2)
→ (fibonacci(2) + fibonacci(1)) + (fibonacci(1) + fibonacci(0))
→ ((fibonacci(1) + fibonacci(0)) + 1) + (1 + 0)
→ ((1 + 0) + 1) + (1 + 0)
→ (1 + 1) + 1
→ 2 + 1 = 3
```

---

