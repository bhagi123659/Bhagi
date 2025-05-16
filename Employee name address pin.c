
#include <stdio.h>
#include <string.h>
struct Address {
    char city[50];
    int pin;
};
struct Employee {
    int id;
    char name[50];
    struct Address address;
};

int main() {
    struct Employee emp;
    emp.id = 101;
    strcpy(emp.name, "bhagi");
    strcpy(emp.address.city, "hospet");
    emp.address.pin = 583227;
    printf("Employee ID: %d\n", emp.id);
    printf("Name: %s\n", emp.name);
    printf("City: %s\n", emp.address.city);
    printf("PIN: %d\n", emp.address.pin);

    return 0;
}
