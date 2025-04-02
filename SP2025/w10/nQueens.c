#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define N 100 // define the number of queens
int numOfSolutions = 0;

void printBoard(int board[N][N]) {
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            printf("%c ", board[i][j] ? 'Q' : '.');
        }
        printf("\n");
    }
    printf("\n");
}

bool isSafe(int board[N][N], int row, int col) {
    //same column
    int i, j;
    for(i=0; i<row; i++) {
        if(board[i][col])
            return false;
    }
    // check left diagonal
    for(i=row, j=col; i>=0 && j>=0; i--, j--) {
        if(board[i][j])
            return false;
    }
    // check right diagonal
    for(i=row, j=col; i>=0 && j<N; i--, j++) {
        if(board[i][j])
            return false;
    }
    return true; // is safe to place queen
}
bool solveNQueen(int board[N][N], int row) {
    if(row >= N) {
        printBoard(board);
        numOfSolutions++;
        return true;
    }
    bool foundSolution = false;
    for(int col=0; col<N; col++) {
        if(isSafe(board, row, col)) {
            board[row][col] = 1; // place queen
            foundSolution = solveNQueen(board, row+1) || foundSolution;
            board[row][col] = 0; // backtrack remove queen
        }
    }
    return foundSolution;
}

int main() {
    int board[N][N] = {0};  // initialize board with 0s
    if(!solveNQueen(board, 0)) {
        printf("There is no solution\n");
    }
    printf("Number of solution: %d\n", numOfSolutions);
    return 0;
}