#include <stdio.h>

int main() {
	int i;
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
int soma1 = 0, soma2 = 0, soma3 = 0;
    for (i = 0; i < 3; i++) {
        soma1 += matriz[i][0];
        soma2 += matriz[i][1];
        soma3 += matriz[i][2];
    }
    printf("Soma da coluna 1: %d\n", soma1);
    printf("Soma da coluna 2: %d\n", soma2);
    printf("Soma da coluna 3: %d\n", soma3);
    
       return 0;
}
