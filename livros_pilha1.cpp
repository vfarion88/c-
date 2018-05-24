//Bibliotecas
#include <locale.h>
#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;
//Constantes

#define tamanho 5

//Estrutura da Fila
	struct livro {// criado uma struct livro com os dados do livro que gostaria de inserir para meu livro
		int id;
		char nome[50];
		char autor[50];
	};
	struct colecao{
		livro livros[tamanho];// transformando minha struct livro em vetor para que consiga cadastrar todas as informações do meu livro e conseguir empilhar e desempilhar sem problema
		int ini;// variavel contadora do inicio da minha pilha
		int fim;// variavel contadora de fim da minha pilha
	};
//Variáveis globais
	colecao cadastro;
	int op;

//Protipação
	void cadastro_entrar();
	void cadastro_sair();
	void cadastro_mostrar();
	void menu_mostrar();
//Função principal onde chama todas as classes
int main(){
	setlocale(LC_ALL, "Portuguese");
	op = 1;
	cadastro.ini = 0;
	cadastro.fim = 0;
		while (op != 0) {
		system("cls");
		cadastro_mostrar();
		menu_mostrar();
		cin >> op;
			switch (op) {
				case 1:
					cadastro_entrar();
				break;
				case 2:
					cadastro_sair();
				break;
			}
		}
		return(0);
	}
//classe onde atibui os valores e verifica se a pilha está cheia, caso não esteja ela continua empilhando
void cadastro_entrar(){
	if (cadastro.fim == tamanho) {//se o final da pinha pilha for igual ao tamanho que eu atribui para ela, quer dizer que está cheia
		cout << "\nA fila está cheia, volte outro dia!\n\n";
	system("pause");
}else {// caso a pilha não esteja cheia cai nessa condição para que seja inserido valores
	cout<< "\nDigite o ID do livro: ";
	cin >> cadastro.livros[cadastro.fim].id;
	fflush(stdin);// função utilizada para limpar buffer do teclado
	cout << "\nDigite o nome do Livro: ";
	//cin >> cadastro.livros[cadastro.fim].nome;
	cin.getline(cadastro.livros[cadastro.fim].nome,50); // utilizando função getline para coletar toda a informação digitada ao inves de apenas uma palavra
	fflush(stdin);
	cout << "\nDigite o Autor do Livro: ";
	cin.getline(cadastro.livros[cadastro.fim].autor,50); 
	cadastro.fim++;
	fflush(stdin);
	}
	
}
//classe de retirada de valores de uma pilha onde o ultima elemento a ser inserido é o primeiro a ser retirado
void cadastro_sair() {
	if (cadastro.ini == cadastro.fim) {//comparação da posição inicial da pilha com a final caso sejam iguais quer dizer que a pilha esta vazia
		cout << "\nPilha vazia, mas logo aparece alguém!\n\n";
		system("pause");
}else {// caso ela não esteja vazia ela retira um cadastro da pilha e atribui um valor de vazio para o lugar deletando assim o valor inserido.
	    cadastro.livros[cadastro.fim-1].id = 0;
		strcpy(cadastro.livros[cadastro.fim-1].nome,  "");// função strcpy serve para inserir um valor char em um vetor char com dados já inseridos
		strcpy(cadastro.livros[cadastro.fim-1].autor,  "");
		cadastro.fim--;
	}
}
// classe gerada para mostrar os dados digitados na tela e caso seja deletados que seja visualizado a sua retirada
void cadastro_mostrar() {
	int i;
		for (i = 0; i < tamanho; i++) {
			cout << "\n " << cadastro.livros[i].id << ", ";
			cout << " " << cadastro.livros[i].nome << ", ";
			cout << " " << cadastro.livros[i].autor << "| ";
		}
	}
// menu que aparece para selecionar a opção desejada
void menu_mostrar() {
	cout << "\nEscolha uma opção:\n";
	cout << "1 - Incluir na Livro\n";
	cout << "2 - Excluir da Livro\n";
	cout << "0 - Sair\n\n";
}
