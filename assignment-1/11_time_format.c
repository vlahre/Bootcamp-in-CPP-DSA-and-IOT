#include <stdio.h>
#include <string.h>

int main(){
    
    char str[8];
    printf("Enter time ");
    scanf("%s",str);

    char *hour = strtok(str, ":");
    char *minute = strtok(NULL, ":");

    printf("%s:%s converted to %s Hour and %s Minute",hour,minute,hour,minute); 
    return 0;
}