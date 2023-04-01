#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()
{
    double a,b,c, delta,x1,x2;

    cout << "Entre com o valor de A: ";
    cin >> a;

    cout << "Entre com o valor de B: ";
    cin >> b;

    cout << "Entre com o valor de C: ";
    cin >> c;

    delta = pow(b,2) - 4 * a * c;

    if(a == 0 || delta < 0)
    {
        system(" CLS || CLEAR");
        cout << "Impossivel Calcular.";

    }else
    {
         cout << fixed << setprecision(5);

        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);

        system(" CLS || CLEAR");



        cout << "R1 = "<< x1 <<endl;
        cout << "R2 = "<< x2 <<endl;
    }


return 0;


    }



