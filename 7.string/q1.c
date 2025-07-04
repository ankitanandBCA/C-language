#include<stdio.h>
#include<string.h>
int main()
{
    char arr[]="ankit";
    int length=0;
    while (arr[length]!='\0')
    {
        length++;
    }
    printf("%d",length);
    
}