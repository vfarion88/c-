#include <iostream>
#include <string.h>
using namespace std;
int main(){
    int c = 0, v=0;
    char frase[50];
 cout <<"Frase: ";
 cin.getline(frase,50);

 for(int i=0; frase[i]!='\0'; i++){
    if(frase[i]=='a'||frase[i]=='A' || frase[i]=='e'||frase[i]=='E' || frase[i]=='i'||frase[i]=='I' || frase[i]=='o'||frase[i]=='O' || frase[i]=='u'||frase[i]=='U'){
        v = v + 1;
    }else{
    	 c = c + 1;
	}

}
cout << "Total de vogais =  " << v;
cout << "\nTotal de consoante =  " << c;




return 0;
}

