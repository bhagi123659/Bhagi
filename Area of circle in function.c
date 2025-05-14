#include <stdio.h>
#define PI 3.14159

double calculateArea(double radius) {
    return PI * radius * radius;
}

int main() {
    double r = 5.0;
    double area = calculateArea(r);
    printf("Area of the circle with radius %.2f is %.2f\n", r, area);
    return 0;
}
