#include <stdio.h>
#include <stdlib.h>
int vetor (int *v){
    int crescent=1, decrescent=1;

    for(int i=0; i<9; i++){
        if(v[i] > v[i+1]){
            crescent = 0;
        }else if(v[i]< v[i+1]){
            decrescent = 0;
        }
        if (crescent == 1){
            return 1;
        }else if (decrescent == 1){
            return 2;
        }else{
            return 0;
        }
    }
}
int main(){
    int v[10], result;
    printf("Informe os 10 elementos do vetor:");

    for(int i=0; i<10; i++){
        scanf("%d", &v[i]);

        result = vetor(v);

        if(result == 1){
            printf("O vator ordenado de forma crescente\n");
        }else if(result == 2){
            printf("Vetor ordenado de forma decrescente\n");
        }else{
            printf("Vetor ordenado\n");
        }
    }
}