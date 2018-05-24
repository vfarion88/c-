#include <iostream>

using namespace std;
 
 int xi;
 int *ptr_xi;

void imprimir();

main(){
 xi = 10;
 ptr_xi = &xi;
 imprimir();
 
 xi = 20;
 imprimir();
 
 *ptr_xi = 30;
 imprimir();
 
 system("Pause");
 return(0);    
}
 void imprimir() {
 	cout << "\nValor de xi = " << xi;
 	cout << "\nValor de &xi = " << &xi;
 	cout << "\nValor de ptr_xi = " << ptr_xi;
 	cout << "\nValor de *ptr_xi = " << *ptr_xi << endl << endl;
 }
