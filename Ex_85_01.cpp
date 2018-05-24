#include <iostream>

using namespace std;

int main(){
	
	int x;
	int *ptr_x;
	
	ptr_x = &x;
	
	cout << "Digite um valor: ";
	
	cin >> x;

	cout << "Valor alocado no ponteiro: " << *ptr_x;
	
	cout << "\n\nValor do alocacao do ponteiro: " << ptr_x;
	
	
	
	return(0);
}
