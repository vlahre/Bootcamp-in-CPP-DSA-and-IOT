#include <stdio.h>  
#include <string.h>  

int main()  
{  
    char str[40];  
    printf ("Enter a string ");  
    fgets(str,100,stdin);  
      
    
    printf ("%s ", strrev(str));  
    return 0;  
} 