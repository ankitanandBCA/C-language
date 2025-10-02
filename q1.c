/*

* * * * *   ->
* * * * *   ->
* * * * *   ->    ROW   == 5
* * * * *   ->
* * * * *   ->

| | | | |

Coloum == 5

*/


#include<stdio.h>
void print1()
{

for (int i = 0; i < 5; i++)
{
    for (int j = 0; j <5; j++)
    {
        printf("* ");
    
    }
    printf("\n");
}


}

int main()
{
    print1();
   return 0;
}