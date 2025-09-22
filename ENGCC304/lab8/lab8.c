#include<stdio.h>
int main() {
    int position, year, project; //การกำหนดตัวแปร
    int base_salary[3] = {20000, 35000, 50000}; //เงินเดือนพื้นฐานของแต่ละตำแหน่ง (0=junior, 1=senior, 2=manager)
    int salary; //เงินเดือนพื้นฐาน
    float bonus, specialbonus, netSalary; //โบนัส, โบนัสพิเศษ, เงินเดือนสุทธิ

    printf("Position: "); //รับค่าตำแหน่ง
    scanf("%d", &position);
    printf("Years of Experience: "); //รับค่าปีที่ทำงาน    
    scanf("%d", &year);
    printf("Number of Projects Completed this Year: "); //รับค่าจำนวนโปรเจคที่ทำได้ในปีนี้
    scanf("%d", &project);

    salary = base_salary[position - 1]; //กำหนดเงินเดือนพื้นฐานตามตำแหน่ง สมมติถ้า position ไม่ลบ 1 จะเป็นการเข้าถึง index จะไม่ถูกต้อง
    if (year < 1) //กำหนดโบนัสตามปีที่ทำงาน
        bonus = 0;
    else if (year >= 1 && year <= 3)
        bonus = salary * 0.10; //10% ของเงินเดือน
    else if (year >= 4 && year <= 5)
        bonus = salary * 0.15;
    else
        bonus = salary * 0.20;

    if (project > 5)
        specialbonus = salary * 0.05; //ถ้าทำโปรเจคเกิน 5 ได้โบนัสพิเศษ 5%

    netSalary = salary + bonus + specialbonus; //คำนวณเงินเดือนสุทธิ

    printf("Base Salary: %d THB\n", salary);
    printf("Experience Bonus: %.0f THB\n", bonus);
    printf("Special Bonus: %.0f THB\n", specialbonus);
    printf("Net Salary: %.0f THB\n", netSalary);

    return 0;
}
