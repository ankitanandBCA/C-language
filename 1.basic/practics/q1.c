#include<stdio.h>
void input();
void diaplay();
struct student {
    int roll;
    char name[100];
};
void input()
{
    struct student s;
    FILE *fp;
    fp=fopen("ankit.txt","ab+");
    if(fp==NULL)
    {
        printf("not open file and not exits...");
        return;
    }

    printf("enter the roll ");
    scanf("%d",&s.roll);
    fflush(stdin);
    printf("enter name=");
    scanf("%d",s.name);

    fwrite(&s,sizeof(s),1,fp);
    printf("record enter successfully....");
    fclose(fp);
}
void display()
{
    struct student s;
    FILE *fp;
    fp=fopen("ankit.txt","rb");
    if(fp==NULL)
    {
        printf("not exits");
        return;
    }

    while (fread(&s,sizeof(s),1,fp)==1)
    {
       printf("roll=%d",s.roll);
       printf("\nname=%s",s.name);
    }
    fclose(fp);
}

int main()
{
     int ch;
     printf("enter the choice=");
     scanf("%d",&ch);
     switch (ch)
     {
     case 1: 
          input();
        break;
       case 2:
          display();
          break; 
     
     default:
        break;
     }
}