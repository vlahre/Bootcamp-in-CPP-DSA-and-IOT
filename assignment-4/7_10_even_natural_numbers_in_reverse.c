#include <stdio.h>

int main(){
    for(int i = 20; i >= 2; i--){
        if(i%2 == 0){
            printf("%d ",i);
        }
    }
    return 0;
}