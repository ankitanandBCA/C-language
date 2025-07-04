/*
   In this project based on Student Management System 
   Usin the File Handling and Structure 
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void create();
void display();
void search();
void delete();
struct Empoly
{
    int Id;
    char name[20];
    int salary;
    float leave;
};
  //struct Empoly e;
void create()
{
  int num;
  struct Empoly *e;
    FILE *fp;
    fp=fopen("EmpData.txt","ab+");
    if(fp==NULL)
    {
        printf("file not exits....");
        return;
    }
    printf("How many data Insert Into File : ");
    scanf("%d",&num);
    e=(struct Empoly *)malloc(num*sizeof(struct Empoly));
    if(e=NULL)
    {
        printf("Memory Not Exits in Heep......");
        exit(1);
    }
    printf("\n\n******************* INPUT DETAILS********************\n\n");
    for(int i=0;i<num;i++)
    {
      printf("Enter Empoly Id : ");
      scanf("%d",&e[i].Id);
      getchar();
      printf("Enter Empoly Name : ");
      fgets(e[i].name,sizeof(e[i].name),stdin);
       e[i].name[strcspn(e[i].name, "\n")] = '\0';
      printf("Enter Empoly Salary : ");
      printf("%d",&e[i].salary);
      printf("Enter Empoly leave : ");
      scanf("%f",&e[i].leave);
    }  
     fwrite(e,sizeof(struct Empoly),num,fp);
     printf("\n\n Record Enter Successfully......");
     fclose(fp);
     free(e);
}
void display()
{
    struct Empoly e;
    FILE *fp;
    fp=fopen("EmpData.txt","rb");
    if(fp==NULL)
    {
        printf("file Not Exits....");
        return;
    }

    while(fread(&e,sizeof(struct Empoly),1,fp)==1)
    {
      printf("\n-------------------------------------------\n");
      printf("|\t\t Empoly Id : %d         |",e.Id);
      printf("|\t\t Empoly Name : %s       |",e.name);
      printf("|\t\t Empoly Salary : %d     |",e.salary);
      printf("|\t\t Empoly leave : %f      |",e.leave);
      printf("\n-------------------------------------------\n\n");
    }

    fclose(fp);
} 

void search()
{
  struct Empoly e;
  int id,flag=0;
  FILE *fp;
  fp=fopen("EmpData.txt","rb");
  if(fp==NULL)
  {
    printf("file not exits.....");
    return;
  }

  printf("enter Empoly Id to You Want To Search :");
  scanf("%d",&id);

  while (fread(&e,sizeof(struct Empoly),1,fp)>0)
  {
      printf("\n-------------------------------------------\n");
      printf("|\t\t Empoly Id : %d         |",e.Id);
      printf("|\t\t Empoly Name : %s       |",e.name);
      printf("|\t\t Empoly Salary : %d     |",e.salary);
      printf("|\t\t Empoly leave : %f      |",e.leave);
      printf("\n-------------------------------------------\n\n");

      flag=1;
  }
  if(flag==0)
  {
    printf("Empoly record not found...");
  }
  
}

void delete()
{
  struct Empoly e;
    FILE *fp,*ft;
    fp=fopen("EmpData.txt","rb");
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

    char name[40];
      int flag=0;


    printf("enter Empoly name which you want to delete : ");
    scanf("%s",name);

   while (fread(&e,sizeof(e),1,fp)==1)
   {
       if(strcmp(name,e.name)!=0)
       {
        printf("Record delete.....");
        fwrite(&e,sizeof(e),1,ft);
       }
       else{
        flag=1;
       }
   }
   if(flag==0)
   {
    printf("record not found....");
    remove("temp.txt");
   }
    else{
            printf("record delete successfully....\n");
            remove("EmpData.txt");
            rename("temp.txt","EmpData.txt");
        }
   
   

}
int main()
{
  int ch;
  do
  {
   printf("***********************************************************");
   printf("\n\t\t\t 1. Create Student Data");
   printf("\n\t\t\t 2. Display Student Data");
   printf("\n\t\t\t 3. Search Student Data");
   printf("\n\t\t\t 4. Delete Student Data");
   printf("\n***********************************************************");
   printf("\n\n");
   
   printf("enter your choice : ");
   scanf("%d",&ch);
   
      switch (ch)
      {
      case 1:
           create();
        break;
      case 2:
           display();
           break;
      case 3:
          search();
          break;
      case 4:
           delete();
           break;    

      default:
      printf("... Plz Enter Valid Input......");
        break;
      }
   } while (ch!=0);
   
}
