#include<stdio.h>
#include<stdlib.h>
void input();
void display();
void search();
struct student
{
    int id;
    char name[20];
    int roll;
};

void input()
{
    int num;
    struct student *s;
    FILE *fp;
      fp=fopen("Data.txt","ab+");
    if(fp==NULL)
    {
        printf("file not exits....");
        
    }
    printf("how many student data enter : ");
    scanf("%d",&num);
    s=(struct student *)malloc(num*sizeof(struct student));
    if(s==NULL)
    {
        printf("memory is not avaliable");
        exit(1);
    }
    printf("\n\n*****************input details**********************\n\n");
    for(int i=0;i<num;i++)
    {
        printf("enter the student id :");
        scanf("%d",&s[i].id);
        fflush(stdin);
        printf("enter the student name : ");
        gets(s[i].name);
        printf("enter the student roll number : ");
        scanf("%d",&s[i].roll);
        printf("\n");
    }
    fwrite(s,sizeof(struct student),num,fp);
    printf("recors enter successfully.....");
    fclose(fp);
    free(s);
}

void display()
{
    struct student s;
    FILE *fp;

    fp=fopen("Data.txt","rb");
    if(fp==NULL)
    {
        printf("file not exits....");
    }
    printf("\n\n***************** Displaying Student Records **********************\n\n");  
    while (fread(&s,sizeof(struct student),1,fp)==1)
    {
        printf("Student id=%d",s.id);
        printf("\nStudent name=%s",s.name);
        printf("\nStudent Roll=%d",s.roll);
        printf("\n");
    }

    fclose(fp);
    
}

void search()
{
    int flag=0;
    int search_id;
    struct student s;
    FILE *fp;
    fp=fopen("Data.txt","rb");
    printf("search student by id : ");
    scanf("%d",&search_id);
    while(fread(&s,sizeof(s),1,fp)>0)
    {
        if(s.id==search_id)
        {
            printf("Student id=%d",s.id);
            printf("\nStudent name=%s",s.name);
            printf("\nStudent Roll=%d\n\n",s.roll);
            flag=1;
        }
        
    }
    if(flag==0)
    {
         printf("data not found....");
        printf("\nplz valid id input here...");
    }



    fclose(fp);
}
int main()
{

    printf("*******************  STUDENT MANAGEMENT S/W *******************\n\n");
    printf("\t\t\t 1. INPUT DETAILS ");
    printf("\n\t\t\t 2. DISPLAY DETAILS");
    printf("\n\t\t\t 2. SEARCH DETAILS");
    printf("\n***************************************************************\n\n");
  int n;
  printf("enter your choice : ");
  scanf("%d",&n);
  switch (n)
  {
  case 1: 
      input();
    break;
   case 2:
      display();
      break; 
   case 3:
        search();
        break;
  default:
  printf("envalid input...");
    break;
  }
 
  
}