#include <stdio.h>
#include <locale.h>
int main() {
	
	setlocale (LC_ALL, "portuguese");
	
	float a, b;
	printf("primeiro numero:");
	scanf("%f", &a);
	printf("segundo numero:");
	scanf("%f", &b);
	
	if (a>b)
	printf("%f � o maior", a);
	
	else
	printf("%f � o maior", b);
	
	
	
	
	return 0;
}
	
