#include <iostream>

bool isLetter(char c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

void printLetters(char c) {
    if (!isLetter(c)) {
        return;
    }

    std::cout << c << std::endl;
    printLetters(c - 1);
    std::cout << c << std::endl;
}

int main() {

    printLetters('c');

    return 0;
}