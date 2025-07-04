#include<stdio.h>
int oddnumber(int n)
{
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            printf("%d",i);
        }
    }
}
int main()
{
    int n;
    printf("enter the number=");
    scanf("%d",&n);
    oddnumber(n);
}