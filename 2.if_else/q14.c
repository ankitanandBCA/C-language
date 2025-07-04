#include<stdio.h>
int main()
{
    int n;
    printf("enter the number=");
    scanf("%d",&n);
    if(n%7==0&&n%3==0)
    printf("divisible");
    else
    printf("not divisible");
}