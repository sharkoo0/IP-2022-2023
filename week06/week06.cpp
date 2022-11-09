#include <iostream>
#include <iomanip>
#include <cmath>

int abs(int n) {
    return n > 0 ? n : (-1) * n;
}

int pow(int n, int p) {
    //n^p
    int power = 1;
    for (int i = 0; i < p; ++i) {
        power *= n;
    }

    return power;
}

double min(double a, double b) {
    return a > b ? b : a;
}

int minInt(int a, int b) {
    return a > b ? b : a;
}

long max(long a, long b) {
    return a > b ? a : b;
}

int minOfThree(int a, int b, int c) {
    return minInt(a, minInt(b, c));
}

long maxOfThree(long a, long b, long c) {
    return max(max(a, b), c);
}

bool isLower(char c) {
    return c >= 'a' && c <= 'z';
}

bool isLetter(char c);

bool isUpper(char c) {
    if (isLetter(c) == true) {
        return c >= 'A' && c <= 'Z';
    } else {
        std::cout << "The symbol '" << c << "' is not a letter\n";
        return false;
    }
    // return c >= 'A' && c <= 'Z';
}

bool isLetter(char c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
    //return isLower(c) || isUpper(c);
}

bool isDigit(char c) {
    return c >= '0' && c <= '9';
}

char toUpper(char c) {
    if (isLower(c)) {
        return c - ('a' - 'A'); 
    }
    return c;
}

char toLower(char c) {
    if (isUpper(c)) {
        return c + ('a' - 'A');
    }
    return c;
}

int countDigit(int n, int d) {
    int counter = 0;
    while (n > 0) {
        if (n % 10 == d) {
            ++counter;
        }
        n /= 10;
    }
    return counter;
}

bool isPrime(int n) {
    for (int i = 2; i < std::sqrt(n); ++i) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

bool isDoublePrimes(int a, int b) {
    return isPrime(a) && isPrime(b) && a + 2 == b;
}

int main() {
    //TASK 0

    // int n;
    // std::cout << "Enter n: ";
    // std::cin >> n;

    // int counter = 0;

    // for (int i = 0; i < n; ++i) {
    //     for (int j = 0; j < n; ++j) {
    //         int fact = 1;
    //         for (int k = 1; k <= counter; ++k) {
    //             if (counter == 0) {
    //                 fact = 1;
    //                 break;
    //             }
    //             fact *= k;
    //         }
    //         ++counter;
    //         std::cout << std::setw(8) << fact << " ";
    //     }
    //     std::cout << std::endl;
    // }

    //TASK 1
    // std::cout << abs(-1) << std::endl;
    // std::cout << pow(2, 3) << std::endl;
    // std::cout << min(1, 3) << std::endl;
    // std::cout << max(1, 3) << std::endl;
    // std::cout << minOfThree(1, 5, 9) << std::endl;
    // std::cout << maxOfThree(1, 5, 9) << std::endl;
    // std::cout << std::boolalpha << isLower('A') << std::endl;
    // std::cout << std::boolalpha << isUpper('a') << std::endl;
    // std::cout << std::boolalpha << isLetter('-') << std::endl;
    // std::cout << std::boolalpha << isDigit('0') << std::endl;
    // std::cout << toLower('R') << std::endl;
    // std::cout << toUpper('e') << std::endl;

    //TASK 2
    // std::cout << countDigit(111223, 1) << std::endl;

    //TASK 3
    std::cout << isDoublePrimes(11, 13) << std::endl;

    return 0;
}