#include <iostream>
using namespace std;

int main()
{
    int num,mult=1,soma=1;
    
    cout << "Insira um numero:";
    cin >> num;

    while(num>0)
    {

    
    num--;
    soma = mult * soma;
    mult++;

    }

if(num<0)
{
    cout << "Nao existe fatorial de numero negativo";
}
else
cout << "O resultado é " << soma << "." << endl;

}