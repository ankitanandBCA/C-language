#include <stdio.h>

struct student {
    int roll;
    char name[20];
    float marks;
};

int main() {
    struct student s1[5];
    printf("Input information of students\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Enter the student roll number: ");
        scanf("%d", &s1[i].roll);
        printf("Enter the student name: ");
        scanf("%s", s1[i].name);
        printf("Enter the marks: ");
        scanf("%f", &s1[i].marks);
    }

    printf("\n\n\nDisplay student information\n\n");
    for (int i = 0; i < 5; i++) {
        printf("*************************\n");
        printf("Roll number: %d\n", s1[i].roll);
        printf("Name: %s\n", s1[i].name);
        printf("Marks: %.2f\n", s1[i].marks);
        printf("*************************\n");
    }

    return 0;
}
