#include<stdio.h>
int number(int n)
{  if(n>=1)
{
    if(n%2!=0)
    {   
        printf("%d",n);
         number(n-2);
       
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