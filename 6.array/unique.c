#include <stdio.h>

void findUniqueElements(int arr[], int n) {
    int unique;
    for (int i = 0; i < n; i++) {
        unique = 1;
        for (int j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                unique = 0;
                break;
            }
        }
        if (unique) {
            printf("%d ", arr[i]);
        }
    }
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Unique elements in the array are: ");
    findUniqueElements(arr, n);

    return 0;
}
