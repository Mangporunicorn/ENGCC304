#include <stdio.h>
#include <stdbool.h>

// ฟังก์ชันตรวจสอบจำนวนเฉพาะ
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    int N;

    printf("Enter N :\n");
    scanf("%d", &N);

    int arr[N];

    for (int i = 0; i < N; i++) {
        printf("Enter value[%d] :\n", i);
        scanf("%d", &arr[i]);
    }

    // แสดง Index
    printf("Index: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // แสดง Array โดยกรองจำนวนเฉพาะ
    printf("Array: ");
    for (int i = 0; i < N; i++) {
        if (isPrime(arr[i]))
            printf("%d ", arr[i]);
        else
            printf("# ");
    }
    printf("\n");

    return 0;
}
