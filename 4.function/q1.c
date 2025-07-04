#include<stdio.h>
void area()
{
    int r;
    printf("enter the radius=");
    scanf("%d",&r);
    float area=3.14*r*r;
    printf("area=%f",area);
}
int main()
{
    area();

}