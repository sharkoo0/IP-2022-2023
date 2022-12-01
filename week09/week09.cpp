#include <iostream>

// void swap(int *a, int *b) {
//     int c = *a;
//     *a = *b;
//     *b = c;
// }

// void printEvens(int* arr, int size) {
//     for (int i = 0; i < size; ++i) {
//         if (arr[i] % 2 == 0) {
//             std::cout << arr[i] << " ";
//         }
//     }

//     std::cout << std::endl;
// }

// void printEvens2(int* arr, int size) {
//     for (int i = 0; i < size; ++i) {
//         if (*(arr + i) % 2 == 0) {
//             std::cout << *(arr + i) << " ";
//         }
//     }

//     std::cout << std::endl;
// }

// void func(int& a) {
//     std::cout << a << std::endl;
// }

int** multiplyMatrixes(int** m1, int** m2, int r1, int c1, int r2, int c2) {
    if (c1 != r2) {
        return nullptr;
    }

    int** result = new int*[r1];
    for (int i = 0; i < r1; ++i) {
        result[i] = new int[c2];
    }

    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            for (int k = 0; k < c1; ++k) {
                result[i][j] = m1[i][k] * m2[k][j];
            }
        }
    }

    return result;
}

void printMatrix(int** m, int r, int c) {
    for (int j = 0; j < r; ++j) {
        for (int k = 0; k < c; ++k) {
            std::cout << m[j][k] << " ";
        }
        std::cout << std::endl;
    }
}

void deleteMatrix(int** m, int r, int c) {
    for (int i = 0; i < r; ++i) {
        delete[] m[i];
    }

    delete[] m;
}

int main() {
    // int x = 5;
    // int y = 7;

    // int *p = &x;
    // std::cout << p << std::endl;
    // std::cout << *p << std::endl;
    // std::cout << &p << std::endl;

    // int *arr = new int[10];

    // for (int i = 0; i < 10; ++i) {
    //     arr[i] = i;
    // }

    // for (int i = 0; i < 10; ++i) {
    //     std::cout << (arr + i) << " ";
    // }
    // std::cout << std::endl;

    // printEvens(arr, 10);

    // delete[] arr;

    int** m1 = new int*[3];
    for (int i = 0; i < 3; ++i) {
        m1[i] = new int[2];
    }

    int** m2 = new int*[2];
    for (int i = 0; i < 2; ++i) {
        m2[i] = new int[4];
    }

    for (int j = 0; j < 3; ++j) {
        for (int k = 0; k < 2; ++k) {
            m1[j][k] = 1 + j;
        }
    }

    for (int j = 0; j < 2; ++j) {
        for (int k = 0; k < 4; ++k) {
            m2[j][k] = 2;
        }
    }

    int** result = multiplyMatrixes(m1, m2, 3, 2, 2, 4);
    printMatrix(result, 3, 4);

    // delete[] m1;

    deleteMatrix(m1, 3, 2);
    deleteMatrix(m2, 2, 4);
    deleteMatrix(result, 3, 4);


    return 0;
}