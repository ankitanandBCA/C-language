#include<stdio.h>
int SI(int p, int r, int t)
{
      float si=(p*r*t)/100;
      return si;
}
int main()
{
    int p,r,t;
    printf("principle value=");
    scanf("%d",&p);
    printf("rate=");
    scanf("%d",&r);
    printf("time=");
    scanf("%d",&t);

    float s= SI(p,r,t);
    printf("simplle intrest=%f",s);
    int total_value=s+p;
    printf("\ntotal value=%d",total_value);


}