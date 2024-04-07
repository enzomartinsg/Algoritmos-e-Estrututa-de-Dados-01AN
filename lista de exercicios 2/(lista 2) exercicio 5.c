#include <stdio.h>


int main(){
	
	int a, b, c;
	
		printf("num1:");
	scanf("%d", &a);
		printf("num2:");
	scanf("%d", &b);
		printf("num3:");
	scanf("%d", &c);
	
	
	if (c<b && c<a)
	printf("menor numero: %d", c);
	
	else if (b<c && b<a)
		printf("menor numero: %d", b);
		
		else
			printf("menor numero: %d", a);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
		return 0;
}
