#include <stdio.h>

int main() {
    char word[100];
    printf("Enter word:\n");
    scanf("%99s", word);

    // หาความยาวของคำ
    int len = 0;
    while (word[len] != '\0') {
        len++;
    }

    // ตรวจว่าคำนนั้นสามารถอ่านจากหน้าไปหลังและหลังไปหน้าแล้วเหมือนกันหรือไม่
    for (int i = 0; i < len / 2; i++) { //เช็ตแค่ตัวหน้าจนถึงก่อนตัวกลางก็พอ
        char a = word[i]; //ตัวแปร a เก็บตัวอักษรจากด้านหน้า เช่น "radar" → รอบแรก i=0 → a = 'r'
        char b = word[len - i - 1]; //ตัวแปร b เก็บตัวอักษรจากด้านหลัง เช่น "radar" (len = 5) → รอบแรก i=0 จะเป็น b = word[5 - 0 - 1] = word[4] = 'r'
                                    //รอบสอง i=1 จะเป็น a = 'a', b = word[5 - 1 - 1] = word[3] = 'a'
        if (a != b) { //ถ้าไม่เหมือนกัน ให้แสดง Not Pass และจบโปรแกรม
            printf("Not Pass.\n");
            return 0;
        }
    }

    printf("Pass.\n");
    return 0;
}
