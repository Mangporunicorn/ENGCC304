#include <stdio.h>

int main() {
    char employeeID[10]; // รับได้สูงสุด 10 ตัวอักษร + null terminator
    int hours;
    float rate, salary;

    printf("Input the Employees ID(Max. 10 chars):\n");
    scanf("%s", employeeID);

    printf("Input the working hrs:\n");
    scanf("%d", &hours);

    printf("Salary amount/hr:\n");
    scanf("%f", &rate);

    salary = hours * rate;

    printf("Employees ID = %s\n", employeeID);
    printf("Salary = U$ %.2f\n", salary);

    return 0;
}
