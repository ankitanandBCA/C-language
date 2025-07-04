#include<stdio.h>
#include<string.h>
int main()
{
    char arr[100];
    printf("enter string=");
    fgets(arr,100,stdin);
    strupr(arr);
    printf("uppercase=%s",arr);
}