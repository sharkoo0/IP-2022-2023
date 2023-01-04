#include <iostream>

void towerOfHanoi(int n, char from, char to, char helper) {
    if (n == 0) {
        return;
    }

    towerOfHanoi(n - 1, from, helper, to);
    std::cout << "Move disk " << n << " from " << from << " to " << to << std::endl;
    towerOfHanoi(n - 1, helper, to, from);
}

int main() {
    towerOfHanoi(3, 'A', 'B', 'C');

    return 0;
}