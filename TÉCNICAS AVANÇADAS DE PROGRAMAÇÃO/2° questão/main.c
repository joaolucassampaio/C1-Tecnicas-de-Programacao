#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa em C que declare duas variáveis inteiras. Compare os
endereços de memória dessas variáveis e exiba o endereço de memória da
variável com o maior endereço.*/

int main(int argc, char *argv[]) {
	//Tema: Atribuição de Ponteiros
	
	int primeiraVar, segundaVar, *ponteiroUm, *ponteiroDois;
	
	ponteiroUm = &primeiraVar;
	ponteiroDois = &segundaVar;
	
	if(ponteiroUm > ponteiroDois) {
		printf("%p ", ponteiroUm);
	} else {
		printf("\n%p ", ponteiroDois);
	}
	
	return 0;
}
