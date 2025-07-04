#include<stdio.h>
int area(int r)
{
    float area=3.14*r*r;
    printf("area=%f",area);
}
int main()
{
    int r;
    printf("enter the radius=");
    scanf("%d",&r);
     area(r);
}