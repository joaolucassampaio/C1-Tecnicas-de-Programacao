#include <stdio.h>
#include <stdlib.h>

/* Escreva uma fun��o em C que aceita como par�metro um array de inteiros
com N valores e determina o maior elemento do array, bem como o n�mero de
vezes que esse elemento ocorreu no array. Por exemplo, para um array com os
seguintes elementos: 5, 2, 15, 3, 7, 15, 8, 6, 15, a fun��o deve retornar para o
programa que a chamou o valor 15 e o n�mero 3 (indicando que o n�mero 15
ocorreu 3 vezes). A fun��o deve ser do tipo void. */

void encontrarMaiorElemento(int *array, int N) {
    int maiorElemento = array[0];
    int contador = 1;

    int i = 0;
    for (; i < N;) {
        if (array[i] > maiorElemento) {
            maiorElemento = array[i];
            contador = 1;
        } else if (array[i] == maiorElemento) {
            contador++;
        }
    	i++;
    
	}
    printf("Maior elemento: %d\n", maiorElemento);
    printf("Numero de vezes que ocorreu: %d\n", contador);
}

int main(int argc, char *argv[]) {
	
    int array[] = {5, 2, 15, 3, 7, 15, 8, 8, 6, 15, 30, 30, 30, 30, 30};
    int tamanhoArray = sizeof(array) / sizeof(array[0]);

    encontrarMaiorElemento(array, tamanhoArray);


	return 0;
}
