#include <stdio.h>

int main(){
    int a = 7, b = 6, sp = 0;
    char c = 'A';
    c--;

    for(int i = 0; i < 7; i++){

        for(int j = 0; j < a; j++){
            printf("%c",++c);
        }

        for(int k = 0; k < sp; k++){
            printf(" ");
        }

        for(int l = 0; l < b; l++){
            if(i == 0)
                printf("%c",--c);
            else
                printf("%c",c--);    
        }
        printf("\n");
        
        if(i < 1)
            sp++;
        else
            sp += 2;    

        c = 'A';
        c--;
        a--;
        b = a;    
    }
    return 0;
}