#include<stdio.h>
#include<string.h>
int main()
{
    char arr[100];
    printf("enter string=");
    fgets(arr,100,stdin);
    int length=strlen(arr);
    printf("length=%d",length);
    for(int i=0;i<length-1;i++)
    {
        //char x=arr[i];
        for(int j=i;j<length-1;j++)
        {
            char temp;
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }

    printf("\n\n reverse the string element=%s",arr);
   
}