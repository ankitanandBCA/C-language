#include<stdio.h>
int squre(int n)
{   if(n>=1)
      {
              printf("%d  ",n*n);
    squre(n-1);
      }
 
}
int main()
{
    int n=5;
    squre(n);

}