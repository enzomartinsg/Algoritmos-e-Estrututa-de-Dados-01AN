#include <stdio.h>

int main() {
	
	float a, b, c, d, media;
	printf("digite a primeira nota:");
	scanf("%f", &a);
		printf("digite a segunda nota:");
	scanf("%f", &b);
		printf("digite a terceira nota:");  
	scanf("%f", &c);
		printf("digite a quarta nota:");
	scanf("%f", &d);
	
	
	
	
	media = (a + b + c + d)/4;
	
	printf("media = %f", media);	
	

	return 0;
}
