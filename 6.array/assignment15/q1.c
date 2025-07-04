#include<stdio.h>

void great(int arr[], int n) {
    printf("Input elements:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);  // Corrected to add space between elements
    }
    printf("\n");

    int g = arr[0];  // Assume first element is the greatest
    for(int i = 1; i < n; i++) {  // Start from the second element
        if(arr[i] > g) {
            g = arr[i];
        }
    }
    printf("Largest element = %d\n", g);
}

int main() {
    int n;
    printf("Size of array: ");
    scanf("%d", &n);

    int arr[n];
    
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Take input for each element
    }
    
    great(arr, n);  // Pass the array and its size to the function

    return 0;
}
