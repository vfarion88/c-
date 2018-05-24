#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

// Definindo a estrutura da fila
struct no {
	int dado;
	struct no *proximo;
};

// Definindo variaveis

typedef no *ptr_no;
ptr_no fila;
int op;

// Prototipa��o

void menu_mostrar();
void menu_selecionar(int op);
void fila_inserir(ptr_no fila);
void fila_remover(ptr_no fila);
void fila_mostrar(ptr_no fila);

// Fun��o Principal

int main(){
	// Inicializando m�quina de n�meros rand�micos
	srand(time(NULL));
	op = 1;
	//criando o primeiro n� da fila
	fila = (ptr_no) malloc(sizeof(no));
	fila->dado = 0;
	fila->proximo = NULL;
	//La�o Principal
	while (op != 0){
		system("cls");
		menu_mostrar();
		cin >> op;
		menu_selecionar(op);
	}
	system("Pause");
	return(0);
}

// Mostra o menu de op��es
void menu_mostrar(){
	fila_mostrar(fila);
	cout << "\n\nEscolha uma das op��es:\n";
	cout << "1 - Inserir no final da fila\n";
	cout << "2 - Remover no inicio da fila\n";
	cout << "0 - Sair\n\n";
}

//Executa a op��o escolhida no menu

void menu_selecionar(int op){
	switch(op){
		case 1:
			fila_inserir(fila);
		break;
		case 2:
			fila_remover(fila);
		break;	
	}
}

//insere um elemento no final da fila

void fila_inserir(ptr_no fila){
	while(fila->proximo != NULL){
		fila = fila->proximo;
	}
	fila->proximo = (ptr_no) malloc(sizeof(no));
	fila = fila->proximo;
	fila->dado = rand()%100;
	fila->proximo = NULL;
}

// Remove um elemento no inicio da fila

void fila_remover(ptr_no fila){
	ptr_no atual;
	atual = (ptr_no) malloc(sizeof(no));
	atual = fila;
	if (fila->proximo != NULL){
		fila = fila->proximo;
		atual->proximo = fila->proximo;
	}
}

// Desenha o conte�do da fila na tela
void fila_mostrar(ptr_no fila){
	system("cls");
	while(fila->proximo != NULL){
		cout << fila->dado <<", " ;
		fila = fila->proximo;
	}
//	cout << fila->dado;
}
