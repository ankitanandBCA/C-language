#include<stdio.h>
#include<string.h>
int main()
{
    FILE *fp;
    fp=fopen("charRead.txt","r+");
    if(fp==NULL)
    {
        printf("file not exuts...");
    }

    char str;
    for(int i=0;i<100;i++)
    {
        str=getc(fp);
        if(str==EOF)
        {
           break;
        }
        else
        {
            printf("%c",str);
        }
    }
}