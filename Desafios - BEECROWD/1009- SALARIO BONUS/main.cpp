#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{

    string nome;
    double salario, TotalV, Salfinal;

    cout << fixed << setprecision(2);

    setlocale(LC_ALL, "PORTUGUESE");

    cout << "Informe o nome: ";
    getline(cin,nome);

    cout << "Informe seu salario atual: ";
    cin >> salario;

    cout << "Informe sua comissão: ";
    cin >>TotalV;



    Salfinal = salario + (TotalV * 0.15);

    system("CLS || CLEAR");

    cout << "TOTAL = " << Salfinal;



}
