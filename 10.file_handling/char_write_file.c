#include<stdio.h>
#include<string.h>
int main()
{
    FILE *fp;
    fp=fopen("charRead.txt","w+");
    if(fp==NULL)
    {
        printf("file not exits..");
    }

    char str[100]={"hello ankit how are u.."};
    for(int i=0;i<100;i++)
    {
        putc(str[i],fp);
    }
    fclose(fp);
}