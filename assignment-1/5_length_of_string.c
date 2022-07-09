#include <stdio.h>

int main(){
    char str[500];
    int length;
    printf("Enter a string ");
    gets(str);    
    int l = printf("%s",str);
    printf(" %d",l);
    return 0;
}