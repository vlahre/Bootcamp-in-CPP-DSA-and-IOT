#include <stdio.h>
int main()
{
    
    char str[100],i;
    printf("Enter a string ");
    fgets(str,100,stdin);

    
    for(i=0; str[i]!='\0'; ++i);

    printf("Length of string: %d",i);
    
    return 0;
}