#include <stdio.h>


int main(){
	
	int b;
	int a = 47;
	printf("adivinhe o numero (de 0 a 100): ");
	scanf("%d", &b);
		for (; b!=a;){
		
	printf("\nerrado, tente novamente:");
	scanf("%d", &b);
}

	
	printf("acertou! %d", b);
	
	
	
	
	
	
	
	
	return 0;
}
	
