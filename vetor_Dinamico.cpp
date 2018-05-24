#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;


int main(){
	int tam;
	int *vetor;
	
	cout << " Digite o tamanho do vetor: ";
	cin >> tam;
	
	vetor = (int *) malloc(sizeof (int)*tam);
	
	for(int i = 0; i<tam; i++){
		vetor[i] = pow(2,i);
		cout << "\nPosicao " << i <<": " << vetor[i];
	}
	cout<<endl;
	system ("Pause");
	return(0);
}
