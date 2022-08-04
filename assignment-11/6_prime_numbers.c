#include <stdio.h>
void prime(int ,int);

int main() {
   int low, high;
   printf("Enter two numbers ");
   scanf("%d %d", &low, &high);
   prime(low,high);   
   return 0;
}

void prime(int low,int high){
    int i, flag;
    while (low < high) {
        flag = 0;
      
        if (low <= 1) {
            ++low;
            continue;
        }

      
        for (i = 2; i <= low / 2; ++i) {

            if (low % i == 0) {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            printf("%d ", low);

      
        ++low;
    }

}