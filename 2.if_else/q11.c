#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5;
    printf("enter the m1 marks=");
    scanf("%d",&m1);
     printf("enter the m1 marks=");
    scanf("%d",&m2);
     printf("enter the m1 marks=");
    scanf("%d",&m3);
     printf("enter the m1 marks=");
    scanf("%d",&m4);
     printf("enter the m1 marks=");
    scanf("%d",&m5);

    int total=m1+m2+m3+m4+m5;
    if(total>33)
    {
        printf("pass");
    }
    else
    {
        printf("fail");
    }
}