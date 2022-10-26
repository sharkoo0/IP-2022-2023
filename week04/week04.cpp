#include <iostream>
#include <cmath>
using namespace std;

int main() {
    //TASK 1
    // cout << "Enter a numbrt" << endl;
    // int day;
    // cin >> day;

    // switch(day)
    // {
    //     case(1):
    //         cout << "Monday" << endl;
    //         break;
    //     case(2):
    //         cout << "Tuesday" << endl;
    //         break;
    //     case(3):
    //         cout << "Wednesday" << endl;
    //         break;
    //     case(4):
    //         cout << "Thursday" << endl;
    //         break;
    //     case(5):
    //         cout << "Friday" << endl;
    //         break;
    //     case(6):
    //         cout << "Saturday" << endl;
    //         break;
    //     case(7):
    //         cout << "Sunday" << endl;
    //         break;
    //     default:
    //         cout << "There is no such day" << endl;
    //         break;
    // }

    //TASK 2
    // int year;
    // cout << "Enter a year" << endl;
    // cin >> year;
    // if ((year % 100 == 0) && (year % 400 != 0))
    // {
    //     cout << "The leap year is skipped" << endl;
    // }
    // else if (year % 4 == 0)
    // {
    //     cout << "The year is leap" << endl;
    // }
    // else 
    // {
    //     cout << "The year is just a year" << endl;
    // }

    // std::cout << (year % 4 == 0 ? (year % 100 == 0 ? (year % 400 == 0 ? "leap" : "skipped leap") : "leap") : "not leap") << std::endl;

    //TASK 3
    // int a, b;
    // std::cout << "Enter a: ";
    // std::cin >> a;
    // std::cout << "Enter b: ";
    // std::cin >> b;

    // if (a == 0) {
    //     if (b == 0) {
    //         std::cout << "Every x is solution\n";
    //     } else {
    //         std::cout << "No solution\n";
    //     }
    // } else {
    //     std::cout << "Solution: " << ((-1) * b) / a << std::endl;
    // }

    //TASK 4
    // int a, b, c;
    // double x1, x2, D;
    // cin >> a >> b >> c;
    // bool isEven = b % 2 == 0;

    // if (a == 0) {
    //     std::cout << "This is not quadratic equation\n";
    // } else {
    //     D = (isEven ? ((double)b / 2) * ((double)b / 2) - a * c : (b * b) - 4 * a * c);
    //     if (D < 0) {
    //         std::cout << "Not real solutions\n";
    //     } else {
    //         x1 = isEven ? ((-1) * ((double)b / 2) + sqrt(D)) / (double)a : ((-1) * (double)b + sqrt(D)) / 2 * (double)a;
    //         x2 = isEven ? ((-1) * ((double)b / 2) - sqrt(D)) / (double)a : ((-1) * (double)b - sqrt(D)) / 2 * (double)a;
    //         std::cout << x1 << " " << x2 << std::endl;
    //     }
    // }

    //TASK 5
    // int x, y;
    // cin >> x >> y;

    // if (x == 0 && y == 0) {
    //     std::cout << "Starting point\n";
    // } else if (x == 0) {
    //     std::cout << "Y-axis\n";
    // } else if (y == 0) {
    //     std::cout << "X-axis\n";
    // } else if (x > 0 && y > 0) {
    //     std::cout << "First\n";
    // } else if (x < 0 && y > 0) {
    //     std::cout << "Second\n";
    // } else if (x < 0 && y < 0) {
    //     std::cout << "Third\n";
    // } else {
    //     std::cout << "Forth\n";
    // }
    

    return 0;
}