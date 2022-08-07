#include <stdio.h>

int main()
{
    int a[10];          
    printf("Enter 10 numbers ");
    
    for(int i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i = 0; i < 10; i++) 
    {
        int temp;
        for(int j = i+1; j < 10 ; j++)
        {
            if(a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    
   
    printf("%d",a[1]);     
    return 0;
}