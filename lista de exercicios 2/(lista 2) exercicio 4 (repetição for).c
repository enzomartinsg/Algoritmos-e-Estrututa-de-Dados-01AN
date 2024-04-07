#include <stdio.h>

int main() {
    int numeros[10];
    int soma = 0;
    float media;
    int a;
    printf("Digite 10 numeros:\n");
    for (a = 0; a < 10; a++) {
        printf("Numero %d: ", a + 1);
        scanf("%d", &numeros[a]);
        soma += numeros[a];
    }
    media = (float)soma / 10;
    printf("media: %.2f\n", media);
    return 0;
}
    
