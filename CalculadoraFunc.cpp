#include <iostream>
using namespace std;

//Menu
// Realizar + , - , * , / , % , !

void soma()
{
    double num1,num2,resultado;
    cout << "Insira os valores para soma: " << endl;
    cout << "Valor 1: ";
    cin >> num1;
    cout << "valor 2: ";
    cin >> num2;
    resultado = num1 + num2;
    cout << "O resultado é: " << resultado << endl;
}//Fim soma

void subtracao()
{
    double num1, num2, resultado;
    cout << "Insira os valores para subtracao: " << endl;
    cout << "Valor 1: ";
    cin >> num1;
    cout << "Valor 2: ";
    cin >> num2;
    resultado = num1 - num2;
    cout << "O resultado é: " << resultado << endl;
}// Fim subtracao

void multiplicacao()
{
    double num1, num2, resultado;
    cout << "Insira os valores para multiplicacao: " << endl;
    cout << "Valor 1: ";
    cin >> num1;
    cout << "Valor 2: ";
    cin >> num2;
    resultado = num1 * num2;
    cout << "O resultado é: " << resultado << endl;
}//Fim multiplicacao

void divisao()
{
    double num1, num2, resultado;
    cout << "Insira os valores para divisao: " << endl;
    cout << "Valor 1: ";
    cin >> num1;
    cout << "Valor 2: ";
    cin >> num2;
    resultado = num1 / num2;
    cout << "O resultado é: " << resultado << endl;   
}//Fim divisao

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
               cout << "O resultado é: " << resultado << endl;
            }//Fim if
            else
            {
                cout << "Invalido!";
            }//Fim else
                
}//Fim Modulado

void fatorial()
{
    int num,resultado=1; 

    cout << "Insira um numero: ";
    cin >> num;

    for(int x=1;x<=num;x++)
    {
        resultado = resultado * x;
    }//Fim for

cout << "O resultado de " << num << "! é " << resultado << endl; 

}//Fim Fatorial

void Calculadora()
{
    int opcao=0;
    while(opcao!=9)
    {
        cout << endl << "===============Menu===============" << endl;
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
            case 9: cout << "Obrigado por usar minha calculadora"; break;
            default: cout << "Insira uma opcao valida!"; break;
        }//Fim Switch
    }//Fim while
}//Fim calculadora

int main()
{
    
    int c=0,userpin=1234, pin=0, contadorerro=0;

    do {
        cout << "Insira a senha correta:";
        cin >> pin; 
        if(pin!=userpin)
        {
            cout << "Senha incorreta! Tente novamente" << endl;
            contadorerro++;
        }
        


    }while(contadorerro<3 && pin!=userpin); 

    if(pin==userpin && contadorerro<3)
    {
        cout << "Abrindo calculadora aguarde um momento..." << endl << endl << endl << endl << endl << endl;

        Calculadora();
    }//Fim if
    else
    {
        cout << "Tente novamente mais tarde";
    }


}