#include <iostream>
using namespace std;

int main()
{

    float num;

cout << "Contador de digitos" << endl;
cout << "Digite um numero:"; 
cin >> num; 

    if(num==0)
        cout << "Voce inseriu 0";
    else 
    {
        if (num<0)
        {
            num = -1 * num; 
        }// Fim else if 
        

        int counter=0;
        while (num>0){
            num = num/10; 
            counter++;

        }//Fim while.
    
    cout << "O numero que voce digitou possui " << counter << " digitos";

    }//Fim else

}


