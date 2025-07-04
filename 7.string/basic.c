#include<stdio.h>
#include<string.h>
int main()
{    
    //****************   W R I T E   W A Y    T O     C H A R A C T E R **************** */
    
   /*

       (1)

       #include <stdio.h>

int main() {
    char str[10];
    int i;

    printf("Input:\n");
    for (i = 0; i < 10; i++) {
        // Read a single character
        scanf(" %c", &str[i]); // Adding a space before %c to skip any whitespace characters
    }

    printf("\nDisplay:\n");
    for (i = 0; i < 10; i++) {
        // Print a single character
        printf("%c", str[i]);
    }

    printf("\n");
    return 0;
}


(2)
         char str[]={'a','n','k','i','t','\0'};
         puts(str);

         int i=0;
         while (str[i]!='\0')
         {
            printf("%c",str[i]);
            i++;
         }
         */
       
    /* 


// ************************** W R O N G   M E T H O D   O F  C H A R A C T E R  **********************


    (1) wrong mwthod of charcter
    char str[]={'a','n','k','i','t'};
         puts(str);
ankitÇ

       (2)  wrong method
     char str[]={'a','n','k','i','t','\0'};
     int i=0;
     while(str[i]!='\0')
     {
        puts(str);
        i++;

        
           ankit
           ankit
           ankit
           ankit
           ankit
        
        
     }
      */



//********************* R I G H T    M E T H O D     O F       S T R I N G  ************************** */



      /*
    
         (1)  string main hume pahale size define karna hota hai jisa bus ek hi upah hai without using DMA 
    
    char str[102];
      printf("enter the name=");
      gets(str);
      printf("\ndisplay name=");
      puts(str);
      


       (2)  esse bhi hum input le kar output de sakte hai par ye sirf college main kaam dega indusrty main nahi 
       industry main 1st methd kaam dega
      
      
       char str1[]="hello ankit";
       puts(str1);
      
      */

//****************************************************************************************************************** */

    
    /*

    //                   W R O N G                  M E T H O D                O F                      S T R I N G
    
   (1) **** array main jisse length input lete the osse hu string m nhi le sakte hai ********

    int n;
      printf("enter the size of string=");
      scanf("%d",&n);
      char str[n];
      printf("enter the name=");
      gets(str);
      printf("\ndisplay name=");
      puts(str);  

   (2) **** ess tarah se bhi hum input aur output nhi kr skte hai string main... kuki esme size difine nhi hai  ******
     char str[];
      printf("enter the name=");
      gets(str);
      printf("\ndisplay name=");
      puts(str);

    (3)  *********  jisse array main input lete the aur output dete he osse string m nahi hota h...? *******

       int n;
    printf("enter the length of string=");
scanf("%d",&n);
    char str[n];
    printf("enter the name =");
     for(int i=0;i<n;i++)
     {
        scanf("%s",str[i]);

     }
     printf("display name=");
     for(int i=0;i<n;i++)
     {
        printf("\n%s",str[i]);
     }
    
    */ 
 

}