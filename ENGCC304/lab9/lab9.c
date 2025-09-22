#include <stdio.h>

int main() {
    int N;
    printf("Enter N :\n");     // ขอจำนวนสมาชิกของArray
    scanf("%d", &N);

    int arr[N];                // ประกาศArrayขนาด N
    for (int i = 0; i < N; i++) {
        printf("Enter value[%d] :\n", i);
        scanf("%d", &arr[i]);  // รับค่าทีละตำแหน่ง เก็บลงใน arr[i]
    }

    // แสดงตำแหน่ง index ของArray
    printf("Index: ");
    for (int i = 0; i < N; i++) {
        printf("%d  ", i);     // พิมพ์ index ทีละตัว
    }
    printf("\n");

    // แสดงค่าของArray พร้อมตรวจสอบว่าเป็นจำนวนเฉพาะหรือไม่
    printf("Array: ");
    for (int i = 0; i < N; i++) {
        int num = arr[i];      // ดึงค่าปัจจุบันออกมา

        if (num < 2) {
            // เลขน้อยกว่า 2 (0,1,เลขลบ) ไม่ใช่จำนวนเฉพาะ
            printf("#  ");
        } else {
            int j;
            int isComposite = 0;   // flag สำหรับบอกว่าเจอตัวหารหรือยัง

            // ตรวจสอบจาก j = 2 ถึง sqrt(num)
            for (j = 2; j * j <= num; j++) {
                if (num % j == 0) {
                    // ถ้าหารลงตัว → ไม่ใช่จำนวนเฉพาะ
                    isComposite = 1;
                    break;          // ออกจากลูปทันที
                }
            }

            if (isComposite == 0) {
                // ถ้าไม่เจอตัวหารเลย → เป็นจำนวนเฉพาะ
                printf("%d  ", num);
            } else {
                // ถ้าเจอตัวหาร → ไม่ใช่จำนวนเฉพาะ
                printf("#  ");
            }
        }
    }
    printf("\n");

    return 0;   // จบโปรแกรม
}
