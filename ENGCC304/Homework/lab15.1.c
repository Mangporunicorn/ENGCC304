#include <stdio.h>
#include <string.h>
#include <ctype.h>

// ฟังก์ชันตรวจสอบว่าเป็นตัวอักษรหรือตัวเลข (ไม่ใช่ช่องว่างหรือสัญลักษณ์)
int isWordChar(char c) {
    return isalnum(c);
}

// ฟังก์ชันนับจำนวนคำในไฟล์
int countWordsInFile(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Cannot open file: %s\n", filename);
        return -1;
    }

    int count = 0;
    char c;
    int inWord = 0;

    while ((c = fgetc(file)) != EOF) {
        if (isWordChar(c)) {
            if (!inWord) {
                count++;
                inWord = 1;
            }
        } else {
            inWord = 0;
        }
    }

    fclose(file);
    return count;
}

int main() {
    char filename[100];

    printf("Enter file name:\n");
    scanf("%s", filename);

    int wordCount = countWordsInFile(filename);
    if (wordCount >= 0) {
        printf("Total number of words in '%s' : %d words\n", filename, wordCount);
    }

    return 0;
}
