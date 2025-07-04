#include<stdio.h>
int main()
{
    int a=10;
    float b=5.6;
    void *vp;
  //  vp=&a;
   // printf("a=%d",*(int *)vp);
  // vp=&b;
   //printf("b=%f",*(float *)vp);
   char c='a';
   vp=&c;
    printf("c=%c",*(char *)vp);

}