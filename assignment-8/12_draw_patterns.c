#include <stdio.h>

int main(){
    int sp = 0, b = 7;
    char c = 'A';
    c--;

    for(int i = 0; i < 4; i++){

        for(int j = 0; j < sp; j++){
            printf(" ");
        }

        for(int k = 0; k < b; k++){
            if(k <= b/2)
                printf("%c",++c);
            else
                printf("%c",--c);    
        }

        for(int l = 0; l < sp; l++){
            printf(" ");
        }

        printf("\n");
        sp++;
        b -= 2;
        c = 'A';
        c--;
    }
    return 0;
}