#include <stdio.h>

int main(){
    int sp = 0, st = 5;

    for(int i = 0; i < 5; i++){

        for(int j = 0; j < st; j++){
            printf("*");
        }

        for(int k = 0; k < sp; k++){
            printf(" ");
        }

        for(int l = 0; l < st; l++){
            printf("*");
        }
        printf("\n");
        st--;
        sp += 2;
    }
    return 0;
}