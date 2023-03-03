#include <iostream>
#include <locale>

using namespace std;

int main()
{
    /* 2. Elaborar um programa em C++ em que dada a idade de um nadador,
classifique-o em uma das seguintes categorias: infantil A (de 5 a 7 anos),
infantil B (de 8 a 10 anos), juvenil A (de 11 a 13 anos), juvenil B (14 a 17
anos) e senior (maior que 17 anos)*/


   int idade = 0;

   setlocale(LC_ALL,"Portuguese");

   cout<<"Informe a idade do nadador: ";
   cin>>idade;

   if(idade >= 5 && idade <= 7) cout<<"Você esta na categoria infantil A!"<<endl;
   else if(idade >= 8 && idade <= 10) cout<<"Você esta na categoria infantil B!"<<endl;
   else if(idade >= 11 && idade <= 13)cout<< "Você esta na categoria Juvenil A!"<<endl;
   else if(idade >= 14 && idade <= 17)cout<< "Você esta na categoria Juvenil B!"<<endl;
    else if(idade >= 18 )cout<< "Você esta na categoria Senior!"<<endl;

}
