#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

class Aluno
{
private:
  string nome;
  int idade;
  float nota;

public:
  Aluno(string nome, int idade, float nota)
  {
    this->nome = nome;
    this->idade = idade;
    this->nota = nota;
  }

  void setNome(string nome) { this->nome = nome; }
  void setIdade(int idade) { this->idade = idade; }
  void setNota(float nota) { this->nota = nota; }

  string getNome() const { return nome; }
  int getIdade() const { return idade; }
  float getNota() const { return nota; }

  void mostrar() const
  {
    cout << "Nome: " << nome << ", Idade: " << idade << ", Nota: " << nota << endl;
  }
};

// Protótipos
void salvarDados(const vector<Aluno> &alunos);
void carregarDados(vector<Aluno> &alunos);
void cadastrarAluno(vector<Aluno> &alunos);
void listarAlunos(const vector<Aluno> &alunos);
void atualizarAluno(vector<Aluno> &alunos);
void removerAluno(vector<Aluno> &alunos);

int main()
{
  vector<Aluno> alunos;
  int opcao;

  carregarDados(alunos);

  do
  {
    cout << "\n------- Menu -------\n";
    cout << "1 - Adicionar Aluno\n";
    cout << "2 - Listar Alunos\n";
    cout << "3 - Atualizar Dados\n";
    cout << "4 - Remover Aluno\n";
    cout << "5 - Sair\n";
    cout << "Escolha: ";
    cin >> opcao;

    switch (opcao)
    {
    case 1:
      cadastrarAluno(alunos);
      break;
    case 2:
      listarAlunos(alunos);
      break;
    case 3:
      atualizarAluno(alunos);
      break;
    case 4:
      removerAluno(alunos);
      break;
    case 5:
      cout << "Saindo...\n";
      salvarDados(alunos);
      break;
    default:
      cout << "Opção inválida!\n";
    }
  } while (opcao != 5);

  return 0;
}

// Funções
void salvarDados(const vector<Aluno> &alunos)
{
  ofstream arquivo("alunos.txt"); // abre em modo de escrita, substitui conteúdo

  if (!arquivo)
  {
    cout << "Erro ao abrir o arquivo para salvar!\n";
    return;
  }

  for (const auto &a : alunos)
  {
    // salvamos nome, idade e nota separados por vírgula
    arquivo << a.getNome() << "," << a.getIdade() << "," << a.getNota() << "\n";
  }

  arquivo.close();
  cout << "Dados salvos com sucesso!\n";
}

void carregarDados(vector<Aluno> &alunos)
{
  ifstream arquivo("alunos.txt"); // abre em modo leitura

  if (!arquivo)
  {
    cout << "Nenhum dado encontrado. Iniciando lista vazia.\n";
    return;
  }

  string linha;
  while (getline(arquivo, linha))
  {
    size_t pos1 = linha.find(",");
    size_t pos2 = linha.rfind(",");

    if (pos1 == string::npos || pos2 == string::npos || pos1 == pos2)
      continue;

    string nome = linha.substr(0, pos1);
    int idade = stoi(linha.substr(pos1 + 1, pos2 - pos1 - 1));
    float nota = stof(linha.substr(pos2 + 1));

    alunos.push_back(Aluno(nome, idade, nota));
  }

  arquivo.close();
  cout << "Dados carregados com sucesso!\n";
}

void cadastrarAluno(vector<Aluno> &alunos)
{
  cin.ignore();

  string nome;
  int idade;
  float nota;

  cout << "\n--- Cadastro de Aluno ---\n";
  cout << "Nome: ";
  getline(cin, nome);
  cout << "Idade: ";
  cin >> idade;
  cout << "Nota: ";
  cin >> nota;

  alunos.push_back(Aluno(nome, idade, nota));
  cout << "Aluno cadastrado com sucesso!\n";
}

void listarAlunos(const vector<Aluno> &alunos)
{
  cout << "\n--- Lista de Alunos ---\n";

  if (alunos.empty())
  {
    cout << "Nenhum aluno cadastrado.\n";
    return;
  }
  for (const auto &a : alunos)
    a.mostrar();
}

void atualizarAluno(vector<Aluno> &alunos)
{
  if (alunos.empty())
  {
    cout << "Nenhum aluno para atualizar.\n";
    return;
  }

  cin.ignore();
  string nomeBusca;
  cout << "\nDigite o nome do aluno que deseja atualizar: ";
  getline(cin, nomeBusca);

  for (auto &a : alunos)
  {
    if (a.getNome() == nomeBusca)
    {
      string novoNome;
      int novaIdade;
      float novaNota;

      cout << "Novo nome: ";
      getline(cin, novoNome);
      cout << "Nova idade: ";
      cin >> novaIdade;
      cout << "Nova nota: ";
      cin >> novaNota;

      a.setNome(novoNome);
      a.setIdade(novaIdade);
      a.setNota(novaNota);

      cout << "Aluno atualizado com sucesso!\n";
      return;
    }
  }
  cout << "Aluno não encontrado.\n";
}

void removerAluno(vector<Aluno> &alunos)
{
  if (alunos.empty())
  {
    cout << "Nenhum aluno para remover.\n";
    return;
  }

  cin.ignore();
  string nomeBusca;
  cout << "\nDigite o nome do aluno que deseja remover: ";
  getline(cin, nomeBusca);

  for (auto it = alunos.begin(); it != alunos.end(); ++it)
  {
    if (it->getNome() == nomeBusca)
    {
      alunos.erase(it);
      cout << "Aluno removido com sucesso!\n";
      return;
    }
  }
  cout << "Aluno não encontrado.\n";
}