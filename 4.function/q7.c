#include <stdio.h>

// Function to calculate factorial of a number
unsigned long long factorial(int n) {
    if (n < 0) {
        return 0; // Factorial is not defined for negative numbers
    }

    unsigned long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Function to calculate combinations C(n, r)
unsigned long long combinations(int n, int r) {
    if (r > n || n < 0 || r < 0) {
        return 0; // Combinations are not defined for these values
    }

    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, r;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of r: ");
    scanf("%d", &r);

    unsigned long long comb = combinations(n, r);
    if (comb == 0 && (r > n || n < 0 || r < 0)) {
        printf("Invalid input. Ensure that 0 <= r <= n and both are non-negative.\n");
    } else {
        printf("Number of combinations C(%d, %d) is %llu\n", n, r, comb);
    }

    return 0;
}
