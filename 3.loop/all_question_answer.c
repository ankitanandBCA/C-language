#include <stdio.h>

int main() {
  // 1. Print MySirG 5 times
  for (int i = 0; i < 5; i++) {
    printf("MySirG\n");
  }

  // 2. Print the first 10 natural numbers
  printf("\nFirst 10 natural numbers:\n");
  for (int i = 1; i <= 10; i++) {
    printf("%d ", i);
  }

  // 3. Print the first 10 natural numbers in reverse order
  printf("\n\nFirst 10 natural numbers in reverse order:\n");
  for (int i = 10; i >= 1; i--) {
    printf("%d ", i);
  }

  // 4. Print the first 10 odd natural numbers
  printf("\n\nFirst 10 odd natural numbers:\n");
  for (int i = 1; i <= 10; i++) {
    if (i % 2 != 0) {
      printf("%d ", i);
    }
  }

  // 5. Print the first 10 odd natural numbers in reverse order
  printf("\n\nFirst 10 odd natural numbers in reverse order:\n");
  for (int i = 10; i >= 1; i--) {
    if (i % 2 != 0) {
      printf("%d ", i);
    }
  }

  // 6. Print the first 10 even natural numbers
  printf("\n\nFirst 10 even natural numbers:\n");
  for (int i = 2; i <= 10; i++) {
    if (i % 2 == 0) {
      printf("%d ", i);
    }
  }

  // 7. Print the first 10 even natural numbers in reverse order
  printf("\n\nFirst 10 even natural numbers in reverse order:\n");
  for (int i = 10; i >= 2; i--) {
    if (i % 2 == 0) {
      printf("%d ", i);
    }
  }

  // 8. Print squares of the first 10 natural numbers
  printf("\n\nSquares of the first 10 natural numbers:\n");
  for (int i = 1; i <= 10; i++) {
    printf("%d ", i * i);
  }

  // 9. Print cubes of the first 10 natural numbers
  printf("\n\nCubes of the first 10 natural numbers:\n");
  for (int i = 1; i <= 10; i++) {
    printf("%d ", i * i * i);
  }

  // 10. Print a table of 5
  printf("\n\nTable of 5:\n");
  for (int i = 1; i <= 10; i++) {
    printf("5 x %d = %d\n", i, 5 * i);
  }

  return 0;
}