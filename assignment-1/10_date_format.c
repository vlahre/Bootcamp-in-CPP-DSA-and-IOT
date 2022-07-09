#include <stdio.h>
#include <string.h>

int main(){
    char str[15];
    printf("Enter date ");
    scanf("%s",str);    
 
    char *day = strtok(str, "/");
    char *month = strtok(NULL, "/");
    char *year = strtok(NULL, "/");
 
    printf("Day - %s, Month - %s, Year - %s", day,month,year);
    return 0;
}