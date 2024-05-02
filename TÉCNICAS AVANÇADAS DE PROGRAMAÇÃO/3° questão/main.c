#include <stdio.h>
#include <stdlib.h>

/*Escreva uma função em C que, dada um número real como parâmetro,
retorne a parte inteira e a parte fracionária desse número. Escreva também um
programa que chame essa função.*/

void frac(float num, int *inteiro, float *frac) {
    *inteiro = (int)num;
    *frac = num - *inteiro;
}

int main(int argc, char *argv[]) {
	//Tema: Passagem por referência
    float num;
    int inteiro;
    float fracao;

    printf("Digite um numero real: ");
    scanf("%f", &num);

    frac(num, &inteiro, &fracao);

    printf("Parte inteira: %d\n", inteiro);
    printf("Parte fracionaria: %f\n", fracao);

    return 0;
}

