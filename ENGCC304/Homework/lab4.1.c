#include <stdio.h>

int main() {
    int d;
    long s;

    printf("Input Days : ");
    scanf("%d", &d);

    s = d * 86400;

    printf("%d days = %ld seconds\n", d, s);

    return 0;
}
