#include<stdio.h>
#include<string.h>
void reverse(char *str1)
{
    int len=strlen(str1);
    printf("length of string=%d\n",len);
    for(int i=0;i<len-1;i++)
    {
        for(int j=i;j<len-1;j++)
        {
            char temp;
            temp=str1[i];
            str1[i]=str1[j];
            str1[j]=temp;
        }
    }
    printf("reverse the string=%s",str1);
}
int main()
{
    char str[100];
    printf("enter string=");
    fgets(str,100,stdin);
    reverse(str);
}