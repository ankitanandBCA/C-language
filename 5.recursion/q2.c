#include<stdio.h>
int number(int n)
{  
     if(n>=1)
       {
           
          printf("%d",n);
          number(n-1);
         

       }
}
int main()
{
    int n;
    printf("enter the number=");
    scanf("%d",&n);
    number(n);
}