#include <stdio.h>
#include <locale.h>

int main() {
    char employeeID[11]; // รับได้สูงสุด 10 ตัวอักษร + null terminator
    int hours;
    int rate;
    long salary;

    // ตั้งค่าภาษาเพื่อให้ printf ใช้รูปแบบท้องถิ่น (สำหรับ %'ld)
    setlocale(LC_NUMERIC, "");

    printf("Input the Employees ID(Max. 10 chars): ");
    scanf("%s", employeeID);

    printf("Input the working hrs: ");
    scanf("%d", &hours);

    printf("Salary amount/hr: ");
    scanf("%d", &rate);

    salary = (long)hours * rate;

    printf("Employees ID = %s\n", employeeID);
    printf("Salary = U$ %'ld.00\n", salary);

    return 0;
}
