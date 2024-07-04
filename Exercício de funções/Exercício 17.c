#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int caractere(char c[100], char caracter){
    int cont=0;

    for(int i=0; i<strlen(c); i++){
        if(c[i] == caracter){
            c[i] = '*';
            cont++;
        }
    }
    for(int i=0; i<strlen(c); i++){
        printf("%c", c[i]);
        return cont;
    }
}
int main(){
    char c[100], caracter;
    int cont;

    printf("Informe uma frase:");
    gets(c);
    printf("Informe um caracter:");
    scanf("%c", &caracter);

    cont = caractere(c, caracter);
    printf("O numero de caracter encontrado: %d", cont);
}