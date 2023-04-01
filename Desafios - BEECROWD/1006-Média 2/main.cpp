#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
   double a, b, c, media;

   cout << "Informe o valor da letra A: ";
   cin >> a;

   cout << "Informe o valor da letra B: ";
   cin >> b;


   cout << "Informe o valor da letra C: ";
   cin >> c;

   media = (a * 2 + b * 3 + c * 5)/10;

   system( "CLS || CLEAR");

   cout << fixed << setprecision(1);

   cout << "MEDIA = " << media;


}
