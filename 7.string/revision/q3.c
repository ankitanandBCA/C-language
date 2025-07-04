#include<stdio.h>
int main()
{
    int length=0;
    char name[30];
    printf("enter the name : ");
    gets(name);
   char c;
 
   for(int i=0;i<name[i];i++)
   {
       c=name[i];
       if(c=='a'|c=='e'|c=='i'|c=='o'|c=='u')
       {
        length++;
       }
   }

   printf("vowel total word : %d",length);
}