#include <iostream>
#include <locale>

using namespace std;

int main()
{
  /* 3. Fa�a um programa em C++ que receba o n�mero de horas trabalhadas e o
valor do sal�rio m�nimo. Calcule e mostre o sal�rio a receber seguindo as
regras abaixo:
a. A hora trabalhada vale a metade do sal�rio m�nimo;
b. O sal�rio bruto equivale ao n�mero de horas trabalhadas multiplicado
pelo valor da hora trabalhada
c. O imposto equivale a 3% do sal�rio bruto;
d. O sal�rio a receber equivale ao sal�rio bruto menos o imposto. */

setlocale(LC_ALL,"Portuguese");

float hora,salMin,salBru,imp,salRec,valorhora;

cout << "Informe suas horas trabalhadas: ";
cin >> hora;

cout << "Informe o salario minimo: ";
cin >> salMin;

valorhora = salMin /2;
cout << "O valor da hora trabalhada � de R$ "<<valorhora<<endl;

salBru = hora * valorhora;
cout <<"Seu salario bruto � de R$ "<< salBru<<endl;
imp = (salBru * 0.03);
cout << "O imposto � de R$ " << imp<<endl;

salRec = (salBru - imp);
cout << "O salario a receber � de R$ "<<salRec<<endl;




}
