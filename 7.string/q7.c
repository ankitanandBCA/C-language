#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int alphabets = 0, digits = 0, specialChars = 0;

    // Prompt the user to enter a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Traverse the string to count alphabets, digits, and special characters
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha((unsigned char)str[i])) {
            alphabets++;
        } else if (isdigit((unsigned char)str[i])) {
            digits++;
        } else if (!isspace((unsigned char)str[i]) && str[i] != '\n') {
            specialChars++;
        }
    }

    // Print the results
    printf("Total number of alphabets: %d\n", alphabets);
    printf("Total number of digits: %d\n", digits);
    printf("Total number of special characters: %d\n", specialChars);

    return 0;
}
