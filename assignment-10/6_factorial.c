#include <stdio.h>
int factorial(int);

int main(){
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    int f = factorial(n);
    printf("%d",f);
    return 0;
}

int factorial(int n){
    int f = 1;
    for(int i = 1; i <= n; i++){
        f = f * i;
    }
    return f;
}