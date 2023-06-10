#include <iostream>

// Function to perform matrix multiplication
void matrixMultiplication(int A[][100], int B[][100], int C[][100], int rowsA, int colsA, int colsB) {
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            C[i][j] = 0;
            for (int k = 0; k < colsA; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// Function to perform matrix addition
void matrixAddition(int A[][100], int B[][100], int C[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

// Function to perform matrix subtraction
void matrixSubtraction(int A[][100], int B[][100], int C[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            C[i][j] = A[i][j] - B[i][j];
        }
    }
}

// Function to perform matrix imposing
void matrixImpose(int A[][100], int B[][100], int C[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (B[i][j] != 0) {
                C[i][j] = B[i][j];
            } else {
                C[i][j] = A[i][j];
            }
        }
    }
}

// Function to perform matrix transpose
void matrixTranspose(int A[][100], int C[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            C[j][i] = A[i][j];
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int A[100][100], B[100][100], C[100][100];
    int rowsA, colsA, rowsB, colsB;

    // Read dimensions of matrices A and B
    std::cout << "Enter the number of rows and columns for matrix A: ";
    std::cin >> rowsA >> colsA;

    std::cout << "Enter the number of rows and columns for matrix B: ";
    std::cin >> rowsB >> colsB;

    // Read elements of matrix A
    std::cout << "Enter the elements of matrix A:" << std::endl;
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsA; j++) {
            std::cin >> A[i][j];
        }
    }

    // Read elements of matrix B
    std::cout << "Enter the elements of matrix B:" << std::endl;
    for (int i = 0; i < rowsB; i++) {
        for (int j = 0; j < colsB; j++) {
            std::cin >> B[i][j];
        }
    }

    // Perform matrix operations
    matrixMultiplication(A, B, C, rowsA, colsA, colsB);
    std::cout << "Matrix A * Matrix B:" << std::endl;
    displayMatrix(C, rowsA, colsB);

    matrixAddition(A, B, C, rowsA, colsA);
    std::cout << "Matrix A + Matrix B:" << std::endl;
    displayMatrix(C, rowsA, colsA);

    matrixSubtraction(A, B, C, rowsA, colsA);
    std::cout << "Matrix A - Matrix B:" << std::endl;
    displayMatrix(C, rowsA, colsA);

    matrixImpose(A, B, C, rowsA, colsA);
    std::cout << "Matrix A imposed over Matrix B:" << std::endl;
    displayMatrix(C, rowsA, colsA);

    matrixTranspose(A, C, rowsA, colsA);
    std::cout << "Transpose of Matrix A:" << std::endl;
    displayMatrix(C, colsA, rowsA);

    return 0;
}
