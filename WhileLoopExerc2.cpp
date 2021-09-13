#include <iostream>
using namespace std;

    //reverter um numero
    

int main ()
{

    int num=0,rnum=0;

    cout << "Insira o numero:";
    cin >> num;

        while (num!=0)
        {
        rnum = rnum * 10;
        rnum = num % 10 + rnum;
          
        num = num / 10;
        
        }//fim while
     
    cout << "O numero ao contrario é " << rnum << endl;


}// Fim void main