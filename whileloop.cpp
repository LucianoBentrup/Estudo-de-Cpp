#include <iostream>
using namespace std;

int main(){

    int num;

cout << "Contador de digitos" << endl;
cout << "Digite um numero:"; 
cin >> num; 

    if(num==0)
        cout << "Voce inseriu 0";
    else 
    {
        
        int counter=0;
        while (num>0){
            num = num/10; 
            counter++;

        }//Fim while.

    cout << "O numero que voce digitou possui " << counter << " digitos";

    }//Fim else





}


