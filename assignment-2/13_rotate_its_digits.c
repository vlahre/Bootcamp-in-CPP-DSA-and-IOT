#include <stdio.h>

int main(){
    int n,f;
    printf("Enter a number ");
    scanf("%3d",&n);
    f = n % 10;
    n = n / 10;
    f = f * 100;
    printf("%d",f + n);
    return 0;
}