#include <iostream>
using namespace std;

int main() {
    int rows1, cols1, rows2, cols2;

    // Input matrix dimensions
    cout << "Enter rows and columns for matrix 1: ";
    cin >> rows1 >> cols1;
    cout << "Enter rows and columns for matrix 2: ";
    cin >> rows2 >> cols2;

    // Matrix multiplication is possible only if cols1 == rows2
    if (cols1 != rows2) {
        cout << "Matrix multiplication is not possible!" << endl;
        return 0;
    }

    int matrix1[rows1][cols1], matrix2[rows2][cols2], result[rows1][cols2];

    // Input matrices
    cout << "Enter elements of matrix 1:" << endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            cin >> matrix1[i][j];
        }
    }

    cout << "Enter elements of matrix 2:" << endl;
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            cin >> matrix2[i][j];
        }
    }

    // Initialize result matrix
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Output result matrix
    cout << "Result of matrix multiplication:" << endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
