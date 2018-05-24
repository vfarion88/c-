#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int *ptr;
	
	cout << "Endereco: " << ptr << endl << endl;
	
	ptr = (int *) malloc(sizeof (int));
	
	cout << "Endereco: " << ptr << " Valor: " <<*ptr << endl << endl;
	
	*ptr = 10;
	
	cout << "Endereco: " << ptr << " Valor: " << *ptr<< endl<<endl;
	
	int x;
	x = 20;
	ptr = &x;
	
	cout << "Endereco: " << ptr << " Valor: "<< *ptr<<endl<<endl;
	
	ptr = (int *) malloc(sizeof (int));
	
	cout << "Endereco: " << ptr <<" Valor: " << *ptr<<endl<<endl;
	
	system ("Pause");
	return(0);
}
