## 📝 Exercícios 

---

### 🔹 Exercício 1 - Vogais na Frase
**Descrição:** Cacau quer descobrir quantas vogais existem em determinadas frases. Além disso, Cacau também gostaria de saber a porcentagem que essas vogais representam. 

Ajude Cacau nessa encruzilhada! Faça um programa que receba como entrada uma frase e armazene-a em um vetor de caracteres. Em seguida, conte quantas vogais existem em determinada frase e calcule a porcentagem dessas vogais em relação a quantidade total de letras da frase.

**Observação:** não diferencie letras minúsculas e maiúsculas.

**Exemplo de:**
- Entrada:
  ```yaml
  Digite um texto: Lembre-se de se EXERCITAR BEM!
  ```
 
* Saída:
  ```yaml
  Quantidade de aparições:
  Letra 'a': 1
  Letra 'e': 8
  Letra 'i': 1
  Letra 'o': 0
  Letra 'u': 0

  As vogais representam 33.33% do texto.
  ```

---

### 🔹 Exercício 2 - Correção de Provas
**Descrição:** Faça um programa para corrigir provas de múltipla escolha (A-D). Cada prova tem 5 questões, cada questão valendo um ponto. O primeiro conjunto de dados a ser lido é o gabarito para a correção da prova. Depois serão dados os números dos alunos e suas respectivas respostas. O programa encerra a entrada quando o número de um aluno dado for igual a 9999.

Para cada aluno lido, na mesma ordem de leitura, deve ser impresso seu número e sua nota.

Ao final, deve ser impresso a porcentagem de aprovação, sabendo-se que a nota mínima para aprovação é de 3. O percentual deve ser impresso no formato decimal seguido do caractere %.

**Exemplo de:**
- Entrada:
  ```yaml
  Informe o gabarito: acdba

  Dados do Aluno:
  Número: 1
  Resposta: abcda

  Dados do Aluno:
  Número: 2
  Resposta: cbcbd

  Dados do Aluno:
  Número: 3
  Resposta: aacba

  Dados do Aluno:
  Número: 4
  Resposta: cabca

  Dados do Aluno:
  Número: 5
  Resposta: bcdba


  ```
 
* Saída:
  ```css
  Resultdo

  O aluno número 1 acertou 2 de 5
  O aluno número 2 acertou 1 de 5
  O aluno número 3 acertou 3 de 5
  O aluno número 4 acertou 1 de 5
  O aluno número 5 acertou 4 de 5

  A porcentagem de aprovação foi de 40%.
  ```

---

### 🔹 Exercício 3 - Pontuação em um Campeonato
**Descrição:** Você foi contratado para desenvolver um pequeno sistema para ajudar na análise de um campeonato de futebol entre 3 times que disputaram 3 rodadas. O organizador do campeonato forneceu uma tabela com as pontuações, onde:

- Cada linha da tabela representa um time (Time 1, Time 2 e Time 3);
- Cada coluna representa uma rodada (Rodada 1, Rodada 2 e Rodada 3);
- Cada posição na matriz contém a pontuação do time naquela rodada (por exemplo: vitória = 3 pontos, empate = 1 ponto, derrota = 0 pontos).

Sua tarefa é ler a pontuação dos 3 times nas 3 rodadas e armazenar os valores em uma matriz 3x3. Depois, calcule e apresente:

- A pontuação total de cada time (soma das linhas);
- A pontuação total de cada rodada (soma das colunas).

**Exemplo de:**
- Entrada:
  ```yaml
  Time 1 (3 rodadas): 3 1 0  
  Time 2 (3 rodadas): 1 3 3  
  Time 3 (3 rodadas): 0 1 1  
  ```
 
* Saída:
  ```yaml
  Pontuação por time:
  Time 1: 4 pontos
  Time 2: 7 pontos
  Time 3: 2 pontos

  Pontuação por rodada:
  Rodada 1: 4 pontos
  Rodada 2: 5 pontos
  Rodada 3: 4 pontos
  ```

---

### 🔹 Exercício  4 - Elementos de uma Matriz
**Descrição:** Com o aumento do uso dos computadores a teoria das matrizes está cada vez mais sendo aplicada em áreas como, Engenharia, Matemática, dentre outras.

Assim o desafio é você criar um programa que peça ao usuário a quantidade de linhas e colunas de uma matriz que ele quer. Em seguida, inserir os elementos da matriz e imprimir a saída esperada.

A entrada consiste em dois números inteiros que indicam o número de linhas (L) e o de coluna (C), onde 0 ≤ L ≤ 100 e 0 ≤ C ≤ 100. Logo em seguida cada valor da matriz.

Você deverá imprimir a matriz resultante no formato de matriz, onde os elementos da primeira linha aparecerão lado a lado, separados por um espaço, a soma da sua diagonal principal e secundária e os elementos menores e maiores que zero.

**Observação:** Se a matriz dada não for quadrada você não poderá determinar as somas da sua diagonal principal e secundária. Para esse caso imprima `"A diagonal principal e secundaria nao pode ser obtida."`

**Exemplo de:**
- Entrada:
  ```yaml
  Informe as dimensões da matriz:
  Linhas: 3
  Colunas: 3

  Informe os números: 1 2 3 4 5 6 7 8 9
  ```
 
* Saída:
  ```yaml
  Matriz formada:
  1 2 3
  4 5 6
  7 8 9
  A diagonal principal e secundaria tem valor(es) 15 e 15 respectivamente.
  A matriz possui 0 numero(s) menor(es) que zero.
  A matriz possui 9 numero(s) maior(es) que zero.
  ```

---

### 🔹 Exercício  5 - Brincando com Matrizes
**Descrição:** Escreva umprograma que leia uma matriz 3 x 3 de inteiros da entrada padrão e calcule a média de todos seus valores positivos, o menor  valor lido, o valor delta e a soma de todos os elementos que não estão na diagonal principal.

O delta é igual a 1 se o menor valor for par e 0 se for ímpar.

**Exemplo de:**
- Entrada:
  ```yaml
  Informe os números: 1 2 3 4 5 6 7 8 9
  ```
 
* Saída:
  ```yaml
  Matriz formada:
  Média dos números positivos: 5.0
  Menor número: 1
  Valor de delta: 0
  Soma: 30
  ```

---

