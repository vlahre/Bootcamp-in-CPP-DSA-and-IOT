#include <stdio.h>

int main(){
    int a,b,c = 0;
    printf("Enter a number ");
    scanf("%d",&a);
    b = a;
    while (a != 0)
    {
        c++;
        a = a / 10;
    }
    if(c == 3){
        printf("%d is three-digit number",b);
    }
    else{
        printf("%d is not three-digit number",b);
    }
    return 0;    
}