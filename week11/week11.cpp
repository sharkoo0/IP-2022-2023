#include <iostream>

int strlen(char* str) {
    int result = 0;
    while (*str != '\0') {
        ++result;
        ++str;
    }

    return result;
}

void strcpy(char* source, char*& destination) {
    if (destination != nullptr) {
        delete[] destination;
    }

    int length = strlen(source) + 1;
    destination = new char[length];

    for (int i = 0; i < length; ++i) {
        destination[i] = source[i];
    }

    destination[length - 1] = '\0';
}

char* strcat(char* str1, char* str2) {
    int str1Len = strlen(str1);
    int str2Len = strlen(str2);
    int length = str1Len + str2Len + 1;

    char* result = new char[length];

    strcpy(str1, result);
    for (int i = str1Len, j = 0; i < length && j < str2Len; ++i, ++j) {
        result[i] = str2[j];
    }

    result[length - 1] = '\0';

    return result;
}

int main() {

    char* str1 = "abcdef";
    std::cout << str1 << std::endl;
    std::cout << strlen(str1) << std::endl;
    char* str2 = nullptr;
    strcpy(str1, str2);
    std::cout << str2 << std::endl;

    char* str3 = strcat(str1, str2);
    std::cout << str3 << std::endl;

    delete[] str2;
    delete[] str3;

    return 0;
}