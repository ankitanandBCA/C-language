#include<stdio.h>
int swap(int *a, int *b)
{   
    if(*a>0 && *b>0)
    {
        int temp=0;
        temp=*a;
        *a=*b;
        *b=temp;
    }
    printf("%d",*a);
    printf("\n%d",*b);
}
int main()
{
  int a=10;
  int b=20;
  swap(&a,&b);
}