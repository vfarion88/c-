#include <iostream>
#include <string.h>
using namespace std;
int main(){

    int x,i,aux=0;
    cout << "Digite um numero: ";
    cin >> i;
  for (x=1; x<=i;x++){
        if (i % x == 0){
            aux=aux+1;
        }
 }
     if(aux == 2){
            cout << "\nO numero e primo.";
        }
     else {
            cout << "\nO numero nao e primo.";
    }
return 0;
}

