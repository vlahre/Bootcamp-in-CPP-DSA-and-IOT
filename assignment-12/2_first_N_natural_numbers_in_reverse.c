#include <stdio.h>
void printNaturalNumInReverse(int);

int main(){
    int n; 
    printf("Enter a number ");
    scanf("%d",&n);
    printNaturalNumInReverse(n);
    return 0;
}

void printNaturalNumInReverse(int n){
    if(n == 0){
        return;
    }
    printf("%d ",n);
    printNaturalNumInReverse(n - 1);
}