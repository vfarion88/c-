#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int tam;
	int *vetor;
	
	cout << "Digite o tamanho do vetor: ";
	cin >> tam;
	cout<<endl<<endl;
	
	vetor = (int *) malloc(sizeof (int)*tam);
	
	cout << "Vetor din�mico com pot�ncia de 2!!! \n";
	
	for(int i = 0; i<tam ; i++){
		vetor[i] = pow(2,i);
		cout << "\nPosi��o: " << i << " : " << vetor[i];
	}
	cout << "\n\nVetor din�mico com o dobro do tamanho digitado com pot�ncia de 3!!! \n";
	for(int i = 0; i<tam*2; i++){
		vetor[i] = pow(3,i);
		cout << "\nPosi��o: " << i << " : " << vetor[i];
	}
	cout << endl<<endl;
	system("Pause");
}
