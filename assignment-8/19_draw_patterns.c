#include <stdio.h>

int main(){
    int sp = 2, sp1 = 5, st = 5, st2 = 17, sp2 = 1;

    for(int i = 0; i < 13; i++){
        if(i < 3){
            for(int j = 0; j < sp; j++){
                printf(" ");
            }

            for(int j = 0; j < st; j++){
                printf("*");
            }

            for (int j = 0; j < sp1; j++)
            {
                printf(" ");
            }
            
            for(int j = 0; j < st; j++){
                printf("*");
            }
            printf("\n");
            sp--;
            st += 2;
            sp1 -= 2;
        }

        if(i == 3){
            st = 6;
            sp1 = 1;
            
            for(int j = 0; j < st; j++){
                printf("*");
            }          
            printf("MySirG");   
            
            for(int j = 0; j < st + 1; j++){
                printf("*");
            }
            printf("\n");
        }
        
        if(i >= 4){           
            
            for(int j = 0; j < sp2; j++){
                printf(" ");
            }

            for(int j = 0; j < st2; j++){
                printf("*");
            }

            for(int j = 0; j < sp2; j++){
                printf(" ");
            }
            printf("\n");
            sp2++;
            st2 -= 2;
        }
        
    }
    return 0;
}