#include <stdio.h>
#include <math.h>

int main () {
	
	float a, x, y;
	
	printf("numero:");
	scanf("%f", &a);
		
		y = sqrt(a);
		x = pow(a,2.0);

	printf("quadrado do numero: %f", x);	
	printf("\nraiz quadrada: %f", y);
	
	
	
	return 0;
}
