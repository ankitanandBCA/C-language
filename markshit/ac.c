#include<stdio.h>
#include<stdlib.h>
char name[30],fa_name[30],mo_name[30],s_name[30],dob[20];
int roll_no,class,h,e,m,s,so;
void genrate_markshit()
{
    int gread_total;
    float percentage;
    gread_total=h+e+m+s+so;
    percentage+gread_total/5;
    printf("\n\n----------------------------------------------------------------------------------\n");
    printf("|                          BIHAR BOARD 10TH MARKSHIT                             |\n");
    printf("---------------------------------------------------------------------------------\n");
    printf("|your name: %s\t\tclass:%d\t\troll number:%d\t", name,class,roll_no);
    printf("\n|father name: %s\n",fa_name);
    printf("|mother name: %s\n",mo_name);
    printf("|school name: %s\n",s_name);
    printf("|date of birth name: %s\n",dob);
    printf("---------------------------------------------------------------------------------\n");
    printf("|\tSUBJECT        \tMAX MARKS\tMIN MARKS\tTHEORY MARKS\n");
    printf("---------------------------------------------------------------------------------\n");
    printf("|HINDI            \t 100     \t 33      \t     %d\n",h);
    printf("|ENGLISH          \t 100     \t 33      \t     %d\n",e);
    printf("|MATH             \t 100     \t 33      \t     %d\n",m);
    printf("|SCIENCE          \t 100     \t 33      \t     %d\n",s);
    printf("|SOCIAL SCIENCE   \t 100     \t 33      \t     %d\n",so);
    printf("---------------------------------------------------------------------------------\n");
    printf("|\t               \t 600    |  GRAND TOTAL\t      %d\n",gread_total);
    printf("---------------------------------------------------------------------------------\n");
     if(percentage>=81 && percentage<=100)
     {
        printf("|RESULT  :  PASS IN FIRST DIVISION\n");
        printf("|GREAD   :  A++\n");
     }
      if(percentage>=70 && percentage<=80)
     {
        printf("|RESULT  :  PASS IN FIRST DIVISION\n");
        printf("|GREAD   :  A+\n");
     }
      if(percentage>=60 && percentage<=70)
     {
        printf("|RESULT  :  PASS IN FIRST DIVISION\n");
        printf("|GREAD   :  A\n");
     }
     else if(percentage>=41 && percentage<=59)
     {
        printf("|RESULT  :  PASS IN SECOND DIVISION\n");
        printf("|GREAD   :  B\n");
     }
     else if(percentage>=31 && percentage<=40)
     {
        printf("|RESULT  :  PASS IN THIRD DIVISION\n");
        printf("|GREAD   :  C\n");
     }
    printf("---------------------------------------------------------------------------------\n");
} 

void take_user_info()
{
    char yesno;
    printf("enter the name: ");
   scanf("%s",&name);
     printf("enter father name: ");
     scanf("%s",&fa_name);
     printf("enter mother name: ");
    scanf("%s",&mo_name);
     printf("enter school name: ");
    scanf("%d",&s_name);
     printf("enter dob name: ");
     scanf("%s",&dob);
    
    printf("enter class ");
    scanf("%d",&class);
    printf("enter roll number : ");
    scanf("%d",&roll_no);
    printf("enter the subject mark :- \n");

    printf("Hindi marks : ");
    scanf("%d",&h);
    printf("english marks : ");
    scanf("%d",&e);
    printf("math marks : ");
    scanf("%d",&m);
    printf("science marks : ");
    scanf("%d",&s);
    printf("social science marks : ");
    scanf("%d",&so);

    printf("\n IF you want to genrate the marksheet then press 'y' otherwise 'N': ");
    fflush(stdin);
    scanf("%c",&yesno);
    if(yesno=='y' || yesno=='Y')
    {
        genrate_markshit();
    }
    else
    {
        exit(0);
    }

    }

    void main()
    {    char yesno;
        printf("-------------------------WELLCOME TO GENRATE MARKSHIT---------------------\n");
        printf(" \nif you can genrate the marksheet\n ");
        printf("\nthen you can provied some infomarmation\n ");
        printf("\nif you want to provied information 'y' oherwise 'N' \n");
        scanf("%c",&yesno);
        if(yesno=='y' || yesno=='Y')
        {
            take_user_info();

        }
        else
        {
            exit(0);
        }

    }