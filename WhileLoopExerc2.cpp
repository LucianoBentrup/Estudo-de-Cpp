#include <iostream>
using namespace std;

    //reverter um numero
    //

int main ()
{

    int num=0,rnum=0;

    cout << "Insira o numero:";
    cin >> num;

        while (num>=0)
        {
            if (num<0){
                num = num * -1;
            }//fim if


            rnum = rnum * 10;
            rnum = num % 10 + rnum; 
            cout << "loop";
        }//fim while
     
    cout << "O numero ao contrario é:" << rnum << endl;


}// Fim void main