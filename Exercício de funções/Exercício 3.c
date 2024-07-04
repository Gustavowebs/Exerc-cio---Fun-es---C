#include <stdio.h>
#include <stdlib.h>

float conversao(int ang){
    float rad;
    rad = (ang * 3.14)/180;

    return(rad);
}
int main(){
    int angulo;
    float rad;

    printf("Informe o valor do angulo em graus:");
    scanf("%d", &angulo);

    rad = conversao(angulo);
    printf("O valor em radiano: %3.2f", rad);
}