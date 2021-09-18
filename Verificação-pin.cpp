#include <iostream>
using namespace std;

void main()
{

    int userpin=1234, pin=0, contadorerro=0;

    do {
        cout << "Insira a senha correta:";
        cin >> pin; 
        if(pin!=userpin)
        contadorerro++;


    }while(contadorerro<=3 && pin!=userpin); 

}
