#include <math.h>
#include <stdio.h>
int gcd(int, int);

int main()
{
	int a, b;
    printf("Enter two numbers ");
    scanf("%d %d",&a,&b);
	printf("GCD of %d and %d is %d ", a, b, gcd(a, b));
	return 0;
}


int gcd(int a, int b)
{
	int result = fmin(a, b); 
	while (result > 0) {
		if (a % result == 0 && b % result == 0) {
			break;
		}
		result--;
	}
	return result; 
}
