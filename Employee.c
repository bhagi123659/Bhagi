
#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    int n, i;
    float totalSalary = 0.0, averageSalary;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    struct Employee employees[n];
    for (i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &employees[i].id);
        printf("Name: ");
        scanf(" %[^\n]", employees[i].name);  
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
        totalSalary += employees[i].salary;
    }

    averageSalary = totalSalary / n;
    printf("\nAverage salary of employees: %.2f\n", averageSalary);

    return 0;
}
