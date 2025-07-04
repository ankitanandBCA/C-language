#include<stdio.h>
int main()
{
    int arr[10]={9,5,7,8,6,2,4,3,1,10};
    printf("short element \n");
    for(int i=0;i<10;i++)
    {
        for(int j=i;j<10;j++)
        {
             if(arr[i]>arr[j])
             {
                int temp;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
             }
        }
    }

    for(int i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
}