#include <iostream>
#include <stack>
using namespace std;

void mostrarPilha(stack<int> Pilha) {
    if (Pilha.empty()) {
        cout << "A pilha está vazia." << endl;
        return;
    }

    cout << "Elementos da pilha (do topo para a base): ";
    while (!Pilha.empty()) {
        cout << Pilha.top() << " ";
       Pilha.pop();
    }
    cout << endl;
}

int main() {

    setlocale(LC_ALL,"Portuguese");
    stack<int> Pilha;
    int opcao, elemento;

    do {
        cout << "Selecione uma opção:" << endl;
        cout << "1. Inserir elemento" << endl;
        cout << "2. Remover elemento do topo" << endl;
        cout << "3. Verificar elemento do topo" << endl;
        cout << "4. Verificar se a pilha está vazia" << endl;
        cout << "5. Exibir tamanho da pilha" << endl;
        cout << "0. Sair" << endl;
        cout << "Opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cout << "Digite o elemento a ser inserido: ";
                cin >> elemento;
                Pilha.push(elemento);
                cout << "Elemento " << elemento << " inserido na pilha." << endl;
                break;
            case 2:
                if (Pilha.empty()) {
                  cout << "Erro: Pilha vazia!" << endl;
                } else {
                    cout << "Elemento " << Pilha.top() << " removido da pilha." << endl;
                    Pilha.pop();
                }
                break;
            case 3:
                if (Pilha.empty()) {
                    cout << "Erro: Pilha vazia!" << endl;
                } else {
                    cout << "Elemento do topo da pilha: " << Pilha.top() << endl;
                }
                break;
            case 4:
                if (Pilha.empty()) {
                    cout << "A pilha está vazia." << endl;
                } else {
                    cout << "A pilha não está vazia." << endl;
                }
                break;
            case 5:
                cout << "Tamanho da pilha: " << Pilha.size() << endl;
                break;
            case 0:
                cout << "Encerrando o programa." << endl;
                break;
            default:
                cout << "Opção inválida!" << endl;
        }

        cout << endl;
    } while (opcao != 0);

    return 0;
}
