#include <iostream>
using namespace std;


/*Verificar: 
Pilha: https://www.ime.usp.br/~pf/algoritmos/aulas/pilha.html
Vetor: https://wagnergaspar.com/como-orden...oritmo-insertion-sort-ordenacao-por-insercao/
Matriz: https://www.ic.unicamp.br/~lehilton/mc102qr/unidades/08-matrizes.html*/
//Programa para lista de comprar
//Necessita inserir saldo ✓
//Criar menu ✓
// Insirir nome, preco e quantidade do produto 
// Calcular o saldo restante e mostrar
// Mostrar a lista e valor dela


//Variaveis globais
int qntd,tamanho;
float saldo,valor;
string* produto = new string[tamanho];
int* qntd = new int[tamanho];
int* valor = new int[tamanho];
//Variaveis globiais


//Funcoes

void eSaldo()
{
    cout << "Insira seu saldo: " ; 
    cin >> saldo;
    cout << endl << endl << endl;
}

void inserir()
{
    //nome, valor, qntd
    int opcao1;
    
    cout << endl << "Insira 1 para continuar ou 9 para voltar para o menu:"; 
    cout << opcao1;
    
    switch(opcao1)
    {
        case 1: 
        {
            
        }
        case 9: cout << "Indo para o menu..." << endl << endl;
    }

}

void exibir()
{
    //Puxar os dados e printar eles aqui 

    
}

void Menu()
{
    int opcao;
    
    //Menu
    cout << endl << "===============Menu===============" << endl;
    cout << "Opcoes:" << endl;
    cout << "1 - Modificar saldo";
    cout << "2 - Insirir produto";
    cout << "3 - Exibir lista";
    cout << "9 - Sair"; 
    cout << endl << endl;
    cout << "Insira sua opção:";
    cin >> opcao;
    //Fim menu

    switch(opcao)
    {
    case 1: eSaldo(); break;
    case 2: inserir(); break;
    case 3: exibir(); break;
    case 9: cout << "Obrigado por usar meu programa :)"; break;
    default: cout << "Insira uma opção valida!" << endl << endl; Menu(); break;
    }//Fim switch


}


//Int main

int main()
{
   
    eSaldo();
    Menu(); 

}//Fim int main
