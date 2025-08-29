#include <iostream>
#include <string>

using namespace std;

// Problema: Armazenar as informações dos alunos de uma escola.

// Declarando uma struct
struct Aluno {
  string nome;
  int idade;
  float nota;
};


int main() {
    // Dados de um aluno
    string nome;
    int idade;
    float nota;

    // Dados de outro aluno
    string nome2;
    int idade2;
    float nota2;

    // Criando uma variável do tipo "struct aluno"
    Aluno aluno1;

    // Inicializando uma variável do tipo "struct aluno"
    Aluno aluno2 = {"Pedro", 20, 7.5};

    // Acessando os valores
    cout << "Nome: " << aluno1.nome << endl;
    cout << "Idade: " << aluno1.idade << endl;
    cout << "Nota: " << aluno1.nota << endl;

    // Modificando os valores
    aluno1.nome = "Bruno";
    aluno1.idade = 22;
    aluno1.nota = 6.7;

    // Acessando valores após a modificação
    cout << "Nome: " << aluno1.nome << endl;
    cout << "Idade: " << aluno1.idade << endl;
    cout << "Nota: " << aluno1.nota << endl;

    // Preenchendo uma struct com cin
    cout << "Informe seu nome: ";
    getline(cin, aluno1.nome);

    cout << "Informe sua idade: ";
    cin >> aluno1.idade;

    cout << "Informe sua nota: ";
    cin >> aluno1.nota;

    // Acessando os valores:
    cout << "Dados do Aluno 1" << endl;
    cout << "Nome: " << aluno1.nome << endl;
    cout << "Idade: " << aluno1.idade << endl;
    cout << "Nota: " << aluno1.nota << endl;

    return 0;
}

 // A medida que o números de alunos crescem é preciso delcarar mais três variáveis para armazenar os dados. Como resolver isso ?

// Solução: Usar uma struct. Uma struct te permite criar um novo tipo de dado a partir de dados primitivos (char, int, float, double). E como isso nos ajuda ? A ideia é criar um tipo de dado chamando "aluno" que contera os seus dados. Não entendeu ? Vamos para a prática!!