#include <stdio.h>
#include<math.h>
int main(){
    int i,num,isPrime=1;
    printf("enter the num");
    scanf("%d",&num);
    if(num<=1){
        isPrime=0;
    }
    else{
        for(int limit=2;i<=sqrt(num);i++){
            if(num%2==0){
                isPrime=0;
                break;
            }
        }
    }
    if(isPrime){
        printf("its a prime number");
    }
    else{
        printf("its not a prime number");
    }
    }


