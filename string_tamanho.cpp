#include <iostream>
#include <string.h>
using namespace std;
int main(){
    char string[20];
 cout << "\n";
 cout << "Determinando o tamanho de uma string\n";
 cout << "------------------------------------\n";
 cout << "\n";
 cout << "Digite a string :";
 cin.getline(string,20);
 cout << "\n";
 cout << "A string tem " << strlen(string) << " caracteres.\n\n" ;
return 0;
}
