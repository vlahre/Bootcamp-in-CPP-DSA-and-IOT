#include <stdio.h>
int square(int);

int main()
{
    int num;
    int n;     
    printf("Enter a number ");
    scanf("%d", &num);
    n = square(num);
    printf("%d",n); 
    return 0;
}

int square(int num)
{
    return (num * num);
}