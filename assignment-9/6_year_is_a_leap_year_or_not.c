#include<stdio.h>
int main()
{
   int year, r;

   printf("Enter Year ");
   scanf("%d",&year);

   r = ((year%4==0)&&((year%400==0)||(year%100!=0)));

    switch(r)
    {

        case 1:
            printf("Leap Year");
            break;

        case 0:
            printf("Not Leap Year");
            break;
    }

   return 0;
}