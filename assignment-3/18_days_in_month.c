#include <stdio.h>

int main(){
    int m;
    printf("Enter month ");
    scanf("%d",&m); 

    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
        printf("31 Days");
    }  
    else if (m == 4 || m == 6 || m == 9 || m == 11) {
        printf("30 Days");
    }   
    else if (m == 2) {
        printf("28/29 Days");
    }   
    else {
        printf("Invalid Month");
    }
    return 0;
}