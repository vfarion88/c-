#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

// constante
#define SIZE 2

// Declaração da estrutura
struct Produto {
int codigo;
char nome[50];
float peso;
float valor;
char validade[10];
char dataFabricacao[10];
int lote;
};

main() {
     int i, aux = 0,aux1=0,cont=0,inc=0;
     char aux2[50];

     Produto ficha[SIZE];

for (i = 0; aux != 4 ; i++){
            cout << "***** MENU *****" << endl;
            cout << "\n  1 - Incluir \n  2 - Alterar\n  3 - Pesquisar\n  4 - Sair"<< endl << endl;
            cout << "Digite a opcao desejada: ";
            cin >> aux;
            cout << endl;

                if(aux == 1){
                    cout <<"Digite o codigo do produto: ";
                    cin >> ficha[i].codigo;
                    fflush(stdin);
                    cout <<"Digite o nome do Produto: ";
                    cin.getline(ficha[i].nome, 50); // função que pega nome completo
                    fflush(stdin);
                    cout <<"Digite peso: ";
                    cin >> ficha[i].peso;
                    fflush(stdin);
                    cout <<"Digite o valor: ";
                    cin >> ficha[i].valor;
                    fflush(stdin);
                    cout <<"Digite a validade: ";
                    cin >> ficha[i].validade;
                    fflush(stdin);
                    cout <<"Digite data de fabricacao: ";
                    cin >> ficha[i].dataFabricacao;
                    fflush(stdin);
                    cout <<"Digite o lote: ";
                    cin >> ficha[i].lote;
                    fflush(stdin);
                    inc++;
                    cout << "-----------------------------------------------------" << endl;
                    }else if (aux == 2){
                        cout << "-----------------------------------------------------" << endl;
                        cout << "\n 1 - CODIGO \n 2 - PRODUTO \n 3 - PESO \n 4 - VALOR \n 5 - VALIDADE \n 6 - DATA FRABICACAO \n 7 - LOTE" << endl<< endl;
                        cout << "Qual opcao desejaria alterar ? ";
                        cin >> aux;
                            switch (aux)
                            {
                             case 1 :
                             cout << "Qual codigo desejaria alterar? ";
                             cin>>aux1;
                             for(int j=0 ; j<SIZE ; j++ ){
                                if(aux1 == ficha[j].codigo){
                                    cout << "Ficha '" << j << "' | codigo: " << ficha[j].codigo << endl<<endl;
                                    cout << "Qual seria o novo valor: ";
                                    cin >> ficha[j].codigo;
                                    cont++;
                                 }
                               }
                              if (cont == 0){
                                cout << "Não possui nenhum dado solicitado" << endl << endl;
                              }
                              break;

                              case 2 :
                              cout << "Qual codigo desejaria pesquisar? ";
                              cin>>aux2;
                              for(int j=0 ; j<SIZE ; j++ ){
                                if(strcmp(aux2 , ficha[j].nome)==0){
                                    cout << "Ficha '" << j << "' | nome: " << ficha[j].nome << endl<<endl;
                                    cout << "Qual seria o novo valor: ";
                                    cin >> ficha[j].nome;
                                    cont++;
                                 }
                             }
                              if (cont == 0){
                                cout << "Não possui nenhum dado solicitado"<< endl << endl;
                              }
                              break;

                              case 3 :
                                cout << "Qual codigo desejaria pesquisar? ";
                             cin>>aux1;
                             for(int j=0 ; j<SIZE ; j++ ){
                                if(aux1 == ficha[j].peso){
                                    cout << "Ficha '" << j << "' | peso: " << ficha[j].peso << endl<<endl;
                                    cout << "Qual seria o novo valor: ";
                                    cin >> ficha[j].peso;
                                    cont++;
                                 }
                             }
                              if (cont == 0){
                                cout << "Não possui nenhum dado solicitado"<< endl << endl;
                              }
                              break;

                              case 4 :
                                cout << "Qual codigo desejaria pesquisar? ";
                             cin>>aux1;
                             for(int j=0 ; j<SIZE ; j++ ){
                                if(aux1 == ficha[j].valor){
                                    cout << "Ficha '" << j << "' | valor: " << ficha[j].valor << endl<<endl;
                                    cout << "Qual seria o novo valor: ";
                                    cin >> ficha[j].valor;
                                    cont++;
                                 }
                             }
                              if (cont == 0){
                                cout << "Não possui nenhum dado solicitado"<< endl << endl;
                              }
                              break;

                              case 5 :
                               cout << "Qual codigo desejaria pesquisar? ";
                               cin >> aux2;
                               fflush(stdin);
                             for(int j=0 ; j<SIZE ; j++ ){
                                if(strcmp(aux2 , ficha[j].nome)==0){
                                    cout << "Ficha '" << j << "' | validade: " << ficha[j].validade << endl<<endl;
                                    cout << "Qual seria o novo valor: ";
                                    cin >> ficha[j].validade;
                                    cont++;
                                 }
                             }
                              if (cont == 0){
                                cout << "Nao possui nenhum dado solicitado"<< endl << endl;
                              }
                              break;

                              case 6 :
                             cout << "Qual codigo desejaria pesquisar? ";
                             cin >> aux2;
                             for(int j=0 ; j<SIZE ; j++ ){
                                if(strcmp(aux2 , ficha[j].dataFabricacao)==0){
                                    cout << "Ficha '" << j << "' | data fabricacao: " << ficha[j].dataFabricacao << endl<<endl;
                                    cout << "Qual seria o novo valor: ";
                                    cin >> ficha[j].dataFabricacao;
                                    cont++;
                                 }
                             }
                              if (cont == 0){
                                cout << "Não possui nenhum dado solicitado"<< endl << endl;
                              }
                              break;

                              case 7 :
                                cout << "Qual codigo desejaria pesquisar? ";
                             cin>>aux1;
                             for(int j=0 ; j<SIZE ; j++ ){
                                if(aux1 == ficha[j].lote){
                                   cout << "Ficha '" << j << "' | lote: " << ficha[j].lote << endl<<endl;
                                    cout << "Qual seria o novo valor: ";
                                    cin >> ficha[j].lote;
                                    cont++;
                                 }
                             }
                              if (cont == 0){
                                cout << "Não possui nenhum dado solicitado"<< endl << endl;
                              }
                              break;

                              default :
                               cout << "Valor invalido!\n";
                  }


                    }else if (aux == 3){
                        cout << "-----------------------------------------------------" << endl;
                        cout << "\n 1 - CODIGO \n 2 - PRODUTO \n 3 - PESO \n 4 - VALOR \n 5 - VALIDADE \n 6 - DATA FRABICACAO \n 7 - LOTE" << endl <<endl;
                        cout << "O que desejaria pesquisar? ";
                        cin >> aux;

                               switch (aux)
                                {
                                 case 1 :
                                 cout << "Qual codigo desejaria pesquisar? ";
                                 cin>>aux1;
                                 for(int j=0 ; j<SIZE ; j++ ){
                                    if(aux1 == ficha[j].codigo){
                                        cout << "Ficha '" << j << "' | codigo: " << ficha[j].codigo << endl<<endl;
                                        cont++;
                                     }
                                 }
                                  if (cont == 0){
                                    cout << "Não possui nenhum dado solicitado" << endl << endl;
                                  }
                                  break;

                                  case 2 :
                                  cout << "Qual codigo desejaria pesquisar? ";
                                  cin >> aux2;
                                   fflush(stdin);
                                  for(int j=0 ; j<SIZE ; j++ ){
                                    if(strcmp(aux2 , ficha[j].nome)==0){
                                        cout << "Ficha '" << j << "' | nome: " << ficha[j].nome << endl<<endl;
                                        cont++;
                                     }
                                 }
                                  if (cont == 0){
                                    cout << "Não possui nenhum dado solicitado"<< endl << endl;
                                  }
                                  break;

                                  case 3 :
                                    cout << "Qual codigo desejaria pesquisar? ";
                                 cin>>aux1;
                                 for(int j=0 ; j<SIZE ; j++ ){
                                    if(aux1 == ficha[j].peso){
                                        cout << "Ficha '" << j << "' | peso: " << ficha[j].peso << endl<<endl;
                                        cont++;
                                     }
                                 }
                                  if (cont == 0){
                                    cout << "Não possui nenhum dado solicitado"<< endl << endl;
                                  }
                                  break;

                                  case 4 :
                                    cout << "Qual codigo desejaria pesquisar? ";
                                 cin>>aux1;
                                 for(int j=0 ; j<SIZE ; j++ ){
                                    if(aux1 == ficha[j].valor){
                                        cout << "Ficha '" << j << "' | valor: " << ficha[j].valor << endl<<endl;
                                        cont++;
                                     }
                                 }
                                  if (cont == 0){
                                    cout << "Não possui nenhum dado solicitado"<< endl << endl;
                                  }
                                  break;

                                  case 5 :
                                   cout << "Qual codigo desejaria pesquisar? ";
                                   cin >> aux2;
                                   fflush(stdin);
                                 for(int j=0 ; j<SIZE ; j++ ){
                                    if (strcmp(aux2 , ficha[j].validade)==0){
                                        cout << "Ficha '" << j << "' | validade: " << ficha[j].validade << endl<<endl;
                                        cont++;
                                     }
                                 }
                                  if (cont == 0){
                                    cout << "Nao possui nenhum dado solicitado"<< endl << endl;
                                  }
                                  break;

                                  case 6 :
                                    cout << "Qual codigo desejaria pesquisar? "<< endl << endl;
                                    cin >> aux2;
                                   fflush(stdin);
                                 for(int j=0 ; j<SIZE ; j++ ){
                                    if (strcmp(aux2 , ficha[j].dataFabricacao)==0){
                                        cout << "Ficha '" << j << "' | data fabricacao: " << ficha[j].dataFabricacao << endl<<endl;
                                        cont++;
                                     }
                                 }
                                  if (cont == 0){
                                    cout << "Não possui nenhum dado solicitado"<< endl << endl;
                                  }
                                  break;

                                  case 7 :
                                    cout << "Qual codigo desejaria pesquisar? ";
                                 cin>>aux1;
                                 for(int j=0 ; j<SIZE ; j++ ){
                                    if(aux1 == ficha[j].lote){
                                        cout << "Ficha '" << j << "' | lote: " << ficha[j].lote << endl<<endl;
                                        cont++;
                                     }
                                 }
                                  if (cont == 0){
                                    cout << "Não possui nenhum dado solicitado"<< endl << endl;
                                  }
                                  break;

                                  default :
                                   cout << "Valor invalido!\n";
                      }
                     }
                    }

for (i = 0; i < inc; i++) {
        cout <<"\nCODIGO: " << ficha[i].codigo << endl;
cout <<"PRODUTO: " << ficha[i].nome << endl;
cout <<"PESO: " << ficha[i].peso << endl;
cout <<"VALOR: " << ficha[i].valor << endl;
cout <<"VALIDADE: " << ficha[i].validade << endl;
cout <<"DATA FABRICACAO: " << ficha[i].dataFabricacao << endl;
cout <<"LOTE: " << ficha[i].lote << endl;

}

return 0;

}
