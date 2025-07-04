#include<stdio.h>
int main()
{
  

    int n;
    printf("size of array:");
    scanf("%d",&n);
    int arr[n];
     printf("input emement of array \n");
     for(int i=0;i<n;i++)
     {
        scanf("%d",&arr[i]);
     }

     printf("reverse order\n");
     for(int i=n;i>=0;i--)
     {
        printf("%d",arr[i]);
     }
}     