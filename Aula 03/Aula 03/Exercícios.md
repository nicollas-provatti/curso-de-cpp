## 📝 Exercícios 

---

### 🔹 Exercício 0 - Maior Número
**Descrição:** Escreva um programa que leia dois valores inteiros e informe qual é o maior. Se os números forem iguais, imprima qualquer um deles.

**Exemplo de:**
- Entrada:
    ```css
    Informe o primeiro número: 345
    Informe o segundo número: 567
    ```
 
* Saída:
    ```css
    O segundo número digitado (567) é maior.
    ```

---

### 🔹 Exercício 1 - Verificação de Habilitação
**Descrição:** Faça um programa que leia o ano de nascimento do usuário e o ano atual, calcule a idade e informe:

- Quantos anos o usuário terá no ano atual
- Se ele já pode tirar a habilitação (idade mínima: 18 anos)


**Exemplo de:**
- Entrada:
    ```css
    Ano de nascimento: 2008
    Ano atual: 2025
    ```
 
* Saída:
    ```css
    Em 2025, você terá 17 anos e ainda não poderá tirar a habilitação.
    ```

---

### 🔹 Exercício 2 - Categorias de Nadadores
**Descrição:** Escreva um programa que, dada a idade de um nadador, classifique-o em uma das seguintes categorias:

- Infantil A: [5;7]
- Infantil B: [8;10]
- Juvenil A: [11;13]
- Juvenil B: [14;17]
- Adulto: [18;40]
- Master: A partir de 41 e sem limite superior

Caso a idade informada esteja fora dos limites, emita uma mensagem de erro: `"Idade invalida."`

**Exemplo de:**
- Entrada:
    ```css
    Informe a idade do nadador: 23
    ```
 
* Saída:
    ```css
    O nadador se engrada na categoria: Adulto
    ```

---

### 🔹 Exercício 3 - Canal de TV
**Descrição:** Escreva um programa que leia o número de um canal de televisão e escreva o nome da emissora correspondente. Caso o usuário forneça um canal sem emissora exibir a mensagem `“Canal inválido”`.Considere as seguintes emissoras e seus respectivos canais: 

- TV Ponta Verde: 5
- TV Gazeta: 7
- TV Pajuçara: 11
- TV Farol: 16

**Exemplo de:**
- Entrada:
    ```css
    Digite um numero de um canal de tv: 11
    ```
 
* Saída:
    ```css
    TV Pajuçara
    ```

---

### 🔹 Exercício 4 - Brinquedos do Parque
**Descrição:** Nos parques de diversão, alguns brinquedos tem idade e altura mínimas para poder andar neles. O parque Ambrolândia possui 3 brinquedos que possuem essa limitação:

- **Barca Viking**: 1,5m de altura e 12 anos.
- **Elevator of Death**: 1,4m de altura e 14 anos.
- **Final Killer**: 1,7m de altura ou 16 anos. 

Dada a altura e a idade de uma pessoa, faça um programa que identifique quais e quantos brinquedos ele pode andar.

**Exemplo de:**
- Entrada:
    ```css
    Informe a sua altura (cm): 167
    Informe sua idade: 15
    ```
 
* Saída:
    ```css
    Você pode andar nos brinquedos:
    - Barca Viking
    - Elevator of Death

    Um total de 2 de 3 brinquedos.
    ```

---

### 🔹 Exercício 5 - Supermercado Otimista
**Descrição:** José está prestes a inaugurar seu supermercado. Ele acredita que o cidadão brasileiro é capaz de pagar suas compras sozinho, sem precisar de um funcionário para conferir se o que ele está pagando corresponde aos produtos que ele está levando. Para isso ele vai precisar de um programa que irá ler o **dia da semana** (string), o **preço do produto** (float), a **opção do produto** (string: "prata" ou "ouro") e o **nome** (string). 

- Se a compra estiver sendo realizada na **segunda**, **terça** ou **quarta** e a opção do produto for **"ouro"**, o preço do produto ficará pela **metade**. 

* Se a compra estiver sendo realizada na **quinta** ou **sexta** e o preço estiver **entre** R$ 10.00 e R$ 100.00, o preço será reduzido para **um terço do valor original**.

- Se a compra estiver sendo realizada no **sábado** e a opção for **prata**, o preço do produto será o **triplo**.

* Em qualquer **outro caso**, o preço será o **dobro**.

A saída do programa deve ser uma frase no seguinte formato: `"O preco do produto [nome do produto] no dia [dia da semana] é [preço do produto]"`

**Exemplo de:**
- Entrada:
    ```css
    Informe o dia da semana: terca
    Informe o preço do produto: 71.07
    Informe a opção do produto: prata
    Informe o nome do produto: laranja
    ```
 
* Saída:
    ```css
    O preco do produto laranja no dia terça é R$142.14
    ```
    
---