#include<stdio.h>
int main()
{
    int length=0;
    char name[30];
    printf("enter the name : ");
    gets(name);
   char c;
   printf("occurance : ");
   scanf("%c",&c);
   for(int i=0;i<name[i];i++)
   {
    if(name[i]==c)
    {
        length++;
    }
   }

   printf("occurence word : %d",length);
}