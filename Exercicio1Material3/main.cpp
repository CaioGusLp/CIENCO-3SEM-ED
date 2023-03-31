#include <iostream>
#include <cstdlib>

using namespace std;

struct pessoa
{
 string nome;
 string endereco;
 string cpf;
 int idade;

};

int main()

{
    pessoa pessoas[5];

    for (int i = 0; i< 5; i++)
    {
        cout << "Informe o nome da pessoa " << i + 1 << ": ";
        getline(cin, pessoas[i].nome);

        cout << "Informe o endereço da pessoa " << i + 1 <<": ";
        getline(cin, pessoas[i].endereco);

        cout << "Informe o CPF da pessoa " << i + 1 <<": ";
        getline(cin, pessoas[i].cpf);

        cout << " Informe a idade da pessoa " << i + 1 << ":  ";
        cin >> pessoas[i].idade;

        cin.ignore();


    }

    cout << "\nOs dados das 5 pessoas:\n";

    for(int i = 0; i < 5; i++)
    {
        cout << "Pessoa "<< i + 1<< ":\n";
        cout << "Nome: " << pessoas[i].nome << endl;
        cout << "Endereço: " << pessoas[i].endereco << endl;
        cout << "CPF: " << pessoas[i].cpf << endl;
        cout << "Idade: " << pessoas[i].idade << endl;

        cout << endl;

    }
    return 0;
}
