#include <stdio.h>

int main(){
    float r, PI = 3.14;   
    printf("Enter radius ");
    scanf("%f",&r);   
    printf("Area of circle is %f having the radius %f", PI*r*r, r);
    return 0;
}