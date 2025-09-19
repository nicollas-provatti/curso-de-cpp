# Aula 14 - Manipulação de Arquivos

---

## 🔵 Introdução à Manipulação de Arquivos em C++

### 🔎 O que são arquivos?

Um **arquivo** é uma forma de armazenar dados permanentemente no computador, diferente das variáveis que existem apenas enquanto o programa está em execução.

Existem dois principais tipos:

- **Arquivos de Texto** → armazenam dados em formato legível por humanos (ex: `.txt`, `.csv`).

- **Arquivos Binários** → armazenam dados no formato binário (mais compactos e rápidos, mas não legíveis diretamente).

<div style="height: 1px"></div>

### 🔹 Biblioteca `<fstream>`

No C++, a manipulação de arquivos é feita pela biblioteca `<fstream>`, que fornece três classes principais:

- `ifstream` → usada para leitura de arquivos (input file stream).
- `ofstream` → usada para escrita em arquivos (output file stream).
- `fstream` → usada para leitura e escrita em arquivos (file stream).

<div style="height: 1px"></div>

### 🔹 Exemplo simples de criação de arquivo

```cpp
#include <iostream>
#include <fstream> // Necessário para manipulação de arquivos
using namespace std;

int main() {
    ofstream arquivo("exemplo.txt"); // Cria um arquivo para escrita

    if (arquivo.is_open()) {
        arquivo << "Olá, mundo!" << endl;
        arquivo << "Esse é meu primeiro arquivo em C++." << endl;
        arquivo.close(); // Fecha o arquivo
        cout << "Arquivo criado com sucesso!" << endl;
    } else {
        cout << "Erro ao abrir o arquivo!" << endl;
    }

    return 0;
}
```

**Saída esperada:** Um arquivo chamado exemplo.txt será criado na pasta do projeto com o conteúdo:

```css
Olá, mundo!
Esse é meu primeiro arquivo em C++.
```

---

## 🔵 Classes da biblioteca `<fstream>`

A biblioteca `<fstream>` fornece três classes principais para manipulação de arquivos em C++:

### 🔹 `ifstream` (Input File Stream)
Usada para **abrir e ler arquivos**.

**Exemplo:**
```cpp
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream arquivo("exemplo.txt"); // Abre para leitura
    string linha;

    if (arquivo.is_open()) {
        while (getline(arquivo, linha)) { // Lê linha por linha
            cout << linha << endl;
        }
        arquivo.close();
    } else {
        cout << "Erro ao abrir o arquivo!" << endl;
    }

    return 0;
}
```

<div style="height: 1px"></div>

### 🔹 `ofstream` (Output File Stream)

Usada para **criar ou sobrescrever arquivos** e **escrever dados**.

**Exemplo:**

```cpp
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream arquivo("saida.txt"); // Abre para escrita

    if (arquivo.is_open()) {
        arquivo << "Gravando dados em um arquivo!" << endl;
        arquivo.close();
        cout << "Arquivo escrito com sucesso!" << endl;
    } else {
        cout << "Erro ao abrir o arquivo!" << endl;
    }

    return 0;
}
```

<div style="height: 1px"></div>

### 🔹 `fstream`

Usada quando precisamos **tanto ler quanto escrever** em um mesmo arquivo.

**Exemplo:**

```cpp
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream arquivo("dados.txt", ios::in | ios::out | ios::app);

    if (arquivo.is_open()) {
        arquivo << "Nova linha adicionada!" << endl; // Escreve
        arquivo.seekg(0); // Volta para o início do arquivo

        string linha;
        while (getline(arquivo, linha)) { // Lê tudo
            cout << linha << endl;
        }
        arquivo.close();
    } else {
        cout << "Erro ao abrir o arquivo!" << endl;
    }

    return 0;
}
```

---

## 🔵 Abrindo e Fechando Arquivos

### 🔹 Abrindo Arquivos

Ao trabalhar com arquivos em C++, é **fundamental** abrir o arquivo antes de ler ou escrever. Isso garante que o programa consiga acessar corretamente o arquivo no disco.

Existem duas formas principais de abrir arquivos:

**1. Abrir no momento da declaração**

