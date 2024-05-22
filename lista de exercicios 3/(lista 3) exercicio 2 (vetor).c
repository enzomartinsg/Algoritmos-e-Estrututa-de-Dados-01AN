#include <stdio.h>


int main () {
	
	int v[15], i, maior, menor;
	
	
		for(i=0; i<15; i++){
		
		printf("digite um numero:");
		scanf("%d", &v[i]);
}
	maior = v[0];
	menor = v[0];

	for(i=0; i<15; i++) {
		if (v[i] > maior)
		maior = v[i];
		
}
	for(i=0; i<15; i++) {
		if (v[i] < menor)
		menor = v[i];
}
	
	
	printf("Maior: %d\nMenor: %d", maior, menor);	
	
	
	
	
	
		return 0;
}
