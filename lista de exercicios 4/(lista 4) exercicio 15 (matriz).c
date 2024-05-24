#include <stdio.h>

int main() {
   int i, j;
    int m[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    
    int soma = 0;
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            soma += m[i][j];
        }
    }

    printf("soma: %d\n", soma);

    return 0;
}

