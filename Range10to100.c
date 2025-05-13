#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (number >= 10 && number <= 100) {
        printf("%d is within the range 10 to 100.\n", number);
    } else {
        printf("%d is outside the range 10 to 100.\n", number);
    }

    return 0;
}
