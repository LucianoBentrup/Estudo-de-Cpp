#include <iostream>
using namespace std;

int main()
{
    float num1,num2;
    char operador;


    cout << "Calculadora" << endl;
    cin >> num1 >> operador >> num2;

    switch (operador)
    {
        case '+' : cout << num1 << operador << num2 << "=" << num1+num2; break;
        case '-' : cout << num1 << operador << num2 << "=" << num1-num2; break;
        case '/' : cout << num1 << operador << num2 << "=" << num1/num2; break;
        case '*' : cout << num1 << operador << num2 << "=" << num1*num2; break;
        case '%' :
            bool Num1Int, Num2Int; 
            Num1Int=((int)num1 == num1);
            Num2Int=((int)num2 == num2);

            if (Num1Int&&Num2Int)

                cout << num1 << operador << num2 << "=" << (int)num1%(int)num2; 

            else

                cout << "Invalido!";
        
        break;

        default:cout << "Operador invalido" << endl; 

        
    }



system("pause>0");
}


