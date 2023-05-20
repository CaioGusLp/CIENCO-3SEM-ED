#include <iostream>
#include <stack>
using namespace std;

int main()
{
    setlocale(LC_ALL,"PORTUGUESE");

    stack <int> pilha;
    int num;

    cout << "Informe uma sequência de numeros inteiros que sejam positivos(entre com 0 para finalizar): " << endl;

   do
   {
       cin >> num;
       if (num != 0)
       {
           pilha.push(num);

       }

   } while (num != 0);

   cout << "A sequência na ordem inversa é: "<<endl;
   while (!pilha.empty())
   {
       cout << pilha.top() << " ";
       pilha.pop();
   }
   cout << endl;
   return 0;
}
