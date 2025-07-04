#include <stdio.h>
#include <math.h>

// 1. Write a function to calculate LCM of two numbers. (TSRS)
int lcm(int a, int b) {
  int max = (a > b) ? a : b;
  while (1) {
    if (max % a == 0 && max % b == 0) {
      return max;
    }
    max++;
  }
}

// 2. Write a function to calculate HCF of two numbers. (TSRS)
int hcf(int a, int b) {
  if (b == 0) {
    return a;
  }
  return hcf(b, a % b);
}

// 3. Write a function to check whether a given number is Prime or not. (TSRS)
int is_prime(int num) {
  if (num <= 1) {
    return 0;
  }
  for (int i = 2; i <= sqrt(num); i++) {
    if (num % i == 0) {
      return 0;
    }
  }
  return 1;
}

// 4. Write a function to find the next prime number of a given number. (TSRS)
int next_prime(int num) {
  while (1) {
    num++;
    if (is_prime(num)) {
      return num;
    }
  }
}

// 5. Write a function to print first N prime numbers (TSRN)
void print_prime_numbers(int n) {
  int count = 0;
  int num = 2;
  while (count < n) {
    if (is_prime(num)) {
      printf("%d ", num);
      count++;
    }
    num++;
  }
  printf("\n");
}

// 6. Write a function to print all Prime numbers between two given numbers. (TSRN)
void print_primes_between(int start, int end) {
  for (int i = start; i <= end; i++) {
    if (is_prime(i)) {
      printf("%d ", i);
    }
  }
  printf("\n");
}

// 7. Write a function to print first N terms of Fibonacci series (TSRN)
void print_fibonacci(int n) {
  int a = 0;
  int b = 1;
  for (int i = 0; i < n; i++) {
    printf("%d ", a);
    int temp = a;
    a = b;
    b = temp + b;
  }
  printf("\n");
}

// 8. Write a function to print PASCAL Triangle. (TSRN)
void print_pascal_triangle(int rows) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j <= i; j++) {
      printf("%d ", (int) factorial(i) / (factorial(j) * factorial(i - j)));
    }
    printf("\n");
  }
}

// Helper function for factorial
int factorial(int n) {
  if (n == 0) {
    return 1;
  }
  return n * factorial(n - 1);
}

// 9. Write a program in C to find the square of any number using the function.
int square(int num) {
  return num * num;
}

// 10. Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the
// function.
double sum_series(int n) {
  double sum = 0;
  for (int i = 1; i <= n; i++) {
    sum += (double) factorial(i) / i;
  }
  return sum;
}

int main() {
  // Example usage for each function:
  printf("LCM of 12 and 18: %d\n", lcm(12, 18));
  printf("HCF of 12 and 18: %d\n", hcf(12, 18));
  printf("Is 17 prime? %d\n", is_prime(17));
  printf("Next prime number after 17: %d\n", next_prime(17));
  printf("First 10 prime numbers: ");
  print_prime_numbers(10);
  printf("Prime numbers between 10 and 20: ");
  print_primes_between(10, 20);
  printf("First 10 terms of Fibonacci series: ");
  print_fibonacci(10);
  printf("PASCAL Triangle with 5 rows:\n");
  print_pascal_triangle(5);
  printf("Square of 5: %d\n", square(5));
  printf("Sum of the series: %lf\n", sum_series(5));

  return 0;
}