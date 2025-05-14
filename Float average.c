
#include <stdio.h>

float calculate_average(int numbers[], int n) {
    if (n == 0) {
        return 0;
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += numbers[i];
    }

    return (float)sum / n;
}

int main() {
    int nums[] = {10, 20, 30, 40, 50};
    int n = sizeof(nums) / sizeof(nums[0]);

    float avg = calculate_average(nums, n);
    printf("Average: %.2f\n", avg);

    return 0;
}
