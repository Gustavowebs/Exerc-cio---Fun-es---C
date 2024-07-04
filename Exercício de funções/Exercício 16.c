#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int raiz(int n){
    float aux = sqrt(n);
    int a = aux;

    aux = aux - a;

    if(aux > 0){
        return 0;
    }else{
        return 1;
    }
}
int main(){
    int n, i;

    printf("Informe o numero para verificar a raiz:");
    scanf("%d", &n);

    i = raiz(n);

    if (i == 1){
        printf("Raiz inteira:");
    }else{
        printf("Raiz nao inteira:");
    }
}