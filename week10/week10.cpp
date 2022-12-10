#include <iostream>

void sumIt(const int& numL,const int& numR, int &sum)
{
    sum = numL + numR;
}


int main() {

    // int* p1 = new int(5);
    // int** p2 = &p1;

    // std::cout << p2 << std::endl;
    // std::cout << *p2 << std::endl;
    // std::cout << **p2 << std::endl;

    // std::cout << (p2 - &p1) << std::endl;

    // int* arr = new int[10];
    // int* p = &arr[0];
    // int* p2 = &arr[7];

    // std::cout << p2 - p << std::endl;

    // delete p1;
    // std::cout << **p2 << std::endl;

    int*** cube = new int**[10];
    for (int i = 0; i < 10; ++i) {
        cube[i] = new int*[10];
        for (int j = 0; j < 10; ++j) {
            cube[i][j] = new int[10];
        }
    }

    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            delete[] cube[i][j];
        }
        delete[] cube[i];
    }
    delete[] cube;

    return 0;
}