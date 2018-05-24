#include <iostream>
#include <string.h>
using namespace std;
int main(){
    char string1[100], string2[10];
 cout <<"\n";
 cout << "Unindo duas strings\n";
 cout << "-------------------\n";
 cout << "\n";
 cout <<"Digite string1 :";
 cin.getline( string1,100);
 cout << "\n";
 cout << "Digite string2 :";
 cin.getline(string2,10);
 cout << "\n";
 cout << "Unindo string1 a string2 : " << strcat(string2,string1);
return 0;
}
