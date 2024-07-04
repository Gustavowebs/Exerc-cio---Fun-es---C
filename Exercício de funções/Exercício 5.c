#include <stdio.h>
#include <stdlib.h>

int numb_primo(int numb){
    int result_primo, result_not;
    if((numb %2)==1){
        result_primo = numb;
        printf("%d considera numero primo", result_primo);
        return(result_primo);
    }else{
        result_not = numb;
        printf("%d nao considera numero primo", result_not);
        return(result_not);
    }
}
int main(){
    int n1, resultado;

    printf("Informe um numero:");
    scanf("%d", &n1);

    numb_primo(n1);
}