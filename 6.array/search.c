#include<stdio.h>
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
    
    int s;
    int temp=0;
    printf("enter the search elemet=");
    scanf("%d",&s);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==s)
        temp=arr[i];
        
    }
    printf("element is exist=%d",temp);
}