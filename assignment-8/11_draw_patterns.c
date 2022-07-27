#include <stdio.h>

int main(){
    int sp = 4, n = 1;
    char c = 'A';
    c--;

    for(int i = 0; i < 5; i++){

        for(int j = 0; j < sp; j++){
            printf(" ");
        }

        for(int k = 0; k < n; k++){
            if(k <= n/2)
                printf("%c",++c);
            else
                printf("%c",--c);    
        }

        for(int l = 0; l < sp; l++){
            printf(" ");
        }

        printf("\n");
        n += 2;
        sp--;
        c = 'A';
        c--;
    }
    return 0;
}