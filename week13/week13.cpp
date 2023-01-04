#include <iostream>

using namespace std;

bool equal (const char* str1, const char* str2)
{
    if (*str1 != *str2)
        return false;
    else if (*str1 == '\0' && *str2 == '\0')
        return true;

    return equal(str1 + 1, str2 + 1);
}

int smallest (int* arr, int length, int el = INT32_MAX)
{
    if (length == 0)
        return el;

    return smallest(arr + 1, length - 1, (*arr < el ? *arr : el));
}

void evaluate(const char* str, int count[3]) {
    if (*str == '\0') {
        std::cout << "Upper case letters: " << count[0] << '\n';
        std::cout << "Lower case letters: " << count[1] << '\n';
        std::cout << "Numbers: " << count[2] << '\n';
        return;
    }

    if (*str >= 'A' && *str <= 'Z') {
        count[0]++;
    } else if (*str >= 'a' && *str <= 'z') {
        count[1]++;
    } else if (*str >= '0' && *str <= '9') {
        count[2]++;
    }

    evaluate(str + 1, count);
}

void evaluate2(const char* str, int upper = 0, int lower = 0, int digits = 0) {
    if (*str == '\0') {
        std::cout << "Upper case letters: " << upper << '\n';
        std::cout << "Lower case letters: " << lower << '\n';
        std::cout << "Numbers: " << digits << '\n';
        return;
    }

    if (*str >= 'A' && *str <= 'Z') {
        evaluate2(str + 1, upper + 1, lower, digits);
        return;
    } else if (*str >= 'a' && *str <= 'z') {
        evaluate2(str + 1, upper, lower + 1, digits);
        return;
    } else if (*str >= '0' && *str <= '9') {
        evaluate2(str + 1, upper, lower, digits + 1);
        return;
    }

    evaluate2(str + 1, upper, lower, digits);
}

void hanoiTowers(int n, char start, char help, char end) {
    if (n == 0) {
        return;
    }

    hanoiTowers(n - 1, start, end, help);
    std::cout << "Move disk " << n << " from " << start << " to " << end << '\n';
    hanoiTowers(n - 1, help, start, end);
}

int main ()
{
    int array[6] = {11, 34, -4, 4, 47, 5};

    //cout << boolalpha << equal("Hello", "Hello ") << '\n';
    // std::cout << smallest(array, 6) << '\n';

    // srand(time(0));
    // std::cout << rand() % 10 << std::endl;

    // int count[3] = {0};
    // evaluate2("3 Doors Down");

    hanoiTowers(3, 'A', 'B', 'C');

    return 0;
}