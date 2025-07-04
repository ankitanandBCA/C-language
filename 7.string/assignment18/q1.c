#include<stdio.h>
#include<string.h>
int length(char *arr)
{
    int len=0;
    for(int i=0;arr[i]!='\0';i++)
    {
        len++;
    }
    return len;
}

int main()
{
    char arr[100];
    printf("enter the string=");
    fgets(arr,100,stdin);
   int s = length(arr);
   printf("length of string=%d",s);
}