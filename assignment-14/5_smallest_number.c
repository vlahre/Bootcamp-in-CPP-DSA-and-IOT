#include <stdio.h>

int main(){
    int a[10], b = 0;
    printf("Enter 10 numbers ");
    for(int i = 0; i < 10; i++){
        scanf("%d",&a[i]);
        
    }
    b = a[0];
    for(int i = 1; i < 10; i++){
        if(b > a[i])
            b = a[i];
    }
    printf("%d",b);
    return 0;
}