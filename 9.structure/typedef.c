#include<stdio.h>
typedef struct student
{
    int roll;
    char name[20];
    float marks;
} candidate;

int main(){
     candidate s1;
    printf("input information of student\n\n");
    printf("enter the student roll number=");
    scanf("%d",&s1.roll);
    printf("enter the student name=");
    scanf("%s",&s1.name);
    printf("enter the marks=");
    scanf("%f",&s1.marks);

    printf("\n\n\n Display student information\n\n");
    printf("*************************\n");
    printf("Roll number=%d\n",s1.roll);
    printf("Name=%s\n",s1.name);
    printf("Marks=%f\n",s1.marks);
    printf("*************************\n");

}