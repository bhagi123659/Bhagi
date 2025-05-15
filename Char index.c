
#include <stdio.h>

int main() {
    char myString[] = "Hello, World!";
    int i = 0;

    while (myString[i] != '\0') {
        printf("Character at index %d: %c\n", i, myString[i]);
        i++;
    }

    return 0;
}
