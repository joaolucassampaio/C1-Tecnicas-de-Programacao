#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa em C que declare duas vari�veis inteiras. Compare os
endere�os de mem�ria dessas vari�veis e exiba o endere�o de mem�ria da
vari�vel com o maior endere�o.*/

int main(int argc, char *argv[]) {
	//Tema: Atribui��o de Ponteiros
	
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
