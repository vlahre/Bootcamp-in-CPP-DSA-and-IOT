#include <stdio.h>

int main(){
    int sp = 4, st = 1;

    for(int i = 0; i < 5; i++){

        for(int j = 0; j < sp; j++){
            printf(" ");
        }

        for(int k = 0; k < st; k++){
            printf("*");
        }
        printf("\n");
        sp--;
        st++;
    }
    return 0;
}