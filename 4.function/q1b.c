#include<stdio.h>
int area()
{
    int r=10;
    float area=3.14*r*r;
    return area;
}
int main()
{
       float s =area();
       printf("area of circle=%f",s);
}