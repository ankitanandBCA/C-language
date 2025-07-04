#include<stdio.h>
#include<string.h>
int main()
{
    char arr[100];
    printf("enter string=");
    fgets(arr,100,stdin);
    strlwr(arr);
    printf("uppercase=%s",arr);
}