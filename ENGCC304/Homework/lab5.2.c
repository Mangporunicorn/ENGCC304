#include <stdio.h>

int main() {
    float score;
    char check;

    printf("enter score :\n");

    // ตรวจสอบว่าผู้ใช้กรอกเป็นตัวเลขหรือไม่
    if (scanf("%f%c", &score, &check) != 2 || check != '\n') {
        printf("please enter number only.\n");
    } else {
        if (score < 50)
            printf("F !\n");
        else if (score >= 50 && score < 55)
            printf("D !\n");
        else if (score >= 55 && score < 60)
            printf("D+ !\n");
        else if (score >= 60 && score < 65)
            printf("C !\n");
        else if (score >= 65 && score < 70)
            printf("C+ !\n");
        else if (score >= 70 && score < 75)
            printf("B !\n");
        else if (score >= 75 && score < 80)
            printf("B+ !\n");
        else if (score >= 80)
            printf("A !\n");
    }

    return 0;
}
