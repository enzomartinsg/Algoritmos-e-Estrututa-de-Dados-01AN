#include <stdio.h>

int main() {
	int i, j;
    int matriz[3][3] = {
        {1, 0, 3},
        {4, 5, 0},
        {0, 8, 9}
    };

    int zero = 0;

   
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (matriz[i][j] == 0) {
                zero++;
            }
        }
    }

 
    printf("total de zeros: %d\n", zero);

    return 0;
}

