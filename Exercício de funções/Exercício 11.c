#include <stdio.h>
#include <stdlib.h>

float area_diagonal (float d_maior, float d_menor){
    float area;
    area = (d_maior * d_menor)/2;
    return(area);
}
int main(){
    float d_maior, d_menor, result;

    printf("Informe o valor da diagonal maior:");
    scanf("%f", &d_maior);
    printf("Informe a o valor da diagonal menor:");
    scanf("%f", &d_menor);

    result = area_diagonal(d_maior, d_menor);

    printf("O valor da area: %3.2f", result);
}