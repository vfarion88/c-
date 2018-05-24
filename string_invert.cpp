#include <iostream>
#include <string.h>
using namespace std;
int main(){
 char string[20];
 cout <<"\n";
 cout <<"Invertendo uma string\n";
 cout <<"---------------------\n";
 cout <<"\n";
 cout <<"Entre com a string :";
 cin.getline( string,20);
 cout <<"\n";
 cout <<"Invertendo ==> " << strrev(string);
return 0;
}
