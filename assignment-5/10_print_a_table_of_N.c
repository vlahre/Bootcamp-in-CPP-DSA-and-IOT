#include <stdio.h>

int main(){
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    for(int i = 1; i <= 12; i++){
        printf("%d\n",n*i);
    }
    return 0;
}