#include<stdio.h>
#include<string.h>
int main()
{
    int count=0;
    char arr[100];
    printf("enter the string=");
    fgets(arr,100,stdin);

    for(int i=0;arr[i]!='\0';i++)
    {
        char c=arr[i];
        if(c=='a'||c=='e'|c=='o'|c=='i'||c=='u')
        {
            count++;
        }
    }
    printf("total vowel=%d",count);
}