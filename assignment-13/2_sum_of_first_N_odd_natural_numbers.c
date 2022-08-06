#include<stdio.h>
int SumOdd(int,int);

int main()
{
    int num1 = 1,num2;
    printf("Enter a number ");
    scanf("%d",&num2);
    printf("%d",SumOdd(num1,num2));
}

int SumOdd(int num1, int num2)
{
    if(num1>num2)
        return 0;
    return num1 + SumOdd(num1+2,num2);
}