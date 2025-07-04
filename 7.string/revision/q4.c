#include<stdio.h>
#include<string.h>
int main()
{
   char name[30];
   printf("enter name : ");
   gets(name);

    strupr(name);
    printf("upper case name : %s",name);
}