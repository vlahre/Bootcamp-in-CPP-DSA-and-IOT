#include <stdio.h>

int main(){
    char a;   
    printf("Enter a character ");
    scanf("%c",&a);
    if(a >= 97 && a <= 122){
        printf("lower case");
    }
    else if(a >= 65 && a <= 90){
        printf("upper case");
    }
    return 0;
}