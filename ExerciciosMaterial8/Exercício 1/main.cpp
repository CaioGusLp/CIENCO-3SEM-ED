#include <iostream>
#include <list>

using namespace std;

int main(){
  list<int> numeros;

  cout << "Digite 5 n�meros inteiros:\n";
  for(int i = 0; i < 5; i++)
  {
      int numero;
      cin >> numero;

      numeros.push_back(numero);
  }



     cout << "N�meros na ordem de inser��o: ";
for(int numero : numeros)
{
    cout << numero << " ";

}

    cout <<"\nN�mero na ordem inversa: ";
    for(auto it = numeros.rbegin(); it != numeros.rend(); ++it)
    {
        cout << *it << " ";
    }

    cout << endl;
    return 0;




}
