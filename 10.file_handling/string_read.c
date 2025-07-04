#include<stdio.h>
#include<string.h>
int main()
{
    FILE *fp;
    fp=fopen("string.txt","r");
    if(fp==NULL)
    {
        printf("file not exits");
    }
    char str[100];

    while (fgets(str,100,fp)!=NULL)
    {
        printf("%s",str);
    }
    

}