#include <iostream>
using namespace std;

int main()
{

    int userpin=1234, pin=0, contadorerro=0;

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
        cout << "Entrando...";
    }
    else 
    {
        cout << "Conta Bloqueada!";
    }


}
