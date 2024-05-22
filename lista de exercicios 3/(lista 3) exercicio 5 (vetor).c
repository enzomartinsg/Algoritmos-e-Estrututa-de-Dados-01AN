#include <stdio.h>

#define TAMANHO 10 


int main() {
    int numeros[TAMANHO];
    int pares[TAMANHO];
    int contador_pares = 0; 
    int i;

 
    printf("Digite 10 numeros:\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }


    for (i = 0; i < TAMANHO; i++) {
        if (numeros[i] % 2 == 0) {
            pares[contador_pares] = numeros[i];
            contador_pares++;
        }
    }

    if (contador_pares > 0) {
        printf("\nExistem %d numeros pares. Eles sao:\n", contador_pares);
        for (i = 0; i < contador_pares; i++) {
            printf("%d ", pares[i]);
        }
        printf("\n");
    } else {
        printf("\nSem pares.\n");
    }

    return 0;
}

