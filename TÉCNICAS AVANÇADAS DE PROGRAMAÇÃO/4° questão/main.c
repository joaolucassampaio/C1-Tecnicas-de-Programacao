#include <stdio.h>
#include <stdlib.h>

/* Implemente uma fun��o em C que receba como par�metro um array de
n�meros reais de tamanho N e retorne a quantidade de n�meros negativos
presentes nesse array. O prot�tipo da fun��o deve ser o seguinte:
*/

int negativos (float *vet, int N) {
	int i = 0;
	int count = 0;
	for(; i < N;) {
		if(vet[i] < 0) {
			count++;
		}
		i++;
	}
	return count;
}

int main(int argc, char *argv[]) {
	float vet[] = {-12.124, -125.512, -6435.231, -300.256, 346.23, 23423.3};
	int N = sizeof(vet) / sizeof(vet[0]);
	
	int qntdNegativos = negativos(vet, N);
	
	printf("A quantidade de negativos e %d", qntdNegativos);
		
	return 0;
}
