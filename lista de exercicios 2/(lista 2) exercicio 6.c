#include <stdio.h>


int main(){
	
	int a, b, c;
	
		printf("num1:");
	scanf("%d", &a);
		printf("num2:");
	scanf("%d", &b);
		printf("num3:");
	scanf("%d", &c);
	
	
	if (c>b && c>a)
	printf("maior numero: %d", c);
	
	else if (b>c && b>a)
		printf("maior numero: %d", b);
		
		else
			printf("maior numero: %d", a);
	
	
	
	
	
	
	
	
	
		return 0;
}
