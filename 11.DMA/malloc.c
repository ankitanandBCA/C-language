#include<stdio.h>
#include<stdlib.h>
void main()
{
    int num,*p;
    printf("enter the number how many time : ");
    scanf("%d",&num);
    p=(int *)malloc(num*sizeof(int));
    if(p==NULL)
    {
        printf("memory is not aaliable");
        exit(1);
    }
    for(int i=0;i<num;i++)
    {
        printf("enter the number : ");
        scanf("%d",p+i);
    }
    printf("\n Display \n");
    for(int i=0;i<num;i++)
    {
        printf("%d",*(p+i));
    }
}