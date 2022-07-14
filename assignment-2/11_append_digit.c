#include <stdio.h>

int main(){
    int num,digit;
    printf("Enter a number ");
    scanf("%d",&num);
    printf("Enter a digit ");
    scanf("%d",&digit);
    num = num * 10;
    num = num + digit;
    printf("%d",num);
    return 0;
}