#include <stdio.h>
int searchDigit(int,int);

int main(){
    int a,b;
    printf("Enter a number ");
    scanf("%d",&a);
    printf("\nEnter digit ");
    scanf("%d",&b);
    int r = searchDigit(a,b);
    printf("%d",r);
    return 0;
}

int searchDigit(int x, int y){
    int a;
    while (x)
    {
        a = x % 10;
        if(a == y)
            return 1;
        x = x / 10;    
    }
    return 0;
    
}