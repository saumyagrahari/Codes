#include <stdio.h>

char board[3][3]; // 3x3 Tic-Tac-Toe board

// Function to initialize the board
void initBoard() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

// Function to display the board
void displayBoard() {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
        if (i < 2) printf("---|---|---\n");
    }
    printf("\n");
}

// Function to check if a player has won
int checkWin(char player) {
// Check rows and columns
    for (int i = 0; i < 3; i++) {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player)) {
            return 1;
        }
    }
    // Check diagonals
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return 1;
    }
    return 0;
}

// Function to check if the board is full (draw)
int checkDraw() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') return 0;
        }
    }
    return 1;
}
int main() {
    int row, col;
    char player = 'X';
    initBoard();

    printf("Welcome to Tic-Tac-Toe!\n");
    displayBoard();

    while (1) {
        printf("Player %c, enter row and column (0, 1, or 2): ", player);
        scanf("%d %d", &row, &col);

        if (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != ' ') {
            printf("Invalid move! Try again.\n");
            continue;
        }

        board[row][col] = player;
        displayBoard();

        if (checkWin(player)) {
            printf("Player %c wins!\n", player);
            break;
        }
if (checkDraw()) {
            printf("It's a draw!\n");
            break;
        }

        // Switch player
        player = (player == 'X') ? 'O' : 'X';
    }

    return 0;
}