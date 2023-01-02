#include <iostream>
#include <cmath>

int sumOfDigits(int n) {
    if (n == 0) {
        return 0;
    }

    return n % 10 + sumOfDigits(n / 10);
}

int recStrlen(const char* str) {
    if (*str == '\0') {
        return 0;
    }

    return 1 + recStrlen(++str);
}

int countDigits(int n) {
    if (n == 0) {
        return 0;
    }

    return 1 + countDigits(n / 10);
}

int pow(int n, int p) {
    if (p == 0) {
        return 1;
    }
    if (p == 1) {
        return n;
    }

    return n * pow(n, p - 1);
}

int reverse(int n) {
    if (n == 0) {
        return 0;
    }

    return n % 10 * pow(10, countDigits(n) - 1) + reverse(n / 10);
}

int reverse2(int n, int acc = 0) {
    if (n == 0) {
        return acc;
    }

    return reverse2(n / 10, acc * 10 + n % 10);
}

int main() {

    std::cout << sumOfDigits(154) << std::endl;
    std::cout << recStrlen("fhdsjkfhsdkjaf") << std::endl;
    std::cout << reverse2(1234) << std::endl;

    return 0;
}