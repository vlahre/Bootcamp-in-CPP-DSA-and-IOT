#include <stdio.h>
int nextPrime(int);

int main(){
    int n;
    printf("Enter a number");
    scanf("%d",&n);    
    printf("next prime is:%d",nextPrime(n));
    return 0;


}

int nextPrime(int n){
    int r, flag = 0;  

    for(int i = n+1; i <= n+100; i++)
    {
        flag = 0;

        for(int j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                flag = 1;
                break;
            }
        }

        if(flag==0)
        {   
            r  = i;                
            break;
        }
   }
   return r;

}