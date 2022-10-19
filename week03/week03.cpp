#include <iostream>

int main() {

    //TASK 0
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    if (number < 100 || number > 999) {
        std::cout << "Not 3-digit number\n";
        return 0;
    }

    int first = number / 100;
    int second = number / 10 % 10;
    int third = number % 10;

    int v = first * second * third;
    int s = 2 * (first * second + first * third + second * third);

    std::cout << "S = " << s << std::endl;
    std::cout << "V = " << v << std::endl;

    //TASK 1
    std::cout << "Enter a number: ";
    std::cin >> number;

    std::cout << "Is divisible by 2: ";
    if (number % 2 == 0) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }

    //TASK 2
    char c;
    std::cout << "operation: (+ - * /): ";
    std::cin >> c;
    double a, b;
    std::cout << "first number: ";
    std::cin >> a;
    std::cout << "second number: ";
    std::cin >> b;

    std::cout << a << " " << c << " " << b << " = ";
    switch (c)
    {
    case '+':
        std::cout << a + b << std::endl;
        break;
    case '-':
        std::cout << a - b << std::endl;
        break;
    case '*':
        std::cout << a * b << std::endl;
        break;
    case '/':
        std::cout << a / b << std::endl;
        break;
    default:
        std::cout << "NaN\nInvalid operation\n";
    }

    //TASK 3
    std::cout << "Enter a 4-digit number: ";
    std::cin >> number;

    if (number < 1000 || number > 9999) {
        std::cout << "Not 4-digit number\n";
        return 0;
    }

    int first = number / 1000;
    int second = number / 100 % 10;
    int third = number / 10 % 10;
    int forth = number % 10;

    std::cout << "Are the digits unique: ";

    if (first != second && first != third && first != forth && second != third && second != forth && third != forth) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }

    return 0;
}