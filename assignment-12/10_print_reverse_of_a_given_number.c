#include <stdio.h>
void reverse(int);

int main(){
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    reverse(n);
    return 0;
}

void reverse(int n){
    if(n == 0)
        return;

    printf("%d",n%10);
    reverse(n/10);    
}