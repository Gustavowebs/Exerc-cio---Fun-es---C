#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float diagonal_paralelepipedo(float a, float b, float c){
    float diagonal;

    diagonal = sqrt((pow(a, 2)+ pow(b, 2)+ pow(c, 2)));
    return(diagonal);
}
int main(){
    float a, b, c, result_diagonal;

    printf("Informe os valores dos lados 1,2 e 3:");
    scanf("%f,%f,%f", &a, &b, &c);

    result_diagonal = diagonal_paralelepipedo(a,b,c);

    printf("Valor da diagonal: %3.2f", result_diagonal);
}