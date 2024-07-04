#include <stdio.h>
#include <stdlib.h>
float media_notas(float prova1, float prova2, float prova3){
    float media;
    media = (prova1 + prova2 + prova3)/3;
    return(media);
}
int main(){
    float n1, n2, n3, media;

    printf("Informe a nota da prova 1, 2, 3:");
    scanf("%f,%f, %f", &n1, &n2, &n3);

    media = media_notas(n1, n2, n3);

    printf("MEDIA DA NOTA: %3.2f\n", media);
}