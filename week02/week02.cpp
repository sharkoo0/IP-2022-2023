#include <iostream>

int main() {
    //TASK 0
    std::cout << "Daniel Ivanov Radev 71882 1" << std::endl;

    //TASK 1
    int a, b, c;
    std::cout << "Enter a: ";
    std::cin >> a;
    std::cout << "Enter b: ";
    std::cin >> b;
    std::cout << "Enter c: ";
    std::cin >> c;

    int v = a * b * c;
    int s = 2 * (a * b + a * c + b * c);

    std::cout << "Volume: " << v << "\nSurface: " << s << std::endl;

    //TASK 2
    int threeDigitNumber;
    std::cout << "Enter three digits number: ";
    std::cin >> threeDigitNumber;

    int first = threeDigitNumber / 100;
    int second = threeDigitNumber / 10 % 10;
    int third = threeDigitNumber % 10;

    int digitsSum = first + second + third;

    std::cout << "The sum of the digits is " << digitsSum << std::endl;

    //TASK 3
    double kmh;
    std::cout << "Enter km/h: ";
    std::cin >> kmh;
    double mih = kmh * 0.6213711;
    std::cout << "mi/h = " << mih << std::endl;

    //TASK 4
    std::cout << "Enter mi/h: ";
    std::cin >> mih;
    kmh = mih * 1.609344;
    std::cout << "km/h = " << kmh << std::endl;

    return 0;
}