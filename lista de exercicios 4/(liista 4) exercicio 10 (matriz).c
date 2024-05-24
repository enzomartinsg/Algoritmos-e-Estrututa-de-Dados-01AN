#include <stdio.h>

int main() {
    int i, j, x;
    int m[2][2] = {{1, 2}, {3, 4}};
    int found = 0; 

    printf("Digite um numero: ");
    scanf("%d", &x);

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            if (m[i][j] == x) {
                printf("Valor encontrado\n");
                found = 1; 
                break;    
            }
        }
        if (found) {
            break; 
        }
    }

    if (!found) {
        printf("Valor nao encontrado\n");
            }

    return 0;
}

