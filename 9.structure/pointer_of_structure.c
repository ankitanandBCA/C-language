#include <stdio.h>

struct student {
    int roll;
    char name[20];
    float marks;
};

struct student s1;

int main() {
    struct student *ptr = &s1;

    printf("Input information of student\n\n");
    printf("Enter the student roll number: ");
    scanf("%d", &ptr->roll);  // Using pointer dereferencing
    printf("Enter the student name: ");
    scanf("%s", ptr->name);   // No need for & with arrays
    printf("Enter the marks: ");
    scanf("%f", &ptr->marks); // Using pointer dereferencing

    printf("\n\n\nDisplay student information\n\n");
    printf("*************************\n");
    printf("Roll number: %d\n", ptr->roll);
    printf("Name: %s\n", ptr->name);
    printf("Marks: %.2f\n", ptr->marks);
    printf("*************************\n");

    return 0;
}
