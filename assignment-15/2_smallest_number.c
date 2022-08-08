#include <stdio.h>
int smallestNum(int arr[], int n);

int main(){
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d numbers ",n);
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
        
    }
    printf("%d",smallestNum(a,n));
    return 0;
}

int smallestNum(int arr[], int n){
    int min = arr[0];
    for(int i = 1; i < n; i++){
        if(min > arr[i])
            min = arr[i];
    }
   
    return min;
}