#include <stdio.h>

int main(){
    int a;
    printf("Enter a number ");
    scanf("%d",&a);
    if(a > 0){
        printf("positive number");
    }
    else{
        printf("non positive number");
    }
    return 0;
}