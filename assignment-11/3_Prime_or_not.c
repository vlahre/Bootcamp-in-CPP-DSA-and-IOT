#include <stdio.h>
int primeOrNot(int);

int main() {

    int n,c;
    printf("Enter a number ");
    scanf("%d", &n);
    c = primeOrNot(n);  
  
    if (c == 0)
        printf("%d is a prime number", n);
    else
        printf("%d is not a prime number", n);

    return 0;
}

int primeOrNot(int n){
    int flag = 0;
    if (n == 0 || n == 1)
        flag = 1;

    for (int i = 2; i <= n / 2; ++i) {   
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }
    return flag;
}