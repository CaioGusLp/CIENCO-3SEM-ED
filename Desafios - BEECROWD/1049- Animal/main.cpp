#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main() {
    string Op1, Op2, Op3;

    setlocale(LC_ALL,"PORTUGUESE");

    cout << "Entre com a primeira opção: ";
    cin >> Op1;

    cout << "Entre com a segunda opção: ";
    cin >> Op2;

    cout << "Entre com a terceira opção: ";
    cin >> Op3;

    system("CLS || CLEAR");

    if (Op1 == "vertebrado") {
        if (Op2 == "ave") {
           if (Op3 == "carnivoro")
            {
                cout << "aguia" << endl;
            }
           else
            {
                cout << "pomba" << endl;
            }
        }
        else {
            if (Op3 == "onivoro") {
                cout << "homem" << endl;
            } else {
                cout << "vaca" << endl;
            }
        }
    } else {
        if (Op2 == "inseto") {
            if (Op3 == "hematofago") {
                cout << "pulga" << endl;
            } else {
                cout << "lagarta" << endl;
            }
        } else {
            if (Op3 == "onivoro") {
                cout << "minhoca" << endl;
            } else {
                cout << "sanguessuga" << endl;
            }
        }
    }

    return 0;
}
