#include <iostream>
using namespace std;

void printMatrix(const int* mat, int rows, int cols) {
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            cout << *((mat + i*cols) + j) << " ";
        }
        cout << endl;
    }
}

int main() {
    // 2x3 matrix
    int A[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // 3x2 matrix
    int B[3][2] = {
        {7, 8},
        {9, 10},
        {11, 12}
    };

    // Result will be 2x2
    int C[2][2] = {0};

    // Matrix multiplication
    for(int i = 0; i < 2; ++i) {
        for(int j = 0; j < 2; ++j) {
            for(int k = 0; k < 3; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "Matrix A (2x3):" << endl;
    printMatrix(&A[0][0], 2, 3);

    cout << "\nMatrix B (3x2):" << endl;
    printMatrix(&B[0][0], 3, 2);

    cout << "\nResult Matrix C (2x2):" << endl;
    printMatrix(&C[0][0], 2, 2);
    return 0;
}