#include <iostream>

using namespace std;

int main()
{
 /* 1. Elabore um programa em C++ que solicite o peso e a altura de uma
determinada pessoa. Ap�s a digita��o, exibir se esta pessoa est� ou n�o com
seu peso ideal, conforme tabela abaixo:*/

float peso,altura;
float imc;

cout<<"Informe seu peso: ";
cin>>peso;

cout<<"Informe sua altura: ";
cin>>altura;

imc = peso / (altura * altura);


if(imc >= 25) {

        cout<< "Peso ideal.";
}
else if(imc >= 20 && imc < 25 )
{
    cout<< "Acima do Peso. ";

}
else if(imc < 20 )
{
    cout<<"Abaixo do peso. ";
}




}
