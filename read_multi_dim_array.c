#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define NUM_ROWS 10
#define NUM_COLS 5
#define EMPTY_CELL '_'

char** init_board(int numRows, int numCols) {
    char** board = malloc(sizeof(char*) * numRows);
    for (int i = 0; i < numRows; i++){
        board[i] = malloc(sizeof(char) * numCols);
        memset(board[i], EMPTY_CELL, sizeof(char) * numCols);
    }

    return board;
}

void print_board(char** board, int numRows, int numCols){

    // do something to print the board
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++){
            printf("%c", board[i][j]);
        }
        printf("\n");
    }
}

int main(int argc, char** argv){
    char** board = init_board(NUM_ROWS, NUM_COLS);
    print_board(board, NUM_ROWS, NUM_COLS);

    return 0;
}