#include <iostream>
#include <locale>

using namespace std;

int main()
{
  /* 3. Faça um programa em C++ que receba o número de horas trabalhadas e o
valor do salário mínimo. Calcule e mostre o salário a receber seguindo as
regras abaixo:
a. A hora trabalhada vale a metade do salário mínimo;
b. O salário bruto equivale ao número de horas trabalhadas multiplicado
pelo valor da hora trabalhada
c. O imposto equivale a 3% do salário bruto;
d. O salário a receber equivale ao salário bruto menos o imposto. */

setlocale(LC_ALL,"Portuguese");

float hora,salMin,salBru,imp,salRec,valorhora;

cout << "Informe suas horas trabalhadas: ";
cin >> hora;

cout << "Informe o salario minimo: ";
cin >> salMin;

valorhora = salMin /2;
cout << "O valor da hora trabalhada é de R$ "<<valorhora<<endl;

salBru = hora * valorhora;
cout <<"Seu salario bruto é de R$ "<< salBru<<endl;
imp = (salBru * 0.03);
cout << "O imposto é de R$ " << imp<<endl;

salRec = (salBru - imp);
cout << "O salario a receber é de R$ "<<salRec<<endl;




}
