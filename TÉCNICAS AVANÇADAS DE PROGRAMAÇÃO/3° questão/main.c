#include <stdio.h>
#include <stdlib.h>

/*Escreva uma fun��o em C que, dada um n�mero real como par�metro,
retorne a parte inteira e a parte fracion�ria desse n�mero. Escreva tamb�m um
programa que chame essa fun��o.*/

void frac(float num, int *inteiro, float *frac) {
    *inteiro = (int)num;
    *frac = num - *inteiro;
}

int main(int argc, char *argv[]) {
	//Tema: Passagem por refer�ncia
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

