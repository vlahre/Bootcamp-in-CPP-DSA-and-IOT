#include <stdio.h> 
int countDigits(int); 
 
void main() 
{ 
    int a; 
    printf("Enter number "); 
    scanf("%d",&a); 
    printf("%d", countDigits(a)); 
}

int countDigits(int n) 
{ 
    if(n == 0)
        return 0; 
    return 1 + countDigits(n/10); 
} 