#include <stdio.h>

int main() {
    int num1,num2,a;

    printf("Enter first number ");
    scanf("%d",&num1);
    printf("Enter second number ");
    scanf("%d",&num2);
  
    printf("\nInput your option \n");
    printf("1-Addition.\n2-Substraction.\n3-Multiplication.\n4-Division.\n5-Exit.\n");
    scanf("%d",&a);

    switch(a) {
        case 1:
            printf("%d\n",num1+num2);
        break;
        
        case 2:
            printf("%d\n",num1-num2);
        break;
        
        case 3:
            printf("%d\n",num1*num2);
        break;  
      
        case 4:       
            printf("%d\n",num1/num2);        
        break;
        
        case 5: 
            break;        
      
    }
    return 0;
}
