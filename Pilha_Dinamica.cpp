#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

//Definindo a estrutura da pilha
struct no {
		int dado;
		struct no *proximo;
	};
	
//Definindo vari�veis
	typedef no *ptr_no;
	ptr_no pilha;
	int op;
	
//Prototipa��o
void menu_mostrar();
void menu_selecionar(int op);
void pilha_inserir(ptr_no pilha);
void pilha_remover(ptr_no pilha);
void pilha_mostrar(ptr_no pilha);

//Fun��o Principal
int main() {
//Inicializando m�quina de n�meros rand�micos
	srand(time(NULL));
	op = 1;
//Criando o primeiro n� da pilha
	pilha = (ptr_no) malloc(sizeof(no));
	pilha->dado = 0;
	pilha->proximo = NULL;
//La�o principal
	while (op !=0){
		system("cls");
		menu_mostrar();
		cin >> op;
		menu_selecionar(op);
	}
	system("Pause");
	return(0);
}
//Mostra o menu de op��es
void menu_mostrar(){
	pilha_mostrar(pilha);
	cout << "\n\nEscolha uma das opcoes:\n";
	cout << "1 - Inserir no final da pilha\n";
	cout << "2 - Remover no final da pilha\n";
	cout << "0 - Sair\n\n";
}
//Executa a op��o escolhida no menu
void menu_selecionar(int op){
	switch (op){
		case 1:
			pilha_inserir(pilha);
		break;
		case 2:
			pilha_remover(pilha);
		break;
	}
}
//Insere um elemento no final da Pilha
void pilha_inserir(ptr_no pilha){
	while(pilha->proximo != NULL){
		pilha = pilha->proximo;
	}
	pilha->proximo = (ptr_no) malloc(sizeof(no));
	pilha = pilha->proximo;
	pilha->dado = rand()%100;
	pilha->proximo = NULL;
}
//Remove um elemento da pilha
void pilha_remover(ptr_no pilha){
	ptr_no atual;
	atual = (ptr_no) malloc(sizeof(no));
	
		while(pilha->proximo != NULL){
			atual = pilha;
			pilha = pilha->proximo;
	}
	atual->proximo = NULL;
}
void pilha_mostrar(ptr_no pilha){
	system("cls");
		while(pilha->proximo != NULL) {
			cout << " " << pilha->dado;
			pilha = pilha->proximo;
		}
//	cout << ", " << pilha->dado;
}
