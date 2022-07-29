#include <stdio.h>
int evenOrOdd(int);

int main(){
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    printf("%d",evenOrOdd(n));
    return 0;
}

int evenOrOdd(int n){
    if(n % 2 == 0)
        return 1;
    else
        return 0;    
}