#include <stdio.h>
#include <stdlib.h>

void vetor(int *v){
    int crescent[10], aux;

    for(int i=0; i<10; i++){
        crescent[i] = v[i];
    }

    for(int i=0; i<9; i++){
        for(int j=i+1; j < 10; j++){
            if(crescent[i] > crescent){
                aux = crescent[i];
                crescent[i] = crescent[j];
                crescent[j] = aux;
            }
        }
    }
    for(int i= 0; i<10; i++){
        printf("%d", crescent[i]);
    }
    }
    int main(){
        int v[10];
        for(int i=0; i<10; i++){
            printf("Informe o elemento %d:", i+1);
            scanf("elementos: %d", &v[i]);
        }
        vetor(v);
    }
