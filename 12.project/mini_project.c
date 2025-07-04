#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void input_details();
void output_details();
void search_record();
void delete_record();
struct student
{
    int roll_no;
    char name[50];
    char email[50];
    float totalmarksper;
};

void input_details()
{  int num;
    FILE *fp;
     struct student *s;
    fp=fopen("student.txt","ab+");
    if(fp==NULL)
    {
       printf("file not exits");
    }
     printf("how many data input in file : ");
     scanf("%d",&num);
    s=(struct student *)malloc(num*sizeof(struct student));

    if(s==NULL)
    {
        printf("memory not exits....");
        exit(1);
    }

    for(int i=0;i<num;i++)
    {
   printf("enter student roll number : ");
   scanf("%d",&s[i].roll_no);
   fflush(stdin);
   printf("enter student name : ");
   gets(s[i].name);
   printf("enter student email : ");
   gets(s[i].email);
   printf("enter student total marks persentage : ");
   scanf("%f",&s[i].totalmarksper);
    }
   fwrite(s,sizeof(struct student),num,fp);
   printf("record enter successfully...");
   fclose(fp);
   free(s);
}
void output_details()
{
     struct student s;
    FILE *fp;
    fp=fopen("student.txt","rb");
    if(fp==NULL)
    {
        printf("file not exits...");
    }
    while (fread(&s, sizeof(s), 1, fp) == 1) {
        printf("**************************************\n\n");
        printf("Roll number: %d\n", s.roll_no);
        printf("Name: %s\n", s.name);
        printf("Email: %s\n", s.email);
        printf("Total marks percentage: %.2f\n", s.totalmarksper);
        printf("\n\n**************************************\n\n");
    }
    fclose(fp);
    
}

void search_record()
{
     struct student s;
    int flag=0;
    int roll;
    FILE *fp;
    fp=fopen("student.txt","rb");
    if(fp==NULL)
    {
        printf("file not exits...");
    }

    printf("enter the search roll number : ");
    scanf("%d",&roll);
    while (fread(&s,sizeof(s),1,fp)>0 && flag==0)
    {
        if(s.roll_no==roll)
        {
            flag=1;
             printf("Roll number: %d\n", s.roll_no);
             printf("Name: %s\n", s.name);
             printf("Email: %s\n", s.email);
             printf("Total marks percentage: %.2f\n", s.totalmarksper);

        }
    }
    if(flag==0)
    {
        printf("record not found...");
    }
    
}

void delete_record()
{
     struct student s;
    FILE *fp,*ft;
    fp=fopen("student.txt","rb");
    if(fp==NULL)
    {
        printf("file not exits...");
        return;
    }

    
    ft=fopen("temp.txt","wb");
    if (ft == NULL) {
        printf("Could not open temporary file.\n");
       // fclose(fp);
        return;
    }


    printf("previous store data....\n\n");
    output_details();

      char name[40];
      int flag=0;


    printf("enter student name which you want to delete : ");
    scanf("%s",name);

    while (fread(&s,sizeof(s),1,fp)==1)
    {
        if(strcmp(name,s.name)!=0)
        {
            printf("record delete...\n\n");
            fwrite(&s,sizeof(s),1,ft);
        }
        else{
            flag=1;
        }
    }
        fclose(fp);
        fclose(ft);
       
        if(flag==0)
        {
            printf("record not found...");
            remove("temp.txt");
        }
        else{
            printf("record delete successfully....\n");
            remove("student.txt");
            rename("temp.txt","student.txt");
        }
        printf("\n\nupdate successfully\n\n");
        output_details();

    }
   
   


int main()
{  int ch;

    do
    { 
   printf("*************************************\n");
   printf("\t\t 1. INPUT STUDENT DETAILS");
   printf("\n\t\t 2. DISPLAY STUDENT DETAILS");
   printf("\n\t\t 3. Search record");
   printf("\n\t\t 4. Delete Record ");
   printf("\n*************************************\n");
   // int ch;
    printf("\n\n enter your choice : ");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1: 
           input_details();
        break;
    
    case 2:
           output_details();
           break;
    case 3:
           search_record();
           break;
    case 4:
           delete_record();
           break;       

    default:
        break;
    }

    }while(ch!=0);
    
}