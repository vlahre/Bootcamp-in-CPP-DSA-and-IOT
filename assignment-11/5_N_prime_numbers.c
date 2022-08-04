#include<stdio.h>
void prime(int);

int main()
{

    int n;

    printf("Enter a number ");
    scanf("%d", &n);
    prime(n);

    
    return 0;
}

void prime(int n){
    int i = 3, count, c;
    if(n >= 1)
    {
        printf("2 ");
    }


    for(count = 2; count <= n; i++)  
    {
        
        for(c = 2; c < i; c++)
        {
            if(i%c == 0)
                break;
        }

        if(c == i)  
        {
            printf("%d ", i);
            count++;   
        }

    }



}