#include <stdio.h>

int main(){
    int st = 5;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < st; j++){
            printf("*");
        }
        printf("\n");
        st--;
    }
    return 0;
}