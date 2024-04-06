#include <stdio.h>
#include <math.h>

int main () {
	
	int a, positivo;
	
	printf("digite um numero positivo:");
	scanf("%d", &a);
	
		positivo = sqrt(a);
	if (a>=0)

	printf("raiz quadrada: %d", positivo);	
	
	else
	printf("numero invalido");
	
	
	
	return 0;
}
