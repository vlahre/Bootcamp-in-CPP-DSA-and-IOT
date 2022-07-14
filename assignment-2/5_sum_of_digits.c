#include <stdio.h>

int main(){
    int a,sum = 0;    
    printf("Enter a number ");
    scanf("%3d",&a);
    while(a != 0){
        sum = sum + a % 10;
        a = a / 10;
    }
    printf("%d",sum);
    return 0;
}