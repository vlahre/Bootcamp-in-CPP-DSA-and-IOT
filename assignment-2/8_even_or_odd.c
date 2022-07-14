#include <stdio.h>

int main(){
    int a;
    printf("Enter a number ");
    scanf("%d",&a);
    if(a & 1){
       printf("odd number");
    }
    else{
       printf("even number");
    }
    return 0;
}