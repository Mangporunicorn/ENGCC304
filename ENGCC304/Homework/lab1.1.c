#include <stdio.h>

int main() {
    int a, b, c;

    printf("กรอกหมายเลขทั้งหมดจำนวน 3 ค่า: ");
    scanf("%d %d %d", &a, &b, &c);

    int sum = a + b + c;
    printf("Answer = %d\n", sum);

    return 0;
}
