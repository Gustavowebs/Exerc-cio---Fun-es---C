#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float triangulo_retangulo(float cateto1, float cateto2){
    float hipotenusa;
    hipotenusa = sqrt((pow(cateto1, 2) + pow(cateto2, 2)));
    return(hipotenusa);
}
int main(){
    float cat1, cat2, result;
    printf("Informe os valores do cateto 1 e 2:");
    scanf("%f, %f", &cat1, &cat2);
    result = triangulo_retangulo(cat1, cat2);
    printf("Hipotenusa: %3.2f", result);
}