#include <stdio.h>
void naturalNumbers(int);

int main(){
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    naturalNumbers(n);
    return 0;
}

void naturalNumbers(int n){
    
    for(int i = 1; i <= n; i++){
        printf("%d ",i);
    }
}

