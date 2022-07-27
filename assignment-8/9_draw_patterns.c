#include <stdio.h>

int main(){
    int sp = 0, a = 7, n = 0;

    for(int i = 0; i < 4; i++){

        for(int j = 0; j < sp; j++){
            printf(" ");
        }

        for(int k = 0; k < a; k++){
            if(k <= a/2)
                printf("%d",++n);
            else
                printf("%d",--n);    
        }
        n = 0;

        for(int l = 0; l < sp; l++){
            printf(" ");
        }
        printf("\n");
        sp++;
        a -= 2;
    }
    return 0;
}