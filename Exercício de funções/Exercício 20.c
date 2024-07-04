#include <stdio.h>
#include <stdlib.h>

int vetor (int *v, int numb){
    for(int i=0; i<20; i++){
        if(v[i] == numb){
            return i;
        }
    }
    return -1;
}
int main(){
    int v[20], n, j;

    for(int i=0; i<20; i++){
        printf("Informe o valor do elemento %d:", i+1);
        scanf("%d", &v[i]);
    }

        printf("Informe o elemento a ser encontrado:");
        scanf("%d", &n);

        j = vetor(v, n);

        if(j !=-1){
            printf("A posicao do elemento: %d", j);
        }else{
            printf("Elemento nao encontrado!");
        }
}