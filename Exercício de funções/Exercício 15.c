#include <stdio.h>
#include <stdlib.h>

int letra(char A){
    switch (A){
    case 'a':
        return 1;
        break;
    case 'e':
        return 1;
        break;
    case 'i':
        return 1;
        break;
    case 'o':
        return 1;
        break;
    case 'u':
        return 1;
        break;
    default:
        return 0;
    }
}
int main(){
    char A;
    int i;

    printf("Informe o caracter a ser procurado:");
    scanf("%c", &A);

    i = letra(A);
    if(i == 1){
        printf("Vogal");
    }else{
        printf("Consoante");
    }
}