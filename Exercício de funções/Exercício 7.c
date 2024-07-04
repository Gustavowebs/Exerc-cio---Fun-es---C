#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float perimetro_retangulo(float base, float altura){
    float perimetro;
    perimetro = 2 * (base + altura);
    return(perimetro);
}
float area_retangulo(float base, float altura){
    float area;
    area = base * altura;
    return (area);
}
float diagonal_retangulo(float base, float altura){
    float diagonal;
    diagonal = sqrt((pow(base,2) + pow(altura,2)));
    return(diagonal);
}
int main(){
    float b, h, result_perimetro, result_area, result_diagonal;

    printf("Informe o valor da base do retangulo:");
    scanf("%f", &b);
    printf("Informe o valor da altura do retangulo:");
    scanf("%f", &h);

    result_perimetro = perimetro_retangulo(b,h);
    result_area = area_retangulo(b,h);
    result_diagonal = diagonal_retangulo(b,h);

    printf("PERIMETRO: %3.2f\nAREA: %3.2f\nDIAGONAL: %3.2f", result_perimetro, result_area, result_diagonal);
}