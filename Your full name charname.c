
#include <stdio.h>

int main() {
    char name[100];

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin); 

    printf("Your full name is: %s", name);

    return 0;
}
