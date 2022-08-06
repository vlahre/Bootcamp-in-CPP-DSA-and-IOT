#include <stdio.h>
void printOddNaturalNumInReverse(int);

int main(){
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    n = n * 2;
    printOddNaturalNumInReverse(n);
    return 0;
}

void printOddNaturalNumInReverse(int n){
    if(n == 0){
        return;
    }
    if(n % 2 == 1)
        printf("%d ",n);

    printOddNaturalNumInReverse(n - 1);
}