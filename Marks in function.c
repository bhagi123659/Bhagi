
#include <stdio.h>

int main() {
    int marks[3][3]; 

for (int i = 0; i < 3; i++) {
        printf("Enter marks for Student %d:\n", i + 1);
    for (int j = 0; j < 3; j++) {
            printf("  Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

printf("\nMarks of Students:\n");
for (int i = 0; i < 3; i++) {
    printf("Student %d: ", i + 1);
    for (int j = 0; j < 3; j++) {
        printf("%d ", marks[i][j]);
       }
      printf("\n");
}

    return 0;
}
