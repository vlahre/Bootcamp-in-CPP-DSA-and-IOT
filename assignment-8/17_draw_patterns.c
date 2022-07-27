#include <stdio.h>

int main(){
    int sp = 1,sp1 = 5;
    for(int i = 0; i < 5; i++){

        if(i == 0){
            for(int k = 0; k < 9; k++){
                printf("*");
            }
            printf("\n");
        }
        
        if(i > 0 && i < 4){
            for(int j = 0; j < sp; j++){
                printf(" ");
            }
            printf("*");
            for(int j = 0; j < sp1; j++){
                printf(" ");
            }
            printf("*");
            for(int j = 0; j < sp; j++){
                printf(" ");
            }
            printf("\n");
            sp++;
            sp1 -= 2;
        }

        if(i == 4){
            for(int j = 0; j < 5; j++){
                if(j < 4)
                    printf(" ");
                else
                    printf("*");    
            }
        }
       
    }
    return 0;
}