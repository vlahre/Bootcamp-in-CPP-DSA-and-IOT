#include <stdio.h>
void printEvenNumber(int);

int main(){
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    n = n * 2;
    printEvenNumber(n);
    return 0;
}

void printEvenNumber(int n){
    if(n == 0)
        return;

    printEvenNumber(n - 1);
    
    if(n % 2 == 0)
        printf("%d ",n);    
}