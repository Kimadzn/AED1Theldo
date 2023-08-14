#include <stdio.h>

int main() {
    int valor;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    if (valor % 2 == 0 && valor > 15) {
        printf("O valor %d eh par e maior que 15.\n", valor);
    } else if (valor % 2 != 0 && valor < -15) {
        printf("O valor %d eh impar e menor que -15.\n", valor);
    } else {
        printf("O valor nao satisfaz as condicoes especificadas.\n");
    }

    return 0;
}
