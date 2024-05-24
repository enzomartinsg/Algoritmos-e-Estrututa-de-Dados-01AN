#include <stdio.h>


int main () {
	
	int i, y;
	int m[3][2] = {{0, 0, 0}, {0, 0}};
	
	
	for(i = 0; i<3; i++)	{
	
		for(y=0; y<2; y++) {
		
			printf("%d ", m[i][y]);
}
	printf("\n");
	
}

		return 0;
}
