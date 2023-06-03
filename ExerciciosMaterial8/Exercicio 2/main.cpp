#include <iostream>
#include <list>
#include <algorithm>

 using namespace std;

int main() {

    setlocale(LC_ALL,"PORTUGUESE");
   list<string> listaFuncionarios;

    int numFuncionarios;
   cout << "Quantos funcionários serão cadastrados? ";
   cin >> numFuncionarios;

    if (numFuncionarios <= 0) {
        cout << "A lista está vazia.\n";
        return 0;
    }

    for (int i = 0; i < numFuncionarios; i++) {
        string nome;

        cout << "Digite o nome do funcionário " << i + 1 << ": ";
        cin >> nome;

        listaFuncionarios.push_back(nome);
    }

    cout << "\nFuncionários cadastrados na ordem de cadastro:\n";
    for (const string& funcionario : listaFuncionarios) {
        cout << "Nome: " << funcionario << endl;
    }

    listaFuncionarios.sort();

  cout << "\nFuncionários cadastrados em ordem alfabética:\n";
    for (const string& funcionario : listaFuncionarios) {
        cout << "Nome: " << funcionario << endl;
    }

    cout << "\nFuncionários cadastrados em ordem reversa:\n";
    for (auto it = listaFuncionarios.rbegin(); it != listaFuncionarios.rend(); ++it) {
    cout << "Nome: " << *it << endl;
    }

    cout << "\nTotal de funcionários cadastrados: " << listaFuncionarios.size() << endl;

    return 0;
}
