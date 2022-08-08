#include <stdio.h>

void main()
{
    
    int s1, s2, s3;
    int i, j, k;
 
    printf("Enter a number ");
    scanf("%d",&s1);
    int arr1[s1];
    printf("Enter %d numbers ",s1);

    for(i=0;i<s1;i++){        
        scanf("%d",&arr1[i]);
    }

    printf("Enter a number ");
    scanf("%d",&s2);
    int arr2[s2];
    int arr3[s1 + s2];
    printf("Enter %d numbers ",s2);
    for(i=0;i<s2;i++){        
        scanf("%d",&arr2[i]);
    }


    s3 = s1 + s2;

    for(i=0;i<s1; i++)
    {
        arr3[i] = arr1[i];
    }
    for(j=0;j<s2; j++)
    {
        arr3[i] = arr2[j];
        i++; 
    }

    for(i=0;i<s3; i++)
    {
        for(k=0;k<s3-1;k++){
        
            if(arr3[k]<=arr3[k+1])
            {
                j=arr3[k+1];
                arr3[k+1]=arr3[k];
                arr3[k]=j;
            }  
        }
    }                      


    for(i=0; i<s3; i++)
    {
        printf("%d ", arr3[i]);
    }
	
}
