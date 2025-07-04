#include<stdio.h>
int area(int r)
{
   float area=3.14*r*r;
   return area;
}
int main()
{
     int r;
     printf("enter the radius=");
     scanf("%d",&r);
     float s = area(r);
     printf("float area=%f",s);
}