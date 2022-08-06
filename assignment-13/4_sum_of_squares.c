#include <stdio.h>
int sumOfSquares(int);

int main()
{
	int n;
    printf("Enter a number ");
    scanf("%d",&n);
	printf("%d", sumOfSquares(n));
	return 0;
}

int sumOfSquares(int n)
{
    if(n == 0)
        return 0;
	return n * n + sumOfSquares(n - 1);
}