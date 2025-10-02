/*

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5


*/

#include<stdio.h>
void print3()
{
    for (int i=1;i<=5;i++)
    {
        for (int j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}
int main()
{
    print3();
    return 0;
}   
