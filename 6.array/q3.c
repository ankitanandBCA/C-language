#include<stdio.h>
int main()
{
   int sumeven=0,sumodd=0;

    int n;
    printf("size of array:");
    scanf("%d",&n);
    int arr[n];
     printf("input emement of array \n");
     for(int i=0;i<n;i++)
     {
        scanf("%d",&arr[i]);
     }
     printf("display : \n");
     for(int i=0;i<n;i++)
     {
        if(arr[i]%2==0)
        {
             sumeven += arr[i];
        }
        else
        {
            sumodd +=arr[i];
        }
     }
   printf("sum even : %d",sumeven);
    printf("\nsum odd : %d",sumodd);
}