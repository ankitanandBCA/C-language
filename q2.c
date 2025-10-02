/*

*
* *
* * *
* * * *
* * * * *


*/

#include<stdio.h>
void print2()
{
    for (int i=1;i<=5;i++)
    {
        for (int j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
int main()
{
    print2();
    return 0;
}
    