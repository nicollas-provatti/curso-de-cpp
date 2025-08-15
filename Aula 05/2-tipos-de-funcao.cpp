#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Sem parâmetro e sem retorno
void mensagem() {
    cout << "Olá, mundo!" << endl;
}

// Com parâmetro e sem retorno
void mensagemPersonalizada(string nome) {
    cout << "Olá, " << nome << endl;
}

// Sem parâmetro e com retorno
int obterNumero() {
    return rand() % 10 + 1; // sorteia entre 1 e 10
}

// Com parâmetro e com retorno
int multiplicar(int n1, int n2) {
    return n1 * n2;
}

int main() {
    srand(time(NULL)); // inicializa o gerador de números aleatórios

    mensagem();

    mensagemPersonalizada("Nícollas");

    int numero = obterNumero();
    cout << "Número: " << numero << endl;

    int resultado = multiplicar(2, 3);
    cout << "Resultado: " << resultado << endl;

    return 0;
}
