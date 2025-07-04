#include<stdio.h>
#include<string.h>
void lowercase(char *str)
{
     strlwr(str);
     printf("%s",str);
}

int main()
{
    char str[100];
    printf("enter string=");
    fgets(str,100,stdin);
    lowercase(str);
}