#include <stdio.h>

int main() {
    int a, b, c;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Check which is the smallest
    if (a <= b && a <= c) {
        printf("%d is the smallest number.\n", a);
    } else if (b <= a && b <= c) {
        printf("%d is the smallest number.\n", b);
    } else {
        printf("%d is the smallest number.\n", c);
    }

    return 0;
}
