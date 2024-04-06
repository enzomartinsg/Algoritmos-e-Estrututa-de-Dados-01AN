#include <stdio.h>
#include <math.h>

int main () {
	
	float a, x, y;
	
	printf("numero:");
	scanf("%f", &a);
		
		x = sqrt(a);
		y = pow(a,2.0);
	if (a>=0)

	printf("raiz quadrada: %f", x);	
	
	else
	printf("quadrado do numero: %f", y);
	
	
	
	return 0;
}
