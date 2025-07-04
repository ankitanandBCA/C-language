#include <stdio.h>
#include <stdbool.h>

// Function to check if a number contains a given digit
bool containsDigit(int number, int digit) {
    if (digit < 0 || digit > 9) {
        return false; // Digit must be between 0 and 9
    }

    if (number < 0) {
        number = -number; // Make the number positive
    }

    while (number > 0) {
        if (number % 10 == digit) {
            return true; // Digit found
        }
        number /= 10;
    }
    return false; // Digit not found
}

int main() {
    int number, digit;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Enter a digit to search for: ");
    scanf("%d", &digit);

    if (containsDigit(number, digit)) {
        printf("The number %d contains the digit %d.\n", number, digit);
    } else {
        printf("The number %d does not contain the digit %d.\n", number, digit);
    }

    return 0;
}
