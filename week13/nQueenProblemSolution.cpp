#include <iostream>

const int N = 8;

void printBoard(int board[N][N]) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (board[i][j] == 1) {
                std::cout << "Q ";
            } else {
                std::cout << ". ";
            }
                
        }
        std::cout << std::endl;
    }
}

bool isSafe(int board[N][N], int row, int col) {
    // Check this row on left side
    for (int i = 0; i < col; ++i) {
        if (board[row][i] != 0) {
            return false;
        }
    }
    // Check upper diagonal on left side
    for (int i = row, j = col; i >= 0 && j >= 0; --i, --j) {
        if (board[i][j] != 0) {
            return false;
        }
    }
    // Check lower diagonal on left side 
    for (int i = row, j = col; j >= 0 && i < N; ++i, --j) {
        if (board[i][j] != 0) {
            return false;
        }
    }

    return true;
}

bool solveNQueenHelper(int board[N][N], int queens = 0) {
    // base case: If all queens are placed then return true 
    if (queens >= N) {
        return true;
    }

    for (int i = 0; i < N; ++i) {
        // Check if the queen can be placed on board[i][queens]
        if (isSafe(board, i, queens)) {
            // Place this queen in board[i][col]
            board[i][queens] = 1;

            // recur to place rest of the queens
            if (solveNQueenHelper(board, queens + 1)) {
                return true;
            }

            // If placing queen in board[i][queens] doesn't lead to a solution, then remove queen from board[i][queens]
            board[i][queens] = 0;
        }
    }

    return false;
}

bool solveNQueensProblem() {
    int board[N][N] = {{0, 0, 0, 0, 0 ,0 ,0, 0},
                        {0, 0, 0, 0, 0 ,0 ,0, 0},
                        {0, 0, 0, 0, 0 ,0 ,0, 0},
                        {0, 0, 0, 0, 0 ,0 ,0, 0},
                        {0, 0, 0, 0, 0 ,0 ,0, 0},
                        {0, 0, 0, 0, 0 ,0 ,0, 0},
                        {0, 0, 0, 0, 0 ,0 ,0, 0},
                        {0, 0, 0, 0, 0 ,0 ,0, 0}};

    if (!solveNQueenHelper(board)) {
        std::cout << "Solution doesn't exist" << std::endl;
        return false;
    }

    printBoard(board);
    return true;
}

int main() {
    solveNQueensProblem();

    return 0;
}