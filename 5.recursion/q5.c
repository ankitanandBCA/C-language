#include<stdio.h>
int number(int n)
{  if(n>=1)
{
    if(n%2=0)
    {    number(n-2);
        printf("%d",n);
       
    }
}
    
}
int main()
{
    int n;
    printf("enter the number=");
    scanf("%d",&n);
    number(n);
}