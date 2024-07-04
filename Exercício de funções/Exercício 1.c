#include <stdio.h>
#include <stdlib.h>
int dobro_numb (int numb1){
    int result1;
    result1 = numb1 *2;
    return(result1);
}
int dobro_numb2(int numb2){
    int result2;
    result2 = numb2 * 2;
    return(result2);
}
int dobro_numb3(int numb3){
    int result3;
    result3 = numb3 * 2;
    return(result3);
}
int main(){
    int n1, n2, n3, result1, result2, result3;

    printf("Informe o primeiro numero:");
    scanf("%d", &n1);
    printf("Informe o segundo numero:");
    scanf("%d", &n2);
    printf("Informe o terceiro numero:");
    scanf("%d", &n3);

    result1 = dobro_numb(n1);
    result2 = dobro_numb2(n2);
    result3 = dobro_numb2(n3);

    printf("PRIMEIRO: %d\nSEGUNDO: %d\nTERCEIRO: %d\n", result1, result2, result3);
}