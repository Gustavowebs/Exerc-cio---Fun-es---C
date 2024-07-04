#include <stdio.h>
#include <stdlib.h>

float comerciantes(float porcent, float venda){
    float reajust, porcent_Total;

    porcent_Total = (100 - porcent)/100;

    reajust = porcent_Total * venda;
    return (reajust);
}
int main(){
    float porcent_desconto, valor_venda, result;
    char caracter;

    printf("Informe a porcentagem do desconto:");
    scanf("%f%c", &porcent_desconto, &caracter);
    printf("Informe o valor do produto:");
    scanf("%f", &valor_venda);

    result = comerciantes(porcent_desconto, valor_venda);

    printf("O valor do produto apos a venda: %3.2f", result);
    
}