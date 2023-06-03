#include <iostream>
#include <list>
#include <algorithm>

 using namespace std;

int main() {

    setlocale(LC_ALL,"PORTUGUESE");
   list<string> listaFuncionarios;

    int numFuncionarios;
   cout << "Quantos funcion�rios ser�o cadastrados? ";
   cin >> numFuncionarios;

    if (numFuncionarios <= 0) {
        cout << "A lista est� vazia.\n";
        return 0;
    }

    for (int i = 0; i < numFuncionarios; i++) {
        string nome;

        cout << "Digite o nome do funcion�rio " << i + 1 << ": ";
        cin >> nome;

        listaFuncionarios.push_back(nome);
    }

    cout << "\nFuncion�rios cadastrados na ordem de cadastro:\n";
    for (const string& funcionario : listaFuncionarios) {
        cout << "Nome: " << funcionario << endl;
    }

    listaFuncionarios.sort();

  cout << "\nFuncion�rios cadastrados em ordem alfab�tica:\n";
    for (const string& funcionario : listaFuncionarios) {
        cout << "Nome: " << funcionario << endl;
    }

    cout << "\nFuncion�rios cadastrados em ordem reversa:\n";
    for (auto it = listaFuncionarios.rbegin(); it != listaFuncionarios.rend(); ++it) {
    cout << "Nome: " << *it << endl;
    }

    cout << "\nTotal de funcion�rios cadastrados: " << listaFuncionarios.size() << endl;

    return 0;
}