```cpp
#include <fstream>
using namespace std;

ofstream arquivo("saida.txt"); // Abre o arquivo para escrita
```

**2. Abrir depois da declaração**

```cpp
#include <fstream>
using namespace std;

ofstream arquivo;      // Declarado
arquivo.open("saida.txt"); // Abrindo depois
```

<div style="height: 1px"></div>

### 🔹 Modos de abertura

Os arquivos podem ser abertos em diferentes **modos**, combinando flags com operador `|`:

| Modo          | Significado                                              |
| ------------- | -------------------------------------------------------- |
| `ios::in`     | Abrir para **leitura** (somente leitura)                 |
| `ios::out`    | Abrir para **escrita** (apaga conteúdo anterior)         |
| `ios::app`    | Abrir para **adição** (escreve no final do arquivo)      |
| `ios::ate`    | Abrir no final, mas permite leitura/escrita              |
| `ios::binary` | Abrir em **modo binário**                                |
| `ios::trunc`  | Apaga o conteúdo do arquivo ao abrir (padrão `ofstream`) |

**Exemplo de combinação:**

```cpp
fstream arquivo("dados.txt", ios::in | ios::out | ios::app);
```

- `ios::in` → abre o arquivo para **leitura**.
- `ios::out` → abre o arquivo para **escrita**. **Atenção**: se usado **sozinho**, ele **apaga o conteúdo do arquivo** ao abrir (truncamento).
- `ios::app` → abre o arquivo para escrita, **sempre acrescentando ao final**, sem apagar o conteúdo existente.

Agora, a parte importante: quando você combina `ios::out` **com** `ios::app`, o comportamento do `ios::app` **tem prioridade no truncamento**. Ou seja:

- O arquivo **não será apagado**.
- Todos os dados novos serão **acrescentados no final**.
- Você ainda consegue ler do arquivo porque incluiu `ios::in`.

<div style="height: 1px"></div>

### 🔹 Fechando Arquivos

Após terminar a manipulação, **sempre feche o arquivo** com o método `.close()` para garantir que os dados sejam gravados corretamente e liberar recursos do sistema.

```cpp
arquivo.close();
```

**Exemplo:**
```cpp
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Abrir arquivo para escrita
    ofstream arquivo("exemplo.txt", ios::out | ios::app);

    if (arquivo.is_open()) {
        arquivo << "Adicionando uma nova linha ao arquivo.\n";
        arquivo.close(); // Fechar arquivo
        cout << "Arquivo escrito com sucesso!\n";
    } else {
        cout << "Erro ao abrir o arquivo!\n";
    }

    // Abrir arquivo para leitura
    ifstream leitura("exemplo.txt", ios::in);
    string linha;

    if (leitura.is_open()) {
        while (getline(leitura, linha)) {
            cout << linha << endl;
        }
        leitura.close(); // Fechar arquivo
    } else {
        cout << "Erro ao abrir o arquivo para leitura!\n";
    }

    return 0;
}
```

<div style="height: 10px"></div>

**Resumo:**

- Sempre abra o arquivo antes de ler ou escrever.
- Use o modo correto (`in`, `out`, `app`, `binary`).
- Feche o arquivo ao terminar com `.close()`.

---

## 🔵 Escrita em Arquivos de Texto

### 🔹 Introdução

Arquivos de texto armazenam informações de forma **legível por humanos**, como `.txt` ou `.csv`.
Para **gravar dados** em arquivos de texto no C++, usamos a classe `ofstream` ou `fstream` (quando também queremos ler).

<div style="height: 1px"></div>

### 🔹 Criando e Escrevendo em Arquivos

```cpp
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream arquivo("alunos.txt"); // Cria arquivo para escrita

    if (arquivo.is_open()) {
        arquivo << "Lucas,21,Engenharia\n";
        arquivo << "Maria,22,Medicina\n";
        arquivo << "Pedro,20,Direito\n";
        arquivo.close(); // Sempre feche o arquivo
        cout << "Arquivo criado e escrito com sucesso!" << endl;
    } else {
        cout << "Erro ao abrir o arquivo!" << endl;
    }

    return 0;
}
```

### Boas práticas

**1. Sempre verificar se o arquivo abriu corretamente:**

