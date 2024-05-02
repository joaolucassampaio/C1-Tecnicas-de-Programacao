#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa em C que declare uma vari�vel inteira, uma vari�vel
real e uma vari�vel char, al�m de declarar ponteiros para cada tipo de dado.
Associe as vari�veis aos ponteiros utilizando o operador de endere�o '&'. Em
seguida, modifique os valores de cada vari�vel utilizando os ponteiros. Por fim,
imprima os valores das vari�veis antes e ap�s a modifica��o.
*/

int main(int argc, char *argv[]) {	
	//Tema: Atribui��o de Ponteiros e Modifica��o de Vari�veis atrav�s de Ponteiros
	
	//Defini��o dos tipos, vari�veis e ponteiros
	int inteiro = 1, *ponteiroInt;
	double real = 2.5, *ponteiroReal;
	char caractere = 'a', *ponteiroChar; //1 caractere = '', string = "" (array) 
	
	//Print dos valores antes da modifica��o:
	printf("Valor inteiro antes: %i", inteiro);
	printf("\nValor real antes: %f", real);
	printf("\nCaractere antes: %c", caractere);	
	
	//Atribui��o do endere�o das vari�veis aos ponteiros
	ponteiroInt = &inteiro;
	ponteiroReal = &real;
	ponteiroChar = &caractere;
	
	//Modifica��o dos valores das vari�veis atrav�s dos ponteiros
	*ponteiroInt = 2;
	*ponteiroReal = 4.5;
	*ponteiroChar = 'b';
	
	//Print dos valores depois da modifica��o:
	printf("\n\nValor inteiro depois: %i", inteiro);
	printf("\nValor real depois: %f", real);
	printf("\nCaractere depois: %c", caractere);
	
	return 0;
}
