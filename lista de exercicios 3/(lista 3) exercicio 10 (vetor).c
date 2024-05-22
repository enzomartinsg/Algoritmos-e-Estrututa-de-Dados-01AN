#include <stdio.h>


int main () {
	
	int tamanho;
	int i;
	
	printf("Digite o Tamanho do vetor: ");
	scanf("%d", &tamanho);
	
	int vetor[tamanho];
	
	printf("Digite os numeros: ");{
	for(i = 0; i < tamanho; i++)
	scanf("%d", &vetor[i]);
}
	printf("Vetor:\n");{
	for(i = 0; i < tamanho; i++)
	printf("%d ", vetor[i]);
	
	}
	
	
	
	
	
	
	return 0;
}
