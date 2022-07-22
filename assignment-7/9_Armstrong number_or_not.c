#include <stdio.h>

int main() {
    int num, num1, rem, result = 0;
    printf("Enter a number ");
    scanf("%d", &num);
    num1 = num;

    while (num1 != 0) {      
        rem = num1 % 10;        
        result += rem * rem * rem;      
        num1 /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number", num);
    else
        printf("%d is not an Armstrong number", num);

    return 0;
}
