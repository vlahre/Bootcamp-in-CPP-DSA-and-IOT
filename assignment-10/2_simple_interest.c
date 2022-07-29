#include <stdio.h>
float simpleInterest(float,float,float);

int main(){
    float p, t, r;
    printf("\nEnter principle amount ");
    scanf("%f",&p);
    printf("\nEnter time ");
    scanf("%f",&t);
    printf("\nEnter rate ");
    scanf("%f",&r);
    float si = simpleInterest(p,t,r);
    printf("Simple Interest : %.2f",si);
    return 0;
}

float simpleInterest(float p, float t, float r){
    return (p * t * r) / 100;
}