#include <stdio.h>


int main () {
	
	int i, y;
	int m[2][2] = {{1, 1}, {1, 1}};
	
	
	for(i = 0; i<2; i++)	{
	
		for(y=0; y<2; y++) {
		
			printf("%d ", m[i][y]);
}
	printf("\n");
	
}

		return 0;
}
