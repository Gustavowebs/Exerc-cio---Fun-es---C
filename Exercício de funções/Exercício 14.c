#include <stdio.h>
#include <stdlib.h>

int ehDivisivel(int dividendo, int divisor) {
    if (divisor == 0) {
        printf("Erro: O divisor não pode ser zero.\n");
        return 0;
    }

    if (dividendo % divisor == 0) {
        return 1;
    } else {
        return 0; 
    }
}
int main() {
    int num1, num2;

    printf("Digite o dividendo: ");
    scanf("%d", &num1);

    printf("Digite o divisor: ");
    scanf("%d", &num2);

    if (num2 < num1) {
        int resultado = ehDivisivel(num1, num2);
        if (resultado) {
            printf("%d é divisível por %d.\n", num1, num2);
        } else {
            printf("%d não é divisivel por %d.\n", num1, num2);
        }
    } else {
        printf("O divisor deve ser menor que o dividendo.\n");
    }
}