```cpp
if (!arquivo.is_open()) {
    cout << "Erro ao abrir o arquivo!" << endl;
}
```

**2. Fechar o arquivo ao terminar (`arquivo.close()`).**

**3. Evitar sobrescrever arquivos importantes sem intenção.**

---

## 🔵 Leitura de Arquivos de Texto

### 🔹 Introdução

A leitura de arquivos de texto permite **extrair informações** armazenadas em arquivos `.txt` ou `.csv`.
No C++, utilizamos principalmente `ifstream` ou `fstream` para ler dados.

<div style="height: 1px"></div>

### 🔹 Lendo linha a linha

A função `getline()` permite ler **uma linha inteira por vez**.

```cpp
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream arquivo("alunos.txt"); // Abre arquivo para leitura
    string linha;

    if (arquivo.is_open()) {
        while (getline(arquivo, linha)) { // Lê linha por linha
            cout << linha << endl;
        }
        arquivo.close();
    } else {
        cout << "Erro ao abrir o arquivo!" << endl;
    }

    return 0;
}
```

> Esse método é ideal para arquivos estruturados por linha, como listas de nomes ou registros CSV.

<div style="height: 1px"></div>

### 🔹 Lendo palavra por palavra

Usando o operador `>>`, podemos ler **uma palavra por vez**:

```cpp
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream arquivo("alunos.txt");
    string palavra;

    if (arquivo.is_open()) {
        while (arquivo >> palavra) { // Lê palavra por palavra
            cout << palavra << endl;
        }
        arquivo.close();
    } else {
        cout << "Erro ao abrir o arquivo!" << endl;
    }

    return 0;
}
```

>> Cada palavra é separada automaticamente por espaços ou quebras de linha.

<div style="height: 1px"></div>

### 🔹 Lendo caractere por caractere

Se você precisa processar cada **caractere individualmente**, use `get()`:

```cpp
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream arquivo("alunos.txt");
    char c;

    if (arquivo.is_open()) {
        while (arquivo.get(c)) { // Lê caractere por caractere
            cout << c;
        }
        arquivo.close();
    } else {
        cout << "Erro ao abrir o arquivo!" << endl;
    }

    return 0;
}
```

>> Útil para processamento mais detalhado, como contagem de caracteres ou filtragem de símbolos.

<div style="height: 10px"></div>

Resumo

- **Linha por linha:** `getline(arquivo, linha)` → ideal para registros por linha.
- **Palavra por palavra:** `arquivo >> palavra` → útil para textos simples.
- **Caractere por caractere:** `arquivo.get(c)` → bom para manipulação detalhada de conteúdo.
- Sempre abrir o arquivo corretamente e fechá-lo ao finaliza

---

## 🔵 Arquivos Binários

### 🔹 Introdução
Arquivos binários armazenam dados **em formato não legível por humanos**, diretamente em bytes, ao contrário dos arquivos de texto.
Eles são ideais para **salvar estruturas, objetos ou grandes volumes de dados**, garantindo **precisão e economia de espaço**.

<div style="height: 1px"></div>

### 🔹 Diferença entre Texto e Binário

| Aspecto           | Arquivo Texto                          | Arquivo Binário                       |
| ----------------- | -------------------------------------- | ------------------------------------- |
| Formato           | Legível por humanos                    | Não legível, em bytes                 |
| Leitura/Escrita   | `ifstream/ofstream`                    | `ifstream/ofstream` com `ios::binary` |
| Usos              | Logs, CSV, notas                       | Estruturas, imagens, áudio, objetos   |
| Precisão de dados | Pode perder precisão em floats/doubles | Mantém precisão exata                 |

<div style="height: 1px"></div>

### 🔹 Abrindo arquivos binários

Para ler ou escrever binários, adicionamos o **modo** `ios::binary`:

```cpp
#include <fstream>
using namespace std;

ofstream arquivo("dados.bin", ios::out | ios::binary); // Escrita binária
ifstream arquivo("dados.bin", ios::in | ios::binary);  // Leitura binária
```

<div style="height: 1px"></div>

### 🔹 Métodos `.write()` e `.read()`

- `write`: grava bytes no arquivo.

```cpp
arquivo.write(reinterpret_cast<char*>(&variavel), sizeof(variavel));
```

