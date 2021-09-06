#include <iostream>
using namespace std;
  
void main {
  
    //Caculadora IMC
    //Peso / (altura * altura)
    //acima da media > 18.5
    //Na media 18.5-24.9
    //Abaixo da media < 25
  
  
    float altura,peso,imc;
    
    
    cout << "Use pontos no lugar de virgulas" << endl;
    
  
    cout << "Insira sua altura: ";
    cin >> altura;
    
    
    cout << "Insira o seu peso: ";
    cin >> peso;

  
    imc = peso / (altura * altura);

    
  
    if (imc < 18.5)
        cout << "Voce esta abaixo da media" << endl;
    else if (imc > 25)
        cout << "Voce esta acima da media" << endl;
    else 
        cout << "Voce esta na media!" << endl;


    cout << "IMC = " << imc << endl;
     

    system("pause>0");
}
  
