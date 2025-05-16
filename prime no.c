#include <stdio.h>
int i,num,isprime=1;
int main() {
    printf("enter the num");
    scanf("%d",&num);
    if(num<1){
        printf("enter the num form 2");
    }
    if(num==2){
        isprime=1;
    }
    else{
        for(i=2;i<num/2;i++){
            if(num%i==0){
                isprime=0;
                break;
            }
        }
    }
    if(num%2==0){
        printf("its not a prime number");
    }
    else{
        printf("its a prime number");
    }
    }
    
