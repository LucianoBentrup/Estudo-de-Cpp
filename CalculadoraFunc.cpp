#include <iostream>
using namespace std;

//Menu
// Realizar + , - , * , / , % , !

void soma()
{
    double num1,num2,resultado;
    cout << "Insira os valores para soma: ";
    cin >> num1;
    cin >> num2;
    resultado = num1 + num2;
    cout << "O resultado é: " << resultado;
}

void subtracao()
{
    double num1, num2, resultado;
    cout << "Insira os valores para subtracao: ";
    cin >> num1;
    cin >> num2;
    resultado = num1 - num2;
    cout << "O resultado é: " << resultado;
}

void multiplicacao()
{
    double num1, num2, resultado;
    cout << "Insira os valores para multiplicacao: ";
    cin >> num1;
    cin >> num2;
    resultado = num1 * num2;
    cout << "O resultado é: " << resultado;
}

void divisao()
{
    double num1, num2, resultado;
    cout << "Insira os valores para divisao: ";
    cin >> num1;
    cin >> num2;
    resultado = num1 / num2;
    cout << "O resultado é: " << resultado;   
}

void modulado()
{

}