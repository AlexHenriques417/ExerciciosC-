#include <iostream>
using namespace std;

//std signfica padrão, esse comando signfica definição de estruturas padronizadas nas funções da biblioteca.

//endl signfica o comando de pular linha.

//cout representa a stream de saída.

//cin representa a stream de entrada.

//iostream declara objetos que controlam a leitura e a gravação nos fluxos padrão.

void opcao1() {
    cout << "Voce escolheu a opcao 1" << endl; 
}

void opcao2() {
    cout << "Voce escolheu a opcao 2" << endl;
}

void opcao3() {
    cout << "Voce escolheu a opcao 3" << endl;
}

void sair() {
    cout << "Saindo..." << endl;
}

int main() {
    int escolha;

    do{
        cout << "Menu: " << endl;
        cout << "1. Opcao 1" << endl;
        cout << "2. Opcao 2" << endl;
        cout << "3. Opcao 3" << endl;
        cout << "4. Sair" << endl;
        cout << "Escolha uma opcao (1-4):";
        cin >> escolha;

        switch (escolha){
            case 1:
                opcao1();
                break;
            case 2:
                opcao2();
                break;
            case 3:
                opcao3();
                break;
            case 4:
                sair();
                break;
            default:
                cout << "Opcao Invalida. Tente Novamente." << endl;
        }
    } while (escolha != 4);
}