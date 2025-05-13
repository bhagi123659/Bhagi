#include <stdio.h>

int main() {
    float principal,rate,time,simpleintrest;
    printf("enter principle amount:");
    scanf("%f",&principal);
    printf("enter rate of intrest(in%%):");
    scanf("%f",&rate);
    printf("enter time(in years):");
    scanf("%f",&time);
    simpleintrest=(principal*rate*time)/100;
    printf("simple intrest=%.2f\n",simpleintrest);
    
    
    return 0;
}
