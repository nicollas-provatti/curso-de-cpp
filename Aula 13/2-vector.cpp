#include <iostream>
#include <vector>  
using namespace std;

int main() {
  vector<string> nomes = {"Ana", "Carlos", "Maria"};

	cout << "Primeiro nome: " << nomes[0] << endl;
	cout << "Segundo  nome: " << nomes.at(1) << endl;

	nomes[2] = "João";
	cout << "Terceiro nome: " << nomes.at(2) << endl;

  return 0;
}