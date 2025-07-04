#include<stdio.h>
#include<string.h>
int main()
{  
    int count=0;
    char arr[100];
    printf("enter the string=");
    fgets(arr,100,stdin);
    char x;
    printf("enter the serch occurrence character in string=");
    scanf("%c",&x);
    for(int i=0;arr[i]!='\0';i++)
    {
        if(arr[i]==x)
        {
            count++;
            
        }
    }
    printf("count=%d",count);
    
}