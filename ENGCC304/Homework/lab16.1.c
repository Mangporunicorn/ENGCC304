#include <stdio.h>

int main() {
    int arr[] = {15, 7, 25, 3, 73, 32, 45};
    int n = sizeof(arr) / sizeof(arr[0]);

    // แสดงข้อมูลก่อนเรียง
    printf("Old Series : ");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) printf(", ");
    }
    printf("\n");

    // เรียงข้อมูลจากน้อยไปมาก (Bubble Sort)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // สลับค่า
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // แสดงข้อมูลหลังเรียง
    printf("New Series : ");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) printf(", ");
    }
    printf("\n");

    // หาตำแหน่งของเลข 32
    for (int i = 0; i < n; i++) {
        if (arr[i] == 32) {
            printf("Pos of 32 : %d\n", i);
            break;
        }
    }

    return 0;
}
