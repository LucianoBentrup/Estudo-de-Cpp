

#include <iostream>

using namespace std;

int main(){

	//Usario entra o tamanho dos lados de um triangulo (a,b,c).
	//O programa devera responder se o triangulo é isósceles, equilátero ou escaleno.
	// Atribuir func

	float a, b, c;

	cout << "Insira o tamanho do lado A do triangulo: " << endl;
	cin >> a;
	cout << "Insira o tamanho do lado B do triangulo: " << endl	;
	cin >> b;
	cout << "Insira o tamanho do lado C do triangulo: " << endl;
	cin >> c;

	if (a == b && b == c) 
	{
		cout << "O triangulo que voce inseriu é equilatero";

	}
	else
	{
		if (a != b && a != c && b != c)
		{
			cout << "O triangulo que voce inseriu é escaleno";

		}
		else
		{
			cout << "O triangulo que voce inseriu é isósceles";

		}


	}
	system("pause>0");
}


