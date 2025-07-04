#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "ankit";
    char str1[] = "anand";
    int result = strcmp(str, str1);

    if (result < 0) {
        printf("%s is less than %s\n", str, str1);
    } else if (result > 0) {
        printf("%s is greater than %s\n", str, str1);
    } else {
        printf("%s is equal to %s\n", str, str1);
    }

    return 0;
}