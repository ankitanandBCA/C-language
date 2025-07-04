#include<stdio.h>
int main()
{
    int length=0;
    char name[30];
    printf("enter the name : ");
    gets(name);
    for(int i=0;i<name[i];i++)
    {
          length++;
    }
    printf("length : %d",length);
}