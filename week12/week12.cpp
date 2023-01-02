#include <iostream>

void func(char n) {
    if (n < 'A') {
        return;
    }

    std::cout << n << "\n";
    func(n - 1);
    std::cout << n << "\n";
}

int fibonaciiIter(int n) {
    int prev = 0, curr = 1;
    for (;n - 1; --n) {
        curr += prev;
        prev = curr - prev;
    }

    return curr;
}

int fibonacciRec(int n, int prev = 0, int curr = 1) {
    if (n == 1) {
        return curr;
    }

    return fibonacciRec(n - 1, curr, curr + prev);
}

int fibonacci(int n) {
    if (n < 2) {
        return n;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

bool IsEvenNumber(int);
bool IsOddNumber(int);

bool IsOddNumber(int n)
{
	if (n == 0) {
        return 0;
    }
	
	return IsEvenNumber(n - 1);
}

bool IsEvenNumber(int n)
{
	if (n == 0) {
        return 1;
    }
	
	return IsOddNumber(n - 1);
}

int main() {
    // func('E');

    std::cout << IsOddNumber(5) << std::endl;

    return 0;
}