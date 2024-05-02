#include <stdio.h>
#include <stdlib.h>

/* Crie um programa em C que contenha um array de inteiros com 5 elementos.
Utilizando apenas aritmética de ponteiros, leia esse array do teclado e imprima
o dobro de cada valor lido. */

int main(int argc, char *argv[]) {
	int tamanho = 5;
	int array[tamanho];
    int *p = array;
    int i;

    printf("Digite %d numeros inteiros:\n", tamanho);
    for (i = 0; i < tamanho; i++) {
        scanf("%d", p + i);
    }

    printf("O dobro dos valores lidos:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", *(p + i) * 2);
    }
    printf("\n");

	return 0;
}
