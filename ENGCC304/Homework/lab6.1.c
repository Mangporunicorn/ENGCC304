#include <stdio.h>

int main() {
    int number;

    printf("User Input :");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input. Please enter a number.\n");
        return 1;
    }

    printf("Result : ");

    if (number == 0) printf("zero\n");
    else if (number == 1) printf("one\n");
    else if (number == 2) printf("two\n");
    else if (number == 3) printf("three\n");
    else if (number == 4) printf("four\n");
    else if (number == 5) printf("five\n");
    else if (number == 6) printf("six\n");
    else if (number == 7) printf("seven\n");
    else if (number == 8) printf("eight\n");
    else if (number == 9) printf("nine\n");
    else if (number == 10) printf("ten\n");
    else if (number == 11) printf("eleven\n");
    else if (number == 12) printf("twelve\n");
    else if (number == 13) printf("thirteen\n");
    else if (number == 14) printf("fourteen\n");
    else if (number == 15) printf("fifteen\n");
    else if (number == 16) printf("sixteen\n");
    else if (number == 17) printf("seventeen\n");
    else if (number == 18) printf("eighteen\n");
    else if (number == 19) printf("nineteen\n");
    else if (number == 20) printf("twenty\n");
    else printf("out of range\n");

    return 0;
}
