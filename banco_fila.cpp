//Bibliotecas

#include <locale.h>
#include <iostream>
#include <string.h>

using namespace std;
//Constantes

#define tamanho 5

//Estrutura da Fila
	struct cliente {// criado uma struct cliente com os dados dos clientes que gostaria de inserir para minha fila de senha
		int senha;
		char nome[50];
		char hora[50];
	};
	struct fila{
		cliente clientes[tamanho];// realizado um vetor da minha struct cliente para que possa inserir todos os dados do cliente e poder manipular o mesmo em minha condição de fila
		int ini;// variavel contadora inicial da minha fila
		int fim;//variavel contadora final da minha fila
	};
//Variáveis globais
	fila fila_clientes;
	int op;

//Protipação
	void cadastro_entrar(int contador_senha);
	void cadastro_sair();
	void cadastro_mostrar();
	void menu_mostrar();
//Função principal
int main(){
	setlocale(LC_ALL, "Portuguese");
	op = 1;
	fila_clientes.ini = 0;
	fila_clientes.fim = 0;
	int contador_senha = 1;
		while (op != 0) {
		system("cls");
		cadastro_mostrar();
		menu_mostrar();
		cin >> op;
			switch (op) {
				case 1:
					cadastro_entrar(contador_senha);
					contador_senha ++;// pre definido que a senha a cada passagem atribui uma somatoria da minha senha da fila
				break;
				case 2:
					cadastro_sair();
				break;
			}
		}
		return(0);
	}
// classe criada para que se possa cadastrar mais clientes na minha fila
void cadastro_entrar(int contador_senha){
	
	if (fila_clientes.fim == tamanho) {// se a minha variavel contadora final for igual ao tamanho da minha fila a mesma está cheia não podendo mais inserir nenhum valor
		cout << "\nA fila está cheia, volte outro dia!\n\n";
	system("pause");
}else {// caso contrario ela entra nessa condição onde a mesma atribui os valores a serem solicitados
	cout<< "\nSenha: " << contador_senha;
    fila_clientes.clientes[fila_clientes.fim].senha = contador_senha;
	contador_senha++;
	fflush(stdin);
	cout << "\nDigite o nome do cliente: ";
	cin.getline(fila_clientes.clientes[fila_clientes.fim].nome,50); // utilizando função getline para coletar toda a informação digitada ao inves de apenas uma palavra
	fflush(stdin);// função utilizada para limpar buffer do teclado
	cout << "\nDigite a hora da chegada: ";
	cin.getline(fila_clientes.clientes[fila_clientes.fim].hora,50);
	fflush(stdin);
	fila_clientes.fim++;
	}
	
}
// classe criada para retirada de informações da fila
void cadastro_sair() {
	if (fila_clientes.ini == fila_clientes.fim) {// se variavel contadora inicial for igual a final a mesma indica que a fila está vazia
		cout << "\nFila vazia, mas logo aparece alguém!\n\n";
		system("pause");
}else {// caso contrario ela deleta a posição 0 do vetor e passa as posições prosterior a uma casa a frente reordenando a fila
		for(int i = 0; i < fila_clientes.fim-1; i++){// for utilizado para realocar as posições da fila para primeira posição livre apos deletada
			fila_clientes.clientes[i].senha =fila_clientes.clientes[i+1].senha;
			strcpy(fila_clientes.clientes[i].nome,  fila_clientes.clientes[i+1].nome);
			strcpy(fila_clientes.clientes[i].hora,  fila_clientes.clientes[i+1].hora);
		}	
	    
		fila_clientes.clientes[fila_clientes.fim-1].senha = 0;
		strcpy(fila_clientes.clientes[fila_clientes.fim-1].nome,  "");
		strcpy(fila_clientes.clientes[fila_clientes.fim-1].hora,  "");
		fila_clientes.fim--;
	}
}
// classe utilizada para mostrar os valores quando são inseridos e quando são deletados mostrando claramente o conceito da fila
void cadastro_mostrar() {
	int i;
		for (i = 0; i < tamanho; i++) {
			cout << "\n " << fila_clientes.clientes[i].senha << ", ";
			cout << " " << fila_clientes.clientes[i].nome << ", ";
			cout << " " << fila_clientes.clientes[i].hora << "| ";
		}
	}
// menu onde você escolhe a opção desejada para que se alimentar a fila
void menu_mostrar() {
	cout << "\nEscolha uma opção:\n";
	cout << "1 - Retire uma Senha\n";
	cout << "2 - Cliente Atendido\n";
	cout << "0 - Sair\n\n";
}
