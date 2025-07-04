#include<stdio.h>
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int sum=0;
    float avg;
    printf("sum of array: ");
    for(int i=0;i<10;i++)
    {
        sum +=arr[i];
    }
    printf("%d",sum);
    avg=sum/10;
    printf("avg=%f",avg);
}