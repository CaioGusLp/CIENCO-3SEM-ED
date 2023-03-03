#include <iostream>
#include <locale>
using namespace std;

/*Construa um programa em C++ que calcule e apresente quanto deve ser
pago por um produto considerando a leitura do preço de etiqueta (PE) e o
código da condição de pagamento (CP). Utilize para os cálculos a tabela de
condições de pagamento a seguir:
*/


int main()
{
    setlocale(LC_ALL, "PORTUGUESE");
    float  valor, valorfinal;
    int cond;

    cout << "Informe a condição: ";
    cin >> cond;

    cout << "Informe o valor da compra: ";
    cin >> valor;

switch(cond)
    {
        {
    case 1:

    cout << "\nÁ vista em dinheiro ou cheque, com 10% de desconto";
    valorfinal = valor - (valor * 0.10);
    cout << " o valor da compra em dinheiro ficou R$:"<< valorfinal;

    break;
    }
    case 2:
{

    cout << "\nÁ vista com cartão de crédito, com 5% de desconto";
    valorfinal = valor - (valor * 0.05);
    cout << " o valor da compra ficou R$: "<< valorfinal;
    break;

}
    case 3:
{

    cout << "\nEm duas vezes, preço da etiqueta normal sem juros";
    valorfinal = valor / 2;
    cout << " o valor vai ser de R$: "<<valorfinal;
    break;

}

    case 4:
{


        cout <<"\nEm três vezes, preço de etiqueta com o valor de acréscimo de 10%";
        valorfinal = ((valor/3)* 0.1) + (valor / 3);
        cout << " o valor ficou R$: "<<valorfinal;
        break;

}
    default:
{
    cout<<"Codígo inexistente.";
}

    }
}
