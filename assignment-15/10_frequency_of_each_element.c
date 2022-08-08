#include <stdio.h>

void main()
{
    int n, i, j, ctr;
       
    printf("Enter a number ");
    scanf("%d",&n);
    int arr1[n], fr1[n];
   
    printf("Enter %d numbers ",n);
    for(i=0;i<n;i++){        
        scanf("%d",&arr1[i]);
        fr1[i] = -1;
    }

    for(i=0; i<n; i++)
    {
        ctr = 1;
        for(j=i+1; j<n; j++)
        {
            if(arr1[i]==arr1[j])
            {
                ctr++;
                fr1[j] = 0;
            }
        }

        if(fr1[i]!=0)
        {
            fr1[i] = ctr;
        }
    }
    
    for(i=0; i<n; i++)
    {
        if(fr1[i]!=0)
        {
            printf("%d occurs %d times\n", arr1[i], fr1[i]);
        }
    }
}
