#include <stdio.h>  
int duplicate(int arr[], int c);
   
int main() {  
    int c;  
   
    printf("Enter a number ");
    scanf("%d", &c);
    int a[c];  
    printf("Enter %d numbers ", c);    
   
    for(int i = 0; i < c; i++){
        scanf("%d", &a[i]);
    }  
   
    printf("%d", duplicate(a,c));  
   
    return 0;  
}

int duplicate(int arr[], int c){
    int count = 0;
    for(int i = 0; i < c ; i++) {  
        for(int j = i+1; j < c; j++) {    
            if(arr[i]==arr[j]) {           
                count++;  
                break;  
            }  
        }  
    } 
    return count;
}