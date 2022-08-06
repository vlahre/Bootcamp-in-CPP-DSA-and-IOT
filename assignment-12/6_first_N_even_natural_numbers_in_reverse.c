#include <stdio.h>
void printEvenNaturalNumInReverse(int n);

int main(){
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    n = n * 2;
    printEvenNaturalNumInReverse(n);
    return 0;
}

void printEvenNaturalNumInReverse(int n){
    if(n == 0)
        return;
    
    if(n % 2 == 0)
        printf("%d ",n);

    printEvenNaturalNumInReverse(n - 1);        
}