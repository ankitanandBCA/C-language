#include<stdio.h>
#include<string.h>
int main()
{
    FILE *fp;
    fp=fopen("string.txt","w");
    if(fp==NULL)
    {
        printf("file not exits...");
    }
    char str[100];
    printf("enter the address....");
    fgets(str,100,stdin);
    fputs(str,fp);
    fclose(fp);
}