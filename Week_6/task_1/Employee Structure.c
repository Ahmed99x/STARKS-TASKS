#include <stdio.h>
#include "DataTypes.h"

typedef struct {
    char name[20];
    u32 salary;
    u32 bonus;
    u32 deductions;
}Employee;

int main() {
    Employee Employees[3];
    u32 totalValue = 0;

    // Input employee information
    for (int i = 0; i < 3; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", &Employees[i].name);
        printf("Salary: ");
        scanf("%u", &Employees[i].salary);
        printf("Bonus: ");
        scanf("%u", &Employees[i].bonus);
        printf("Deductions: ");
        scanf("%u", &Employees[i].deductions);
        printf("\n");
    }

    // Calculate total value
    for (int i = 0; i < 3; i++) {
        totalValue += Employees[i].salary + Employees[i].bonus - Employees[i].deductions;
    }

    // Print the total value
    printf("Total value supplied by the finance team: %u\n", totalValue);

    return 0;
}