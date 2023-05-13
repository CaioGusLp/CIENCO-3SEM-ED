#include <iostream>
#include <stdlib.h>
#include <string>

#define tam 10

using namespace std;

void imprimeVetor (int vetor[])
{

    for(int i = 0; i < tam; i++)
    {
        cout << " |" << vetor[i] << "| ";
    }
    cout << endl;
}
void merge(int vetor[tam],int indiceEsquerdo,int meio, int indiceDireito)
{
  int i,j,k;

  int n1 = meio - indiceEsquerdo + 1;
  int n2 = indiceDireito - meio;

  int vetorEsquerdo[n1], vetorDireito[n2];

  for(i = 0; i < n1; i++)
  {
     vetorEsquerdo[i] = vetor[indiceEsquerdo + 1];
  }
  for (j = 0; j < n2 ; j++)
  {
      vetorDireito[j] = vetor[meio + 1 + j];
  }
  i = 0;
  j = 0;
  k = indiceEsquerdo;

  while(i < n1 && j < 2)
  {
      if(vetorEsquerdo[i] <= vetorDireito[j])
      {
          vetor[k] = vetorEsquerdo[i];

          i++;
      }
      else
        {
            vetor[k] = vetorDireito[j];

            j++;
        }

        k++;
  }

  while( i < n1)
  {
      vetor[k] = vetorEsquerdo[i];
      i++;
      k++;

  }
  while(j < n2)
  {
      vetor[k] = vetorDireito[j];
      j++;
      k++;

  }
}
  void mergeSort(int vetor[tam], int indiceEsquerdo, int indiceDireito)
  {
      if(indiceEsquerdo < indiceDireito)
      {
          int meio = indiceEsquerdo + (indiceDireito - indiceEsquerdo)/2;

          mergeSort(vetor,indiceEsquerdo,meio);

          mergeSort(vetor, meio + 1, indiceDireito);

          merge(vetor, indiceEsquerdo, meio, indiceDireito);
      }
  }


using namespace std;

int main()
{
   int vetor[tam] = {10,9,8,7,6,5,4,3,2,1};

   imprimeVetor(vetor);
   cout << endl;

   mergeSort(vetor,0,tam - 1 );
   imprimeVetor(vetor);
}



