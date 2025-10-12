#include <stdio.h>

int main() {
    char employeeID[10]; 
    int WH;
    float SH;
    float total;

    printf("Input the Employees ID(Max. 10 chars): ");
    scanf("%10s", employeeID);

    printf("Input the working hrs: ");
    scanf("%d", &WH);

    printf("Salary amount/hr: ");
    scanf("%f", &SH);

    total = WH * SH;

    printf("----\n");
    printf("Expected Output:\n");
    printf("Employees ID = %s\n", employeeID);
    printf("Salary = U$ %.2f\n", total);

    return 0;
}
