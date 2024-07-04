#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float perimetro_quadrado(float lado){
    float perimetro;
    perimetro = 4 * lado;
    return(perimetro);
}
float area_quadrado(float lado){
    float area;
    area = pow(lado, 2);
    return(area);
}
float diagonal_quadrado(float lado){
    float diagonal;
    diagonal = lado * 1.4142;
    return(diagonal);
}
int main(){
    float L, result_perimetro, result_area, result_diagonal;

    printf("Informe o valor do lado do quadrado:");
    scanf("%f", &L);

    result_perimetro = perimetro_quadrado(L);
    result_area = area_quadrado(L);
    result_diagonal = diagonal_quadrado(L);

    printf("Perimetro: %3.2f\nArea: %3.2f\nDiagonal: %3.2f", result_perimetro, result_area, result_diagonal);
}