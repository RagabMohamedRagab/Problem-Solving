#include <iostream>

void printDigits(int n) {
    if (n < 10) {
        // Base case: when there's only one digit left
        std::cout << n << " ";
    } else {
        // Recursive case: print the digits except the last one
        printDigits(n / 10);
        // Print the last digit
        std::cout << n % 10 << " ";
    }
}

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;

        // Call the recursive function to print digits
        printDigits(n);
        std::cout << std::endl;
    }

    return 0;
}

