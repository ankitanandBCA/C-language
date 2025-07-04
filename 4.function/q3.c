#include<stdio.h>
int number(int n)
{
    if(n%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    printf("enter the number=");
    scanf("%d",&n);
    int s=number(n);
    printf("%d",s);
}