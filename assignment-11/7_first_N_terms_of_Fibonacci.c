#include<stdio.h>    
void fibonacci(int);

int main()    
{    
    int n;
    printf("Enter a number ");    
    scanf("%d",&n);  
    fibonacci(n);  
     
    return 0;  
}

void fibonacci(int n){
    int n1 = 0, n2 = 1, n3;   
    
    printf("%d %d",n1,n2);
    for(int i = 2; i < n; i++)   
    {    
        n3 = n1 + n2;    
        printf(" %d",n3);    
        n1 = n2;    
        n2 = n3;    
    } 
}