#include <stdio.h>

int main() {
    int days;
    long seconds;

    printf("Input Days : ");
    scanf("%d", &days);

    seconds = days * 24 * 60 * 60;

    printf("%d days = %ld seconds\n", days, seconds);

    return 0;
}
