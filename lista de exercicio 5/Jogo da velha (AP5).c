#include <stdio.h>
#include <locale.h>


void printBoard(char board[3][3]) {
	int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
    printf(" %c ", board[i][j]);
        }
        printf("\n");
    }
}


char checkWinner(char board[3][3]) {
    int i;
for (i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != '-')
            return board[i][0];
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != '-')
            return board[0][i];
    }
  
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != '-')
        return board[0][0];
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != '-')
        return board[0][2];

 
    return ' ';
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    char board[3][3] = { {'-', '-', '-'}, {'-', '-', '-'}, {'-', '-', '-'} };
    int l, c;
    char currentPlayer = 'X';
    int moves = 0;
    char winner = ' ';

    printf("Bem-vindo ao jogo da velha!\n");

    while (moves < 9 && winner == ' ') {
        printBoard(board);

        printf("Digite linha e coluna (1-3) para jogador %c: ", currentPlayer);
        scanf("%d %d", &l, &c);

        if (l >= 1 && l <= 3 && c >= 1 && c <= 3 && board[l-1][c-1] == '-') {
            board[l-1][c-1] = currentPlayer;
            moves++;
          
            winner = checkWinner(board);

          
            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        } else {
            printf("Jogada invalida!\n");
        }
    }

    printBoard(board);

    if (winner != ' ') {
        printf("O jogador %c venceu!\n", winner);
    } else {
        printf("Empate \n");
    }

    return 0;
}


