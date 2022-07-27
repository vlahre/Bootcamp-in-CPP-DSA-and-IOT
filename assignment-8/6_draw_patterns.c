#include <stdio.h>

int main(){
    int sp = 0, st = 9;

    for(int i = 0; i < 5; i++){

        for(int j = 0; j < sp; j++){
            printf(" ");
        }

        for(int k = 0; k < st; k++){
            printf("*");
        }

        for (int l = 0; l < sp; l++)
        {
            printf(" ");
        }
        printf("\n");
        st -= 2;
        sp++;
        
    }
    return 0;
}