#include <stdio.h>
int main () {	
	int i, y, x;
	int m[4][4] = {{1, 2, 3, 4}, {5, 6 , 7, 8}, {9, 10 , 11,12},{13, 14, 15, 16}};
	for(i = 0; i<4; i++)	{
		for(y=0; y<4; y++) {
			printf("%d ", m[i][y]);
}printf("\n");
}printf("\n");
	printf("escolha uma linha pra somar (1-4): ");
	scanf("%d", &x);
	if(x == 1)
		printf("soma: 10");
	else if (x == 2)
printf("soma: 26");
	else if (x == 3)
printf("soma: 42");
		else if (x == 4)
printf("soma: 58");
	else
	printf("linha invalida!");
		return 0;
}
