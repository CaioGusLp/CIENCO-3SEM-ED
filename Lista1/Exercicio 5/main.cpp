#include <iostream>
#include <locale>
using namespace std;

/*Construa um programa em C++ que calcule e apresente quanto deve ser
pago por um produto considerando a leitura do pre�o de etiqueta (PE) e o
c�digo da condi��o de pagamento (CP). Utilize para os c�lculos a tabela de
condi��es de pagamento a seguir:
*/


int main()
{
    setlocale(LC_ALL, "PORTUGUESE");
    float  valor, valorfinal;
    int cond;

    cout << "Informe a condi��o: ";
    cin >> cond;

    cout << "Informe o valor da compra: ";
    cin >> valor;

switch(cond)
    {
        {
    case 1:

    cout << "\n� vista em dinheiro ou cheque, com 10% de desconto";
    valorfinal = valor - (valor * 0.10);
    cout << " o valor da compra em dinheiro ficou R$:"<< valorfinal;

    break;
    }
    case 2:
{

    cout << "\n� vista com cart�o de cr�dito, com 5% de desconto";
    valorfinal = valor - (valor * 0.05);
    cout << " o valor da compra ficou R$: "<< valorfinal;
    break;

}
    case 3:
{

    cout << "\nEm duas vezes, pre�o da etiqueta normal sem juros";
    valorfinal = valor / 2;
    cout << " o valor vai ser de R$: "<<valorfinal;
    break;

}

    case 4:
{


        cout <<"\nEm tr�s vezes, pre�o de etiqueta com o valor de acr�scimo de 10%";
        valorfinal = ((valor/3)* 0.1) + (valor / 3);
        cout << " o valor ficou R$: "<<valorfinal;
        break;

}
    default:
{
    cout<<"Cod�go inexistente.";
}

    }
}
