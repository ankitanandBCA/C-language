#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    printf("enter the number of length of array : ");
    scanf("%d",&num);
    int *p;
    p=(int *)malloc(num*sizeof(int));
    if(p==NULL)
    {
        printf("exit");
    }
    printf("input\n\n");
    for(int i=0;i<num;i++)
    {
        printf("enter the element of array : ");
        scanf("%d",&p[i]);
    }
    printf("display\n\n");
    for(int i=0;i<num;i++)
    {
        printf("element of array %d: ", p[i]);
       
    }
}