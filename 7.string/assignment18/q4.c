#include<stdio.h>
#include<string.h>
void uppercase(char *str)
{
     strupr(str);
     printf("%s",str);
}

int main()
{
    char str[100];
    printf("enter string=");
    fgets(str,100,stdin);
    uppercase(str);
}