#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess, score, command;

    srand(time(NULL)); // สุ่มตามเวลา

    do {
        secret = rand() % 100 + 1; // สุ่มเลข 1–100
        score = 100;

        printf("🎮 เริ่มเกมใหม่! คุณมีคะแนน 100\n");

        while (1) {
            printf("กรุณาทายตัวเลข (1-100): ");
            if (scanf("%d", &guess) != 1) {
                printf("กรุณากรอกตัวเลขเท่านั้น\n");
                while (getchar() != '\n'); // ล้าง buffer
                continue;
            }

            if (guess == secret) {
                printf("🎉 ยินดีด้วย! คุณทายถูก คะแนนของคุณคือ %d\n", score);
                break;
            } else {
                score -= 10;
                if (score <= 0) {
                    printf("คะแนนหมดแล้ว! คำตอบคือ %d\n", secret);
                    break;
                }

                if (guess < secret)
                    printf("ผิด! คำตอบมากกว่าที่คุณทาย คะแนนคงเหลือ: %d\n", score);
                else
                    printf("ผิด! คำตอบน้อยกว่าที่คุณทาย คะแนนคงเหลือ: %d\n", score);
            }
        }

        printf("พิมพ์ 1 เพื่อเล่นใหม่ หรือ -1 เพื่อออกจากเกม: ");
        scanf("%d", &command);

    } while (command == 1);

    printf("ขอบคุณที่เล่นเกม!\n");
    return 0;
}
