#include <stdio.h>
#include <stdlib.h>

/* Escreva uma fun��o em C que receba um array de inteiros V, bem como os
endere�os de duas vari�veis inteiras, min e max, e armazene nessas vari�veis
o valor m�nimo e m�ximo encontrados no array. Al�m disso, escreva uma fun��o
main que utilize essa fun��o. */

void minMax(int *inteiros, int tamanho, int *min, int *max){
	*min = inteiros[0];
	*max = inteiros[0];
	
	int i = 0;
	for(; i < tamanho;) {
		if(inteiros[i] < *min) {
			*min = inteiros[i];
		}
		if(inteiros[i] > *max) {
			*max = inteiros[i];
		}
		i++;
	}
}

int main(int argc, char *argv[]) {
	int inteiros[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int tamanho = sizeof(inteiros) / sizeof(inteiros[0]);
	int min, max;
	
	minMax(inteiros, tamanho, &min, &max);
	
	printf("O minimo e: %i\n", min);
    printf("O maximo e: %i\n", max);
	
	return 0;
}
