#include <stdio.h>
#include <stdlib.h>

float reajuste_salarial(float porcent, float salario){
    float reajust, porcent_Total;

    porcent_Total = (porcent + 100)/100;
    reajust = salario * porcent_Total;
    return(reajust);
}
int main(){
    float infor_porcent, infor_salario, salario_Total;
    char caracter;

    printf("Informe a porcentagem a ser aumentada:");
    scanf("%f%c", &infor_porcent, &caracter);
    printf("Informe o salario a ser reajustado:");
    scanf("%f", &infor_salario);

    salario_Total = reajuste_salarial(infor_porcent, infor_salario);

    printf("O reajuste salarial sera de: %3.2f", salario_Total);
}