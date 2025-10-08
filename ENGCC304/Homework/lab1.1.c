#include <stdio.h>

int main() {
    int a, b, c;

    printf("กรอกหมายเลขตัวที่ 1: ");
    scanf("%d", &a);

    printf("กรอกหมายเลขตัวที่ 2: ");
    scanf("%d", &b);

    printf("กรอกหมายเลขตัวที่ 3: ");
    scanf("%d", &c);

    int sum = a + b + c;
    printf("ผลรวม = %d\n", sum);

    return 0;
}
