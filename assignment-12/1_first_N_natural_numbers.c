#include <stdio.h>
void printNaturalNum(int);

int main(){
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    printNaturalNum(n);
    return 0;
}

void printNaturalNum(int n){
    if(n == 0){
        return;
    }
    printNaturalNum(n - 1);
    printf("%d ",n);

}