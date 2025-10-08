#include <stdio.h>

int main() {
    char employeeID[10]; 
    int workingHours;
    float salaryPerHour;
    float totalSalary;

    printf("Input the Employees ID(Max. 10 chars): ");
    scanf("%10s", employeeID);

    printf("Input the working hrs: ");
    scanf("%d", &workingHours);

    printf("Salary amount/hr: ");
    scanf("%f", &salaryPerHour);

    totalSalary = workingHours * salaryPerHour;

    printf("----\n");
    printf("Expected Output:\n");
    printf("Employees ID = %s\n", employeeID);
    printf("Salary = U$ %.2f\n", totalSalary);

    return 0;
}
