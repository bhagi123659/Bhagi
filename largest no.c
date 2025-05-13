#include <stdio.h>

int main() {
    int num1,num2;
    printf("enter the numbers");
    scanf("%d%d",&num1,&num2);
    if(num1>num2)
    {
        printf("the largest number is:%d\n",num1);
    }
    else
    {
        printf("the largest number is:%d\n",num2);
    }
}
