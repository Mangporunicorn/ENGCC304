#include <stdio.h>

// ฟังก์ชันหาค่าน้อยที่สุด
int findMin(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}

// ฟังก์ชันหาค่ามากที่สุด
int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main() {
    int arr[100], n;

    printf("Enter number of values: ");
    scanf("%d", &n);

    printf("Enter value:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // แสดง Index
    printf("Index: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // แสดง Array
    printf("Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    // แสดงค่าต่ำสุดและสูงสุด
    printf("Min : %d\n", findMin(arr, n));
    printf("Max : %d\n", findMax(arr, n));

    return 0;
}
