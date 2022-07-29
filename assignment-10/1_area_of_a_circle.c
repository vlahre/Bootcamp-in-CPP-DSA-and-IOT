#include <stdio.h>
float area(int);

int main(){
    int radius;
    printf("Enter radius ");
    scanf("%d",&radius);
    float result = area(radius);
    printf("Area of circle is %.2f",result);
    return 0;
}

float area(int r){
    return 3.14 * r * r;
}