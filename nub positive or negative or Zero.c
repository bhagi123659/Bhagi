#include <stdio.h>

int main() {
    int num;
    printf("enter the number");
    scanf("%d",&num);
    if(num>0){
        printf("the entred number is positive");
    }
    else if(num<0){
        printf("the entred number is negative");
    }
    else if (num=0){
        printf("the entred number is Zero");
    }

    return 0;
}
