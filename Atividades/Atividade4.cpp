#include <iostream>
using namespace std;

//Oi
int main() {
    int quantidadeNotas;
    cout << "Quantas notas o aluno possui? ";
    cin >> quantidadeNotas;

    float soma = 0.0, nota;

    for (int i = 1; i <= quantidadeNotas; i++) {
        cout << "Digite a nota " << i << ": ";
        cin >> nota;
        soma += nota;
    }

    float media = soma / quantidadeNotas;
    cout << "A média do aluno é: " << media << endl;

    if (media >= 7.0) {
        cout << "Aluno aprovado!" << endl;
    } else if (media >= 5.0) {
        cout << "Aluno em recuperação." << endl;
    } else {
        cout << "Aluno reprovado." << endl;
    }

    return 0;
}
