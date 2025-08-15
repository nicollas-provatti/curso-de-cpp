## 📝 Exercícios 

---

### 🔹 Exercício 1 - Escola de Música
**Descrição:** A Escola de Música Melodia é bastante conceituada na cidade e forma grandes profissionais. Para isso, exige que seus alunos tenham no **máximo 10 faltas** por semestre, e que obtenham **média mínima 7** para serem aprovados. Aqueles que **não excedem** o limite de faltas e conseguem média igual ou superior a **9,5** são aprovados com louvor.

Escreva uma função chamada `classificaAluno` que receba como parâmetro a média e a quantidade de faltas de um aluno e informe sua situação ao final do semestre:
- APROVADO COM LOUVOR
- APROVADO 
- REPROVADO 
- REPROVADO POR FALTAS

**Exemplo de:**
- Entrada:
    ```yaml
    Informe sua média: 6.9
    Informa as faltas: 10
    ```
 
* Saída:
    ```css
    REPROVADO
    ```

---

### 🔹 Exercício 2 - Volume da Esfera
**Descrição:** Escreva um programa que receba o raio de três esferas e forneça o volume das mesmas. A solução deve obrigatoriamente usar uma função chamada `volumeEsfera` que receba o valor do raio como único parâmetro e retorne o valor do volume da esfera.

O seu programa deve chamar a função para calcular os volumes das esferas e de posse do valor imprimir o resultado.

**Observação:** O volume da esfera é calculado da seguinte forma: Volume= (4πR^3)/3. Considere π como tendo o valor 3.1416.


**Exemplo de:**
- Entrada:
    ```yaml
    Raio da primeira esfera: 1.0
    Raio da segunda esfera: 4.0
    Raio da terceira esfera: 2.0
    ```
 
* Saída:
    ```yaml
    Volume da primeira esfera: 4.19 
    Volume da segunda esfera: 268.08 
    Volume da terceira esfera: 33.51 
    ```

---

### 🔹 Exercício 3 - Hospedagem na Praia
**Descrição:** Um belo hotel na praia tem apartamentos especialmente decorados e cobra os valores indicados na tabela a seguir. Com o fim do verão, o movimento caiu e o hotel resolver oferecer 15% de desconto para hospedagens de 3 ou mais dias.

|Tipo de Apartamento| Valor Diária|
|-------------------|-----------------------|
|Individual |R$ 125|
|Suíte Dupla  |R$ 140|
|Suíte Tripla  |R$ 180|

Escreva uma função chamada `calculaHospedagem` que receba por parâmetro o tipo de apartamento desejado e a quantidade de diárias, e calcule e retorne o valor total a ser pago.

**Exemplo de:**
- Entrada:
    ```yaml
    Informe o tipo do apartamento: individual
    Informe a quantidade de dias: 3
    ```
 
* Saída:
    ```yaml
    O valor total a ser pago será de R$318.75
    ```

---

### 🔹 Exercício 4 - Conversão de Moeda
**Descrição:** Crie uma função chamada `converterMoeda` que recebe um valor em reais (no tipo real) e a cotação atual do dolar e exiba a para dólares.

**Exemplo de:**
- Entrada:
    ```yaml
    Valor em real: 101.53
    Cotação do dolar: 5.75
    ```
 
* Saída:
    ```yaml
    A cotação de R$101.53 para dólar é US$17.66
    ```

---

### 🔹 Exercício 5 - Fábrica
**Descrição:** Em uma fábrica trabalham homens e mulheres divididos em três classes:

- Classe 1 - trabalhadores que fazem até 30 peças por mês;
- Classe 2 - trabalhadores que fazem 31 a 41 peças por mês;
- Classe 3 - trabalhadores que fazem mais de 41 peças por mês.

A classe 1 recebe **salário mínimo**. A classe 2 recebe o salário mínimo e mais 3% do salário mínimo por cada peça que exceda as 30 peças iniciais. A classe 3 recebe o salário mínimo e mais 5% do salário mínimo por cada peça que exceda as 30 peças iniciais.

Faça um programa para ler o número de peças fabricadas por três pessoas no mês, e informar o salário de cada pessoa, o total de peças fabricadas, a média de peças fabricadas por cada pessoa e o maior salário.

**Observação:** É necessária a utilização de função (mais de uma se achar necessário) definida pelo programador(a) para a solução da questão.

**Exemplo de:**
- Entrada:
    ```yaml
    Informe o valor do salário: 1212
    Peças fabricadas pela primeira pessoa: 12
    Peças fabricadas pela segunda pessoa: 37
    Peças fabricadas pela terceira pessoa: 45
    ```
 
* Saída:
    ```yaml
    Salario da primiera pessoa: R$1212.00
    Salario da segunda pessoa: R$1466.52
    Salario da terceira pessoa: R$2121.00
    Total de pecas fabricadas: 94
    Media de pecas fabricadas: 31.33
    Maior salario: R$2121.00
    ```


---

