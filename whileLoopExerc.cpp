#include <iostream>
using namespace std; 

    // Escreva todos numeros entre 100-500 que podem ser divididos por 3 e 5 

int main(){

int counter;
counter=100;

    while (counter<=500)
    {
        if (counter % 3==0 && counter % 5==0)
        {
            cout << "O numero " << counter << "é divisivel por 3 e 5";
        }// Fim if
    counter++; 
    }// Fim while
    


}// Fim int main