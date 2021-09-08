#include <iostream>
using namespace std;

int main()
{

//Programa para verificar quantos dias um mes tem
// (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0) 

int ano, mes;

cout << "***Verifique quantos dias tem o mês***" << endl;
cout << "Insira o ano: ";
cin >> ano;
cout << "Insira o mês: ";
cin >> mes;

    switch (mes)
    {
    case 2: (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0)? 
        cout << "Mes de 29 dias" : cout << "Mes de 28 dias"; break; 
    case 4:
    case 6:
    case 9:
    case 11: cout << "Mes de 30 dias"; break;
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12: cout << "Mes de 31 dias"; break;

    default: cout << "Insira um mes em numero valido"; break;

    
    
    }

system("pause>0");

}
