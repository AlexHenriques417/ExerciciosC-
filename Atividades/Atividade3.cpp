#include <iostream>
using namespace std;

//double é para números decimais com uma precisão maior do que o float

int main() {
    double num1 = 15;
    double num2 = 3;

    double soma = num1 + num2;
    double subtracao = num1 - num2;
    double multiplicacao = num1 * num2;
    double divisao = num1 / num2;

    cout << "Soma:" << num1 << "+" << num2 << "=" << soma << endl;
    cout << "Subtracao:" << num1 << "-" << num2 << "=" << subtracao << endl;
    cout << "Multiplicacao:" << num1 << "*" << num2 << "=" << multiplicacao << endl;
    cout << "Divisao:" << num1 << "/" << num2 << "=" << divisao << endl;

    return 0;

}
