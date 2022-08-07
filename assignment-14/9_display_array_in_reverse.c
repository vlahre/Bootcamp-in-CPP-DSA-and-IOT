#include <stdio.h>

void main()
{
    int n;

    printf("Enter a number ");
    scanf("%d",&n);
    int a[n];

    printf("Enter %d numbers ",n);
    for(int i = 0; i < n; i++)
    {	    
	    scanf("%d",&a[i]);
	}
    
    for(int i = n-1;i >= 0; i--)
    {
	   printf("%d ",a[i]);
	}
    
} 
