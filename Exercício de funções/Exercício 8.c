#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float perimetro_circulo (float raio){
    float perimetro;
    perimetro = 2 * 3.14 * raio;
    return(perimetro);
}
float area_circulo (float raio){
    float area;
    area = 3.14 * (pow(raio, 2));
    return(area);
}
int main(){
    float r, result_perimetro, result_area;

    printf("Informe o raio do circulo:");
    scanf("%f", &r);

    result_perimetro = perimetro_circulo(r);
    result_area = area_circulo(r);

    printf("Perimetro: %3.2f\narea: %3.2f", result_perimetro, result_area);
}