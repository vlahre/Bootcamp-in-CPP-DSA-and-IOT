#include <stdio.h>

int main(){
    int i,j,arr1[50][50],sum=0,n;	 
   
    printf("Input the size of the square matrix ");
    scanf("%d", &n); 
    printf("Input elements in the first matrix ");
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            
            scanf("%d",&arr1[i][j]);
            if (i==j) sum= sum+arr1[i][j];
        }
    }	 

    printf("The matrix is :\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n ;j++)
            printf("% 4d",arr1[i][j]);
        printf("\n");
    }
 
    printf("Addition of the right Diagonal elements is :%d\n",sum);
    return 0;
}
