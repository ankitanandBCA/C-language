#include<stdio.h>
int number(int n)
{  
     if(n>=1)
       {
           number(n-1);
          printf("%d",n);
         

       }
}
int main()
{
    int n;
    printf("enter the number=");
    scanf("%d",&n);
    number(n);
}