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
     printf("display : \n");
     int g=arr[0];
     for(int i=0;i<n;i++)
     {
        if(arr[i]>g)
        { 
             g=arr[i];
            
        }
       
     }

      printf("big element : %d",g);
          
}  
   