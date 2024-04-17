// Author : nishj347 @github
#include <iostream>
using namespace std;

class matrix {
    int rows;
    int columns;
    int **elements;

public:
    matrix(int r, int c) : rows(r), columns(c) {
        elements = new int*[rows];
        for (int i = 0; i < rows; ++i) {
            elements[i] = new int[columns];
        }
    }

    ~matrix() {
        for (int i = 0; i < rows; ++i) {
            delete[] elements[i];
        }
        delete[] elements;
    }

    int getrows() {
        return rows;
    }

    int getcolumns() {
        return columns;
    }

    void setelements() {
        cout << "Enter the elements of the matrix:" << endl;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                cin >> elements[i][j];
            }
        }
    }

    int addmatrix(matrix &m) {
        if (rows != m.getrows() || columns != m.getcolumns()) {
            cout << "Matrices are not of the same size. Addition not possible." << endl;
            return -1;
        }
        cout << "added matrix:" << endl;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                cout << elements[i][j] + m.elements[i][j] << " ";
            }
            cout << endl;
        }
        return 0;
    }

    int multiplymatrix(matrix &m) {
        if (columns != m.getrows()) {
            cout << "The number of columns in the first matrix must be equal to the number of rows in the second matrix for multiplication." << endl;
            return -1;
        }
        int result[rows][m.getcolumns()];
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < m.getcolumns(); j++) {
                result[i][j] = 0;
                for (int k = 0; k < columns; k++) {
                    result[i][j] += elements[i][k] * m.elements[k][j];
                }
            }
        }
        cout << "multiplied matrix:" << endl;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < m.getcolumns(); j++) {
                cout << result[i][j] << " ";
            }
            cout << endl;
        }
        return 0;
    }
};

int main() {
    int rows, columns;
    cout << "Enter the number of rows and columns: ";
    cin >> rows >> columns;

    matrix mat1(rows, columns);
    cout << "for matrix 1:" << endl;
    mat1.setelements();

    matrix mat2(rows, columns);
    cout << "for matrix 2:" << endl;
    mat2.setelements();

    mat1.addmatrix(mat2);
    mat1.multiplymatrix(mat2);

    return 0;
}
