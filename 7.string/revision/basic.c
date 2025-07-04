#include<stdio.h>
int main()
{  int age;
char name[30],email[30];
    printf("enter the name : ");
    gets(name);
    printf("enter the email : ");
    gets(email);
    printf("enter the age : ");
    scanf("%d",&age);
    printf("\n*********************\n ");
    printf("name : %s",name);
    printf("\n email : %s",email);
    printf("\nage : %d",age);

}