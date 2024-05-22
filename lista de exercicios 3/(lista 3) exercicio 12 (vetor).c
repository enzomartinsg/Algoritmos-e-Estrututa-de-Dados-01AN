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

		int maior = vetor[0];
		int menor = vetor[0];
	
		for(i = 0; i < tamanho; i++){
		if (vetor[i]> maior) {
		maior = vetor[i];
}
		if (vetor[i] < menor) {
		menor = vetor[i];
}
}
	printf("Maior: %d ", maior);
	printf("Menor: %d", menor);
	
	
	return 0;
}
