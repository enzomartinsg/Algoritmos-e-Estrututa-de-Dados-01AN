#include <stdio.h>


int main () {
	
	int i, y;
	int m[3][3] = {{1, 2, 3}, {4, 5 , 6}, {7, 8 , 9}};
	
	
	for(i = 0; i<3; i++)	{
	
		for(y=0; y<3; y++) {
		
			printf("%d ", m[i][y]);
}
	printf("\n\n");
	
}

		return 0;
}
