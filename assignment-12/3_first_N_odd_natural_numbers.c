#include <stdio.h>
void printOddNaturalNum(int);

int main(){
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    n = n * 2;
    printOddNaturalNum(n);
    return 0;
}

void printOddNaturalNum(int n){
    if(n == 0){
        return;
    }
    printOddNaturalNum(n - 1);
    
    if(n % 2 == 1)
        printf("%d ",n);    
}