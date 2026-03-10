#include <stdio.h>
#include <stdlib.h>

// This is our global game board
char board[3][3] = {
    { '1', '2', '3' },
    { '4', '5', '6' },
    { '7', '8', '9' }
};

// This function will draw the board
void drawBoard()
{
    // system("cls") is for Windows. If you are on Mac or Linux, use system("clear")
    system("cls");
    
    printf("\n\n=== Tic-Tac-Toe ===\n\n");
    printf("Player 1 (X)  -  Player 2 (O)\n\n");
    
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", board[0][0], board[0][1], board[0][2]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", board[1][0], board[1][1], board[1][2]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", board[2][0], board[2][1], board[2][2]);
    printf("     |     |     \n\n");
}

// This function checks for a win or draw
// Returns 1 for a win
// Returns -1 for a draw
// Returns 0 for "game in progress"
int checkWin()
{
    // === Check Rows ===
    if (board[0][0] == board[0][1] && board[0][1] == board[0][2]) return 1;
    if (board[1][0] == board[1][1] && board[1][1] == board[1][2]) return 1;
    if (board[2][0] == board[2][1] && board[2][1] == board[2][2]) return 1;

    // === Check Columns ===
    if (board[0][0] == board[1][0] && board[1][0] == board[2][0]) return 1;
    if (board[0][1] == board[1][1] && board[1][1] == board[2][1]) return 1;
    if (board[0][2] == board[1][2] && board[1][2] == board[2][2]) return 1;

    // === Check Diagonals ===
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) return 1;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) return 1;

    // === Check for Draw ===
    int count = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == 'X' || board[i][j] == 'O') {
                count++;
            }
        }
    }
    
    if (count == 9) {
        return -1; // It's a draw
    }

    return 0; // Game is still in
}