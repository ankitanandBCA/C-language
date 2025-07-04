#include<stdio.h>
int main()
{
    int c_price;
    int s_price;
    printf("enter the cost price=");
    scanf("%d",&c_price);
    printf("enter the selling price=");
    scanf("%d",&s_price);
   
    if (c_price>s_price)
    {
        printf("loss");
    }
    else{
        printf("margin");
    }
    
}