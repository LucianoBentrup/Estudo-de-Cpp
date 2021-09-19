#include <iostream>
using namespace std; 

//Fatorial
//6! = 1 * 2 * 3 * 4 * 5 * 6 = 720


void main()
{
    int num,resultado=1; 

    cout << "Numero: ";
    cin >> num;

    for(int x=1;x<=num;x++)
    {
        resultado = resultado * x;
    }

    cout << num << "!=" << resultado;

}