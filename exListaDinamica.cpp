#include <iostream>
#include <stdlib.h> // Utilizado por causa da função malloc
#include <time.h> // Utilizado por causa do random

using namespace std;

// Defenindo a estrutura da lista
struct no {
	int dado;
	struct no *proximo;
};

// Defenindo as váriaveis
typedef no *ptr_no;
ptr_no lista;
int op;

// Prototipação

void menu_mostrar();
void menu_selecionar(int op);
void lista_inserir(ptr_no lista);
void lista_remover(ptr_no lista);
void lista_mostrar(ptr_no lista);

// Função Principal
int main(){
	// Inicializando os numeros randomicos
	srand(time(NULL));
	op = 1;
	//Criando o primeiro Nó da lista
	lista = (ptr_no) malloc(sizeof(no));
	lista->dado = 0;
	lista->proximo = NULL;
	// Laço principal
	while (op != 0){
		system("cls");
		menu_mostrar();
		cin >> op;
		menu_selecionar(op);
	}
	system("Pause");
	return(0);
}
//Mostra o menu de opções
void menu_mostrar(){
	lista_mostrar(lista);
	cout << "\nEscolha uma das opcões:\n";
	cout << "1 - Inserir no nal lista\n";
	cout << "2 - Remover um item da lista\n";
	cout << "0 - Sair \n\n";
}
// Executa opção escolhida no menu
void menu_selecionar(int op){
	switch(op){
		case 1:
			lista_inserir(lista);
			break;
		case 2:
			lista_remover(lista);
			break;
		}
}
//Insere um elemento no nal da lista
void lista_inserir(ptr_no lista){
	while(lista->proximo != NULL){
		lista = lista->proximo;
	}
	lista->proximo = (ptr_no) malloc(sizeof(no));
	lista->proximo;
	lista->dado = rand()%100;
	lista->proximo = NULL;
	
}
// Remove um elemento da lista
void lista_remover(ptr_no lista){
	int dado;
	ptr_no atual;
	atual = (ptr_no) malloc(sizeof(no));
	cout<<"\n\nEscolha um dos itens:\n";
	cin>>dado;
	while((lista->dado != dado)){
		if (lista->proximo == NULL){
			break;
		}
		atual= lista;
		lista = lista->proximo;
	}
	if (lista->dado == dado){
		atual->proximo = lista->proximo;
	}
}
//desenha o conteudo da lista na tela
void lista_mostrar(ptr_no lista){
//	system("cls");
	while(1){
		cout << (lista->dado);
		if(lista->proximo == NULL){
			break;
		}
		lista = lista->proximo;
	}
}
//Desenha o conteudo da lista na tela
void lista_mostrar_2(ptr_no lista){
 //   system("cls");
	while(lista->proximo != NULL){
		cout << lista->dado;
		lista = lista->proximo;
	}
	cout << lista->dado;
}
