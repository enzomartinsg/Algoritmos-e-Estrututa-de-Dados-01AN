#include <stdio.h>


int main () {
	
	int v[20], i, soma;
	float media;
	for(i = 0; i<20; i++){
		printf("digite um numero:");
		scanf("%d", &v[i]);
		soma += v[i];
	}

	
	media = (float)soma / 20;
	
	
	printf("media: %.2f", media);
	
	

	
	
	
	return 0;
}
