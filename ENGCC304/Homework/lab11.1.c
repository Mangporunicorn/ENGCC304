#include <stdio.h>
#include <math.h>

// ฟังก์ชันตรวจสอบว่าเป็นเลขอาร์มสตรองหรือไม่
int isArmstrong(int num) {
    int original = num;
    int sum = 0;
    int digits = 0;

    // นับจำนวนหลัก
    int temp = num;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    // คำนวณผลรวมของเลขยกกำลังตามจำนวนหลัก
    temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return sum == original;
}

int main() {
    int number;

    printf("Enter Number:\n");
    scanf("%d", &number);

    if (isArmstrong(number))
        printf("Pass.\n");
    else
        printf("Not Pass.\n");

    return 0;
}
