#include <stdio.h>

int main(){
    int sp = 4, st = 1;

    for(int i = 0; i < 9; i++){

        for(int j = 0; j < sp; j++){
            printf(" ");
        }

        for(int j = 0; j < st; j++){
            printf("*");
        }
        
        for(int j = 0; j < sp; j++){
            printf(" ");
        }
        printf("\n");
        if(i < 4){
            sp--;
            st += 2;
        }
        else{
            sp++;
            st -= 2;
        }
            
    }
    return 0;
}