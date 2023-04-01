#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main() {
    float valor, media = 0;
    int positivos = 0;

    for (int i = 0; i < 6; i++) {

        cout << "Informe o valor: ";
        cin >> valor;

        system("CLS || CLEAR");
        if (valor > 0)
            {
            positivos++;
            media += valor;
           }
    }

    if (positivos > 0) {
        media /= positivos;
        cout << positivos << " valores positivos" << endl;
        cout << fixed << setprecision(1) << media << endl;
    }

    return 0;
}










