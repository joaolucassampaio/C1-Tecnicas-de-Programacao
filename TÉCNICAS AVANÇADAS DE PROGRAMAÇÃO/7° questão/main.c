#include <stdio.h>
#include <stdlib.h>

/* Elabore uma função em C que receba duas strings como parâmetros e
verifique se a segunda string ocorre dentro da primeira. Utilize aritmética de
ponteiros para acessar os caracteres das strings. */

int string_contain(char *str, char *substr) {
    while (*str != '\0') {
        char *p1 = str;
        char *p2 = substr;
        
        while (*p1 == *p2 && *p2 != '\0') {
            p1++;
            p2++;
        }
        
        if (*p2 == '\0') {
            return 1;
        }
        
        str++;
    }
    
    return 0;
}

int main(int argc, char *argv[]) {
	char str1[100];
    char str2[100];
    
    printf("Digite a primeira string: ");
    scanf("%s", str1);
    printf("Digite a segunda string: ");
    scanf("%s", str2);
    
    if (string_contain(str1, str2)) {
        printf("A segunda string ocorre dentro da primeira.\n");
    } else {
        printf("A segunda string NAO ocorre dentro da primeira.\n");
    }
    return 0;
}
