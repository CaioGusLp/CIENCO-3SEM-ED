#include <iostream>
#include <locale>
using namespace std;

int main()
{
  /*4. Construa um programa em C++ que calcule o novo salário de um funcionário.
Considere que o funcionário deverá receber um reajuste de 15% caso seu
salário seja menor que 1000. Se o salário for maior ou igual a 1000, mas
menor ou igual a 1500, o reajuste deve ser de 10%. Caso o salário seja maior
que 1500, o reajuste deve ser de 5%*/

setlocale(LC_ALL,"Portuguese");

float salAt,salNov,reaj;

cout << "Informe o salario: ";
cin >> salAt;

if(salAt < 1000)
{
    salNov = salAt + (salAt * 0.15);
    cout<< "Seu salario atual é de: "<<salNov<<endl;
    cout<< "O valor do reajuste é de :"<<salNov - salAt<<endl;

}

else if(salAt >= 100 && salAt <= 1500)
{
     salNov = salAt + (salAt * 0.10);
    cout<< "Seu salario atual é de: "<<salNov<<endl;
    cout<< "O valor do reajuste é de :"<<salNov - salAt<<endl;

}

else if(salAt > 1500)
{
    salNov = salAt + (salAt * 0.05);
    cout<< "Seu salario atual é de: "<<salNov<<endl;
    cout<< "O valor do reajuste é de :"<<salNov - salAt<<endl;

}
}
