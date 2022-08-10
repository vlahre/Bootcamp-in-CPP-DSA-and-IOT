#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
    char str1[100], str2[100];
    int  i;       
    printf("Enter string ");
    fgets(str1, 100, stdin);   
    
    i=0;
    while(str1[i]!='\0')
    {
        str2[i] = str1[i];
        i++;
    }    
    str2[i] = '\0';    
    printf("%s", str2);
    return 0;
}
