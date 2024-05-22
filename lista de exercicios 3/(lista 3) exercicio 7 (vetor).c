#include <stdio.h>

#define TAMANHO 30

int main() {
    int vetor[TAMANHO];
    int frequencia[TAMANHO] = {0};
    int i, j, mais_recorrente, max_frequencia = 0;

    
    printf("Digite os %d numeros do vetor:\n", TAMANHO);
    for (i = 0; i < TAMANHO; i++) {
        scanf("%d", &vetor[i]);
    }

  
    for (i = 0; i < TAMANHO; i++) {
        frequencia[vetor[i]]++;
    }

   
    for (i = 0; i < TAMANHO; i++) {
        if (frequencia[i] > max_frequencia) {
            max_frequencia = frequencia[i];
            mais_recorrente = i;
        }
    }

   
    printf("O numero mais recorrente e: %d\n", mais_recorrente);

    return 0;
}

