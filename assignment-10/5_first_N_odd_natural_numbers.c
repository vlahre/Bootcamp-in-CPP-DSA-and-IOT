#include <stdio.h>
void oddNaturalNumbers(int);

int main(){

    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    oddNaturalNumbers(n);
    return 0;
}

void oddNaturalNumbers(int n){
      
    for(int i = 1; i <= n*2; i++){
        if(i % 2 == 1){
            printf("%d ",i);
        }
    } 
}