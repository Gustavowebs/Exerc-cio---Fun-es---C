#include <stdio.h>
#include <stdlib.h>

int fatorial_numb(int numb){
    int fator=1;
    for(int i=1; i<=numb; i++){
        fator *= i;
    }
    return (fator);
}
    int main(){
        int num, fat=0;
        printf("Informe um numero:");
        scanf("%d", &num);
        fat = fatorial_numb(num);

        printf("O fatorial do numero %d : %d\n", num, fat);
    }