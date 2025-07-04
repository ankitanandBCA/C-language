#include <stdio.h>

// 1. Write a program to print unit digit of a given number
int print_unit_digit(int num) {
    return num % 10;
}

// 2. Write a program to print a given number without its last digit.
int print_without_last_digit(int num) {
    return num / 10;
}

// 3. Write a program to swap values of two int variables
void swap_int_variables(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 4. Write a program to swap values of two int variables without using a third variable.
void swap_int_variables_without_third(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

// 5. Write a program to input a three-digit number and display the sum of the digits.
int sum_of_digits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

// 6. Write a program which takes a character as an input and displays its ASCII code.
int print_ascii_code(char ch) {
    return (int)ch;
}

// 7. Write a program to find the position of first 1 in LSB.
int find_position_of_first_1(int num) {
    int pos = 0;
    while (num != 0) {
        if (num & 1) {
            return pos;
        }
        pos++;
        num >>= 1;
    }
    return -1; // No 1 found
}

// 8. Write a program to check whether the given number is even or odd using a bitwise operator.
int is_even(int num) {
    return !(num & 1);
}

// 9. Write a program to print size of an int, a float, a char and a double type variable
void print_sizes() {
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of char: %zu bytes\n", sizeof(char));
    printf("Size of double: %zu bytes\n", sizeof(double));
}

// 10. Write a program to make the last digit of a number stored in a variable as zero. (Example - if x=2345 then make it x=2340)
int make_last_digit_zero(int num) {
    return num / 10 * 10;
}

// 11. Write a program to input a number from the user and also input a digit. Append a digit in the number and print the resulting number. (Example - number=234 and digit=9 then the resulting number is 2349)
int append_digit(int num, int digit) {
    return num * 10 + digit;
}

// 12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and convert it into USD.
float inr_to_usd(float inr) {
    return inr / 76.23;
}

// 13. Write a program to take a three-digit number from the user and rotate its digits by one position towards the right.
int rotate_digits(int num) {
    int last_digit = num % 10;
    int remaining_digits = num / 10;
    return last_digit * 100 + remaining_digits;
}

int main() {
    // 1.
    int num1 = 1234;
    printf("Unit digit of %d: %d\n", num1, print_unit_digit(num1));

    // 2.
    int num2 = 1234;
    printf("Number without last digit of %d: %d\n", num2, print_without_last_digit(num2));

    // 3.
    int a = 10, b = 20;
    printf("Before swap: a = %d, b = %d\n", a, b);
    swap_int_variables(&a, &b);
    printf("After swap: a = %d, b = %d\n", a, b);

    // 4.
    int c = 10, d = 20;
    printf("Before swap: c = %d, d = %d\n", c, d);
    swap_int_variables_without_third(&c, &d);
    printf("After swap: c = %d, d = %d\n", c, d);

    // 5.
    int num3 = 123;
    printf("Sum of digits of %d: %d\n", num3, sum_of_digits(num3));

    // 6.
    char ch = 'A';
    printf("ASCII code of %c: %d\n", ch, print_ascii_code(ch));

    // 7.
    int num4 = 101100;
    printf("Position of first 1 in LSB of %d: %d\n", num4, find_position_of_first_1(num4));

    // 8.
    int num5 = 10;
    printf("Is %d even? %s\n", num5, is_even(num5) ? "Yes" : "No");

    // 9.
    print_sizes();

    // 10.
    int num6 = 2345;
    printf("Number after making last digit zero: %d\n", make_last_digit_zero(num6));

    // 11.
    int num7, digit;
    printf("Enter a number: ");
    scanf("%d", &num7);
    printf("Enter a digit: ");
    scanf("%d", &digit);
    printf("Resulting number: %d\n", append_digit(num7, digit));

    // 12.
    float inr_amount;
    printf("Enter amount in INR: ");
    scanf("%f", &inr_amount);
    printf("Amount in USD: %.2f\n", inr_to_usd(inr_amount));

    // 13.
    int num8;
    printf("Enter a three-digit number: ");
    scanf("%d", &num8);
    printf("Rotated number: %d\n", rotate_digits(num8));

    return 0;
}