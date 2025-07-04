#include<stdio.h>
#include<string.h>
int main()
{
    int length=0;
    char name[30];
    printf("enter the name : ");
    gets(name);
    length=strlen(name);
    printf("length of name : %d",length);

}