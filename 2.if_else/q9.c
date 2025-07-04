#include<stdio.h>
int main()
{
    int n,n1,n2;
    printf("enter the number=");
    scanf("%d",&n);
     printf("enter the number=");
    scanf("%d",&n1);
     printf("enter the number=");
    scanf("%d",&n2);

    if(n>n1&&n>n2)
    {
        printf("n is grater",n);
    }
    else if(n1>n&&n1>n2)
    {
        printf("n1 is grater",n1);
    }
    else
    {
        printf("n2 is grater",n2);
    }
}