#include<stdio.h>
#include<string.h>
void campare(char *a,char *b)
{
    int len1=strlen(a);
    printf("length of first string=%d\n",len1);
    int len2=strlen(b);
    printf("length of second string=%d\n",len2);

     int result=strcmp(a,b);
     if(result<0)
     {
        printf("is grater=%s",a);
     }
     else
     {
        printf("is grater=%s",b);
     }
}
int main()
{
    char str1[100],str2[100];
    printf("enter 1 string=");
    fgets(str1,100,stdin);
     printf("enter 2 string=");
    fgets(str2,100,stdin);
    campare(str1,str2);
}