- `read`: lê bytes do arquivo.

```cpp
arquivo.read(reinterpret_cast<char*>(&variavel), sizeof(variavel));
```

>> `reinterpret_cast<char*>` converte o endereço do objeto para **char***, necessário para manipulação de bytes.

<div style="height: 1px"></div>

### 🔹 Exemplo com `struct`

```cpp
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Aluno {
    char nome[50];
    int idade;
    float nota;
};

int main() {
    Aluno a1 = {"Lucas", 21, 8.5};

    // Escrevendo no arquivo binário
    ofstream arquivo("alunos.bin", ios::out | ios::binary);
    arquivo.write(reinterpret_cast<char*>(&a1), sizeof(a1));
    arquivo.close();

    // Lendo do arquivo binário
    Aluno a2;
    ifstream arquivo_leitura("alunos.bin", ios::in | ios::binary);
    arquivo_leitura.read(reinterpret_cast<char*>(&a2), sizeof(a2));
    arquivo_leitura.close();

    cout << "Nome: " << a2.nome << endl;
    cout << "Idade: " << a2.idade << endl;
    cout << "Nota: " << a2.nota << endl;

    return 0;
}
```

**Saída esperada:**

```makefile
Nome: Lucas
Idade: 21
Nota: 8.5
```

<div style="height: 10px"></div>

**Observações**

- Estruturas devem ter **tamanho fixo** (como `char[]`) para evitar problemas de leitura/escrita.
- Sempre abra arquivos binários com `ios::binary`.
- Arquivos binários **mantêm a precisão** de dados numéricos e permitem armazenar objetos complexos.

---

## 🔵 Verificação de Erros em Arquivos

### 🔹 Introdução

Ao trabalhar com arquivos em C++, é **fundamental verificar se tudo está ocorrendo corretamente**, para evitar **perda de dados ou falhas no programa**.
Podemos testar se o arquivo foi aberto, se chegou ao fim, ou se ocorreram erros de leitura/escrita.

<div style="height: 1px"></div>

### 🔹 Testando se o arquivo abriu corretamente

Use o método `is_open()` para garantir que o arquivo foi aberto com sucesso:

```cpp
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream arquivo("dados.txt");

    if (!arquivo.is_open()) {
        cout << "Erro: não foi possível abrir o arquivo!" << endl;
        return 1;
    }

    cout << "Arquivo aberto com sucesso!" << endl;
    arquivo.close();
    return 0;
}
```

>> Sempre faça essa verificação antes de tentar ler ou escrever no arquivo.

<div style="height: 1px"></div>

### 🔹 Testando fim de arquivo

Para saber se chegamos ao **final do arquivo**, use o método `eof()`:

```cpp
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream arquivo("dados.txt");
    string linha;

    if (!arquivo.is_open()) return 1;

    while (!arquivo.eof()) { // enquanto não chegar ao fim
        getline(arquivo, linha);
        cout << linha << endl;
    }

    arquivo.close();
    return 0;
}
```

>> Observação: muitas vezes é mais seguro usar `while (getline(arquivo, linha))` ao invés de `eof()`, pois evita ler linhas inválidas no final do arquivo.

<div style="height: 1px"></div>

### 🔹 Tratamento de erros de entrada/saída

As streams possuem **flags de erro** que podem ser verificadas:

- `fail()` → retorna true se ocorreu **erro na abertura ou na operação**.
- `bad()` → retorna true se ocorreu **erro grave** (por exemplo, hardware).
- `good()` → retorna true se a stream está **ok**.

```cpp
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream arquivo("dados.txt");

    if (arquivo.fail()) {
        cout << "Erro ao abrir o arquivo!" << endl;
        return 1;
    }

    if (arquivo.good()) {
        cout << "Arquivo aberto corretamente e sem erros!" << endl;
    }

    arquivo.close();
    return 0;
}
```

<div style="height: 10px"></div>

**Resumo**

- `is_open()`: garante que o arquivo foi aberto.
- `eof()`: verifica fim do arquivo.
- `fail()`, `bad()`, `good()`: permitem testar falhas e integridade da stream.
- Sempre trate erros de I/O para evitar que seu programa corrompa dados ou trave.

---