#include <stdio.h>

int main(){
    int a;
    printf("Enter a year ");
    scanf("%d",&a);
    if(a%4 == 0){
        printf("leap year");
    }
    else{
        printf("not leap year");
    }
    return 0;
}