#include <stdio.h>
#include <stdlib.h>

/* Defina uma estrutura de dados em C (usando struct) que represente um
aluno com as seguintes informa��es: nome, email, telefone e data de
nascimento. Quais ser�o os tipos de dados mais adequados para essa
estrutura? Como voc�s alocariam mem�ria para ela? */

struct aluno {
	//Acredito que os dados mais adequados s�o char
	char nome[50];
	char email[50];
	char telefone[20];
	char dataDeNascimento[11];
};

int main(int argc, char *argv[]) {
	
	struct aluno *p;
	
	//Alocando mem�ria
	p = malloc(sizeof(struct aluno));
	
	printf("Qual e o nome do aluno? ");
	scanf(" %[^\n]", p->nome);
	
	printf("\nQual e o email do aluno? ");
	scanf(" %[^\n]", p->email);
	
	printf("\nQual e o telefone do aluno? ");
	scanf(" %[^\n]", p->telefone);
	
	printf("\nQual e a data de nascimento do aluno? ");
	scanf(" %[^\n]", p->dataDeNascimento);
	
    printf("\nDados do aluno cadastrado:\n");
    printf("Nome: %s\n", p->nome);
    printf("Email: %s\n", p->email);
    printf("Telefone: %s\n", p->telefone);
    printf("Data de Nascimento: %s\n", p->dataDeNascimento);
    
	return 0;
}
