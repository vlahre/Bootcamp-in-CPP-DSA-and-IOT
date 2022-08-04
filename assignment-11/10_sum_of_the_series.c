#include <stdio.h>

int fact(int);
void main()
{
    int sum,n;
    printf("Enter a number ");
    scanf("%d",&n);
    for(int i = 1; i <= n; i++){
        sum += fact(i)/i;
    }
  
    printf("%d",sum);
}

int fact(int n)
{
    int num = 0, f = 1;
    while(num<=n-1)
    {
        f = f + f * num;
        num++;
    }
    return f;
}
