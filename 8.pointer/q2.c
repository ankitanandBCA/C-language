#include<stdio.h>
int short(int *arr,int n)
{  int temp=0;
     for(int i=0;i<n;i++)
     {
        for(int j=i+1;j<n;j++)
        {
               temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
        }
     }
     for(int i=0;i<n;i++)
     {
        printf("%d",arr[i]);
     }
}
int main()
{
    int n;
    printf("enter the size of array=");
    scanf("%d",&n);
    int arr[n];
    printf("enter the input element in array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
         short(arr,n);
   
}