#include <iostream>
using namespace std;

int main() {

	int HostUserNum, GuestUserNum;

		cout << "Insira um numero: ";
		cin >> HostUserNum;
		system("cls");


		cout << "Tente advinhar o numero inserido: ";
		cin >> GuestUserNum;


			if(HostUserNum==GuestUserNum)
				cout << "Correto";
			else
				cout << "Incorreto";



		system("pause>0");
