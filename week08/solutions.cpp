#include <iostream>

using namespace std;

const int SIZE = 100;

void printFlip(int matrix[2][3], int rows, int cols) {
    for (int i = 0; i < cols; ++i) {
        for (int j = 0; j < rows; ++j) {
            std::cout << matrix[j][i] << " ";
        }
        std::cout << std::endl;
    }
}

bool isInterestingNumber(int number) {
    if (number < 0) {
        return false;
    }

    while (number != 0) {
        // int last = number % 10;
        // number /= 10;
        // if (last < number % 10) {
        //     return false;
        // }
        if (number % 10 < number / 10 % 10) {
            return false;
        }
        number /= 10;
    }

    return true;
}

bool isInteresting (int number)
{
    int lastDigit = number % 10;
    number /= 10;

    while (number != 0)
    {
        int currentDigit = number % 10;
        number /= 10;

        if (currentDigit > lastDigit)
            return false;

        lastDigit = currentDigit;
    }

    return true;
}

int main() {

    // int N;
    // do {
    //     cin >> N;
    // } while (N <= 0 || N > 100);

    // unsigned int arr[SIZE] = {};

    // for (int i = 0; i < N; ++i)
    // {
    //     cin >> arr[i];
    // }

    // for (int i = 0; i < N; ++i)
    // {
    //     cout << "The number " << arr[i] << (isInteresting(arr[i]) ? " is" : " is not") << " an interesting number." << endl;
    // }

    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    printFlip(matrix, 2, 3);

    int a = 5;
    int*p = &a;
    


    return 0;
}