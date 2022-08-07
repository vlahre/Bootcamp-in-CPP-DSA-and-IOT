#include <stdio.h>

int main(){
    int a[10], even = 0, odd = 0;
    printf("Enter 10 numbers ");
    for(int i = 0; i < 10; i++){
        scanf("%d",&a[i]);
    }
    for(int i = 0; i < 10; i++){
        if(a[i] % 2 == 0)
            even += a[i];
        else
            odd += a[i];    
    }
    printf("sum of even number is %d",even);
    printf("\nsum of odd number is %d",odd);
    return 0;
}