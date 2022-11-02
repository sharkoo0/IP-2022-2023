#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
    //TASK 0
    // int number;
    // cout << "Enter number: ";
    // cin >> number;
    // int first = number / 1000;
    // int second = number / 100 % 10;
    // int third = number % 100 / 10;
    // int forth = number % 10;

    // if (first == 5 || second == 5 || third == 5 || forth == 5) { // (first == 5 || second == 5 || third == 5 || forth == 5) && (number % 5 == 0)
    //     if (forth == 5 || forth == 0) { // number % 5 == 0
    //         cout << "The number contains the digit 5 and it is divisible by 5.\n";
    //     } else {
    //         cout << "The number contains the digit 5 and it is not divisible by 5.\n";
    //     }
    // } else if (number % 2 == 0) { // forth % 2 == 0
    //     cout << "The number doesn't contain the digit 5 and it is even.\n";
    // } else if (number % 2 != 0) {
    //     cout << "The number doesn't contain the digit 5 and it is not even.\n";
    // }

    //TASK 1
    // int n;
    // cout << "Enter n: ";
    // cin >> n;

    // for (int i = n; i > 1; --i) {
    //     n *= i - 1;
    // }

    // cout << n << endl;

    // int result = 1;

    // for (int i = 2; i <= n; ++i) {
    //     result *= i;
    // }

    // cout << result << endl;

    //TASK 2
    // int number;

    // cout << "Enter random numbers\n";
    // int sum = 0;
    // do {
    //     cin >> number;
    //     sum += number;
    // }while(number); //number != 0

    // cout << "The sum is " << sum << endl;

    //TASK 3
    // int number;
    // cout << "Enter a number: ";
    // cin >> number;

    // if (number < 0) {
    //     number *= -1;
    // }

    // do {
    //     cin >> number;
    // }while(number < 0);

    // int sum = 0;

    // while (number != 0) { // number != 0 === number > 0
    //     sum += number % 10;
    //     number /= 10;
    // }

    // cout << "The sum of the digits is " << sum << endl;

    // int counter = 0;

    // while (number != 0) {
    //     ++counter;
    //     number /= 10;
    // }

    //TASK 4
    // int number;
    // cout << "Enter a number: ";
    // cin >> number;

    // bool flag = false;

    // if (number == 1) {
    //     cout << "The number is not prime\n";
    //     flag = true;
    // }

    // for (int i = 2; i < number / 2; ++i) {
    //     if (number % i == 0) {
    //         cout << "The number is not prime\n";
    //         flag = true;
    //         break;
    //     }
    // }

    // if (!flag) {
    //     cout << "The number is prime\n";
    // }

    //TASK 5
    // int number;
    // cout << "Enter a number: ";
    // cin >> number;

    // bool flag = false;

    // for (int i = 2; i <= number; ++i) {
    //     flag = false;
    //     for (int j = 2; j <= i / 2; ++j) {
    //         if (i % j == 0) {
    //             flag = true;
    //             break;
    //         }
    //     }
    //     if (!flag) {
    //         cout << i << " ";
    //     }
    // }
    // cout << endl;

    return 0;
}