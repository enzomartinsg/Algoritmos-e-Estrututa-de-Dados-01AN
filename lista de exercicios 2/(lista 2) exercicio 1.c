#include <stdio.h>


int main(){
	int a, b, c;
	
	printf("num1:");
	scanf("%d", &a);
		printf("num1:");
	scanf("%d", &b);
		printf("num1:");
	scanf("%d", &c);
	
	if((a + b > c) && (a + c > b) && (b + c > a)){	
	if (a == b && b == c){
	
	printf("triangulo equilatero");
}
	
	else if (a == b || b == c || a == c){
	
	printf("triangulo isosceles");
}

	else{
	
	printf("tringulo escaleno");
}
}
	else {
		printf("impossivel formar triangulo");
	}
	
	return 0;
}
