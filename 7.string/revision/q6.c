#include<stdio.h>
#include<string.h>
int main()
{
   char name[30];
   printf("enter name : ");
   gets(name);

    strrev(name);
    printf("reverse case name : %s",name);
}