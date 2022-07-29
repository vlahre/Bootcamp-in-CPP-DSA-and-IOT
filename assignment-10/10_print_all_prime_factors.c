#include <stdio.h>
void primeFactors(int);

int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    primeFactors(n);
    return 0;
}

void primeFactors(int n)
{
    int c = 2;
    while (n > 1) {
	    if (n % c == 0) {
	        printf("%d ", c);
	        n /= c;
	    }
	    else
	        c++;
    }
}



