#include <iostream>

using namespace std;

float calcularMedia(float nota1, float nota2) {
    return (nota1 + nota2) / 2.0;
}

string definirSituacao(float media) {
    if (media >= 7) {
        return "Aprovado";
    } else if (media >=4 && media < 7) {
        return "Recuperacao";
    } else if (media >= 0 && media < 4){
        return "Reprovado";
    }
    return "Media Invalida";
}

void exibirDados(string nome, float nota1, float nota2, float media, string situacao) {
    cout << "Dados do Aluno\n";
    cout << "Nome: " << nome << endl;
    cout << "Nota 1: " << nota1 << endl;
    cout << "Nota 2: " <<  nota2 << endl;
    cout << "Media: " << media << endl;
    cout << "Situacao: " << situacao << endl;
}

int main() {
    float nota1, nota2, media;
    string nome, situacao = "";

    cout << "Digite seu nome: ";
    getline(cin, nome);

    cout << "Digite a primeira nota: ";
    cin >> nota1;

    cout << "Digite a segunda nota: ";
    cin >> nota2;

    media = calcularMedia(nota1, nota2);

    situacao = definirSituacao(media);

    exibirDados(nome, nota1, nota2, media, situacao);

    return 0;
}