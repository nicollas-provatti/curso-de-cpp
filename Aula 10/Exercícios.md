# 📝 Exercícios

---

## 🔹 Exercício 1 - Cadastro de Veículo - Parte I
**Descrição:** Modele uma classe chamada `Carro` contendo os atributos: `marca`, `modelo`, `ano` e `preco`.
Crie os métodos get e set para cada atributo e dois construtores:

- Construtor padrão (sem parâmetros).
- Construtor que recebe os valores dos atributos.

Em seguida:

**1.** Instancie o primeiro objeto usando o construtor padrão.
**2.** Instancie o segundo objeto usando o construtor com parâmetros.
**3.** Instancie o terceiro objeto pedindo que o usuário digite os valores para os atributos.

**Exemplo de:**

- Entrada:
```yaml
Digite a marca: Toyota
Digite o modelo: Corolla
Digite o ano: 2020
Digite o preço: 95000
```

- Saída:
```yaml
Carro 1: marca = "sem marca", modelo = "sem modelo", ano = 0, preco = 0
Carro 2: marca = Honda, modelo = Civic, ano = 2018, preco = 85000
Carro 3: marca = Toyota, modelo = Corolla, ano = 2020, preco = 95000

```

---

## 🔹 Exercício 2 - Cadastro de Veículo - Parte II
**Descrição:**  Dê continuidade ao exercício anterior. Agora, acrescente na classe `Carro` os seguintes métodos:

**1.** `mostrarDados()` → exibe na tela todos os atributos do carro de forma organizada.

**2.** `calcularDesconto(float percentual)` → retorna o valor do preço do carro após aplicar um desconto percentual informado.

**3.** `alterarPreco(float novoPreco)` → atualiza o preço do carro.

Em seguida, crie pelo menos **dois objetos** da classe `Carro`, utilize o método `mostrarDados()` para exibir as informações e teste os métodos de desconto e alteração de preço.

**Exemplo de:**

- Entrada:
```yaml
Digite a marca: Ford
Digite o modelo: Ka
Digite o ano: 2019
Digite o preço: 40000
Digite o percentual de desconto: 10
Digite o novo preço: 35000
```

- Saída:
```yaml
Dados do carro:
Marca: Ford
Modelo: Ka
Ano: 2019
Preço: 40000

Preço com desconto de 10%: 36000

Preço atualizado para: 35000
```

---

## 🔹 Exercício 3 - Cadastro de Veículo - Parte III
**Descrição:**  Agora, ao invés de trabalhar apenas com um objeto, crie um **array de objetos da classe** `Carro`.

**1.** O programa deve permitir cadastrar **N carros** (onde N é informado pelo usuário e 1 ≤ N ≤ 10).

**2.** Para cada carro, solicite os dados (marca, modelo, ano e preço).

**3.** Armazene todos os carros em um **array**.

**4.** Após o cadastro, exiba os dados de todos os carros utilizando o método `mostrarDados()`.

**5.** Permita ainda que o usuário escolha um dos carros e aplique um desconto usando o método `calcularDesconto()`.

**Exemplo de:**

- Entrada:
```yaml
Quantos carros deseja cadastrar ?  2

--- Cadastro do carro 1 ---
Marca: Ford
Modelo: Ka
Ano: 2019
Preço: 40000

--- Cadastro do carro 2 ---
Marca: Fiat
Modelo: Uno
Ano: 2018
Preço: 30000

Digite o índice do carro para aplicar desconto: 1
Digite o percentual de desconto: 10
```

- Saída:
```yaml
Lista de Carros:
[1] Marca: Ford | Modelo: Ka | Ano: 2019 | Preço: 40000
[2] Marca: Fiat | Modelo: Uno | Ano: 2018 | Preço: 30000

Preço do carro 1 com desconto de 10%: 36000
```

---

