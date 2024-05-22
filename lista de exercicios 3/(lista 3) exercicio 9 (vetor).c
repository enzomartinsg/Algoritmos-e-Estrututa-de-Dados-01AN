#include <stdio.h>


int main () {
	
	int v[12], i;
	
	for (i=0; i<12; i++){
		printf("Digite um numero: ");
			scanf("%d", &v[i]);
		}
			
			
		for (i=0; i<12; i++){
			if (v[i] < 0)
			(v[i]=0);
		}
	
		for (i=0; i<12; i++)
			printf("%d ", v[i]);
	
	
	
	
	
		return 0;
}
