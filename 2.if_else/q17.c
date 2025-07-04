#include <stdio.h>

int isValidTriangle(int a, int b, int c) {
    // Check the triangle inequality theorem
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        return 1; // The triangle is valid
    } else {
        return 0; // The triangle is not valid
    }
}

int main() {
    int a, b, c;

    // Input the lengths of the sides of the triangle
    printf("Enter the lengths of the sides of the triangle:\n");
    printf("Side 1: ");
    scanf("%d", &a);
    printf("Side 2: ");
    scanf("%d", &b);
    printf("Side 3: ");
    scanf("%d", &c);

    // Check if the triangle is valid
    if (isValidTriangle(a, b, c)) {
        printf("The triangle is valid.\n");
    } else {
        printf("The triangle is not valid.\n");
    }

    return 0;
}
