#include <stdio.h>

int main() {
    int a=6;
    int*ptr=&a;
    printf("value of the pointer%d\n",a);
    *ptr=10;
    printf( "new of x%d",a);
}
    
