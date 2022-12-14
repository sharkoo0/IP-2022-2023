#include <iostream>
#include <ctime>
#include <random>

int strlen(char* str) {
    int result = 0;
    while (*str != '\0') {
        ++result;
        ++str;
    }

    return result;
}

int strcmp(char* str1, char* str2) {
    if (strlen(str1) < strlen(str2)) {
        return -1;
    }
    if (strlen(str1) > strlen(str2)) {
        return 1;
    }

    for (int i = 0; i < strlen(str1); ++i) {
        if (str1[i] < str2[i]) {
            return -1;
        } else if (str1[i] > str2[i]) {
            return 1;
        }
    }

    return 0;
}

bool contains(char* str, char c) {

}

int main() {
    char word[6];

    srand(time(0));

    for (int i = 0; i < 5; ++i) {
        word[i] = 'a' + rand() % 26;
        std::cout << word[i] << " ";
    }
    word[5] = '\0';

    std::cout << word << std::endl;

    char guess[6];
    bool flagPlace = false;
    bool flagChar = false;
    int sum = 0;

    int arr[5] = {0};
    int currentSum = 0;

    for (int i = 0; i < 6; ++i) {
        currentSum = 0;
        std::cin.getline(guess, 6);

        for (int j = 0; j < 5; ++j) {
            for (int k = 0; k < 5; ++k) {
                if (guess[j] == word[k]) {
                    flagChar = true;
                    arr[k]++;
                    if (j == k) {
                        flagPlace = true;
                        arr[k]++;
                    }
                }
            }
            // std::cout << flagPlace + flagChar << " ";
            flagChar = false;
            flagPlace = false;
        }

        for (int j = 0; j < 5; ++j) {
            std::cout << arr[j] << " ";
            currentSum += arr[j];
            arr[j] = 0;
        }
        std::cout << std::endl;

        if (strcmp(word, guess) == 0) {
            std::cout << "You found it" << std::endl;
            break;
        }
    }

    std::cout << currentSum * 10 << "%" << std::endl;

    std::cout << word << std::endl;


    return 0;
}