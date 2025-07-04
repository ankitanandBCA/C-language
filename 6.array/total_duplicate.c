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
  int count=0;
   printf("duplicate element\n");
    for(int i=0;i<n;i++)
    {
       for(int j=i+1;j<n;j++)
       {
          if(arr[i]==arr[j])
          {
            count++;
            break;
          }
       }
    }
   printf("%d",count);
}

/*
#include<stdio.h>

int main() {
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the input elements in array:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int sum = 0;
    printf("Display sum:\n");
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    
    printf("%d\n", sum);
    return 0;
}


*/