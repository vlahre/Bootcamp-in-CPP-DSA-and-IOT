#include <stdio.h>

int main(){
    int a;
    printf("Enter a number ");
    scanf("%d",&a);
    if(a%3 == 0 && a%2 == 0){
        printf("divisible");
    }
    else{
        printf("not divisible");
    }
    return 0;
}