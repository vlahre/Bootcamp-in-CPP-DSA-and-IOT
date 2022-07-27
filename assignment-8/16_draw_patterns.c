#include <stdio.h>

int main(){
    int sp = 4, sp1 = 0;

    for(int i = 0; i < 5; i++){
       if(i == 0){
            for(int j = 0; j < 5; j++){
                if(i == 0 && j == 4)
                    printf("*");
                 else
                    printf(" ");    
        }
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
        }
        if(i == 4){
            for(int k = 0; k < 9; k++){
                printf("*");
            }
        }
        printf("\n");
        sp--;
        if(i == 0)
            sp1++;
        else
            sp1 += 2;    
    }
    return 0;
}