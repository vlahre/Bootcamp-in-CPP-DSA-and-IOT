#include <stdio.h>
int sumOfDigits(int);

int main(){
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    printf("%d",sumOfDigits(n));
    return 0;
}


int sumOfDigits(int num){   
    if(num == 0)
        return 0;
        
    return ((num % 10) + sumOfDigits(num / 10));
}