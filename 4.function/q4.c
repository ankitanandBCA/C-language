#include<stdio.h>
int number(int n)
{
    for(int i=1;i<=n;i++)
    {
        printf("%d",i);
    }
}
int main()
{
    int n;
    printf("enter the number=");
    scanf("%d",&n);
    number(n);
}