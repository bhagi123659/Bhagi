
#include <stdio.h>

int main() {
    int num = 42;
    int *ptr; 
    ptr = &num;
    printf("Address of num: %p\n", ptr);
    printf("Value of num using pointer: %d\n", *ptr);

    return 0;
}
