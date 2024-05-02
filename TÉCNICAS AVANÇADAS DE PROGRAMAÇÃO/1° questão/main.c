#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa em C que declare uma variável inteira, uma variável
real e uma variável char, além de declarar ponteiros para cada tipo de dado.
Associe as variáveis aos ponteiros utilizando o operador de endereço '&'. Em
seguida, modifique os valores de cada variável utilizando os ponteiros. Por fim,
imprima os valores das variáveis antes e após a modificação.
*/

int main(int argc, char *argv[]) {	
	//Tema: Atribuição de Ponteiros e Modificação de Variáveis através de Ponteiros
	
	//Definição dos tipos, variáveis e ponteiros
	int inteiro = 1, *ponteiroInt;
	double real = 2.5, *ponteiroReal;
	char caractere = 'a', *ponteiroChar; //1 caractere = '', string = "" (array) 
	
	//Print dos valores antes da modificação:
	printf("Valor inteiro antes: %i", inteiro);
	printf("\nValor real antes: %f", real);
	printf("\nCaractere antes: %c", caractere);	
	
	//Atribuição do endereço das variáveis aos ponteiros
	ponteiroInt = &inteiro;
	ponteiroReal = &real;
	ponteiroChar = &caractere;
	
	//Modificação dos valores das variáveis através dos ponteiros
	*ponteiroInt = 2;
	*ponteiroReal = 4.5;
	*ponteiroChar = 'b';
	
	//Print dos valores depois da modificação:
	printf("\n\nValor inteiro depois: %i", inteiro);
	printf("\nValor real depois: %f", real);
	printf("\nCaractere depois: %c", caractere);
	
	return 0;
}
