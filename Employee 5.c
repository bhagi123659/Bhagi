
#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
struct Employee employees[5];
int i;

printf("Enter information for 5 employees:\n");
 for(i = 0; i < 5; i++) {
 printf("\nEmployee %d\n", i + 1);
 printf("Enter ID: ");
 scanf("%d", &employees[i].id);
 printf("Enter Name: ");
 scanf(" %[^\n]%*c", employees[i].name);  
  printf("Enter Salary: ");
  scanf("%f", &employees[i].salary);
    }
printf("\nEmployee Information:\n");
for(i = 0; i < 5; i++) {
printf("\nEmployee %d\n", i + 1);
printf("ID: %d\n", employees[i].id);
printf("Name: %s\n", employees[i].name);
printf("Salary: %.2f\n", employees[i].salary);
    }

    return 0;
}
