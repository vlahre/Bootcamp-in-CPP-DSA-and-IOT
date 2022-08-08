#include <stdio.h>
int main()
{
    int n, c = 0, k;
       
    printf("Enter a number ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d numbers ",n);
    
    for(int i = 0; i < n; i++){
       
        scanf("%d",&a[i]);
    }
   
    for(int i = 0; i < n; i++)
    {
        c = 0;
        for(int j = 0,k = n; j < k+1; j++)
        {
           
            if (i != j)
            {
		       if(a[i] == a[j])
              {
                 c++;
               }
             }
        }
        if(c == 0)
        {
          printf("%d ",a[i]);
        }
    }
    return 0;   
}
