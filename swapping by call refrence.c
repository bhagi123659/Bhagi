#include<stdio.h>
int main(){
    int x=10,y=20,z;
    int *ptr1=&x;
    int *ptr2=&y;
    printf("before swap x=%d,y=%d",x,y);
    int temp;
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
    printf("after swaping x=%d,y=%d",x,y);
}
