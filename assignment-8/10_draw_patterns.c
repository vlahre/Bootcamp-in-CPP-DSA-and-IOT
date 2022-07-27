#include <stdio.h>

int main(){
    int n = 0, sp = 0, a = 4,b = 3;

    for(int i = 0; i < 4; i++){

        for(int j = 0; j < a; j++){
            printf("%d",++n);
        }

        for(int k = 0; k < sp; k++){
            printf(" ");
        }
        if(n < 4)
            n++;

        for(int l = 0; l < b; l++){
            printf("%d",--n);
        }
        printf("\n");
        a--;
        b = a;
        n = 0;        
               
        if(i >= 1)
            sp += 2;           
        else
            sp++;    
        
    }
    return 0;
}