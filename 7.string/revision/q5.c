#include<stdio.h>
#include<string.h>
int main()
{
   char name[30];
   printf("enter name : ");
   gets(name);

    strlwr(name);
    printf("lower case name : %s",name);
}