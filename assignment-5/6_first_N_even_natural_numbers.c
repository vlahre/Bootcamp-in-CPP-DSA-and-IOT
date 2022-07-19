#include <stdio.h>

int main(){
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    n*=2;
    for(int i = 2; i <= n; i++){
        if(i%2 == 0){
            printf("%d ",i);
        }
    }
    return 0;
}