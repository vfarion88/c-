/* Definicoes */
#define DIM 5
#define FALSO 0
#define VERDADE 1
/* Bibliotecas usadas pelo programa */
#include <iostream>
using namespace std;
int main ( )
{
int vetor[DIM], i, trocou = FALSO, fim=DIM, temp;

cout << "Primeiro, entre com um vetor de " << DIM << " elementos\n";

for (i = 0; i<DIM; i++)
{
cout << "Elemento " << i << ":";
cin >> vetor[i];
}
do
{
    trocou = FALSO;
for (i=0; i<fim-1; i++)
{
if (vetor[i]>vetor[i+1])
{
temp = vetor[i];
vetor[i] = vetor[i+1];
vetor[i+1] = temp;
trocou = VERDADE;
}
}
fim--;
} while (trocou);
for (i=0; i<DIM; i++)
cout << "\n" << vetor[i];
}
