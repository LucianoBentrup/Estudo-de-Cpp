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
    int num,modulo,resultado;
    cout << "Insira o numero: ";
    cin >> num;
    cout << "Insira o modulo: ";
    cin >> modulo;

    bool NumInt, moduloInt; 
            NumInt=((int)num == num);
            moduloInt=((int)modulo == modulo);

            if (NumInt && moduloInt)
            {
               resultado = (int)num % (int)modulo;
               cout << "O resultado é: " << resultado;
            }
            else
            {
                cout << "Invalido!";
            }
                
}

void fatorial()
{
    int num,resultado=1; 

    cout << "Insira um numero: ";
    cin >> num;

    for(int x=1;x<=num;x++)
    {
        resultado = resultado * x;
    }

cout << "O resultado de " << num << "! é " << resultado; 

}

void Calculadora()
{
    int opcao=0;
    while(opcao!=9)
    {
        cout << "===============Menu===============" << endl;
        cout << "Opcoes:" << endl;
        cout << "1 - Soma" <<endl;
        cout << "2 - Subtracao" << endl; 
        cout << "3 - Multiplicacao" << endl; 
        cout << "4 - divisao" << endl; 
        cout << "5 - Modulo" << endl; 
        cout << "6 - Fatorial" << endl;
        cout << "9 - Sair" << endl;
        cout << "Qual opcao voce deseja executar:";
        cin >> opcao;

        switch(opcao)
        {
            case 1: soma(); break;
            case 2: subtracao(); break;
            case 3: multiplicacao(); break;
            case 4: divisao(); break;
            case 5: modulado(); break; 
            case 6: fatorial(); break;
            case 9: "Obrigado por usar minha calculadora"; break;
            default: "Insira uma opcao valida!"; break;
        }
    }
}


int main()
{

}