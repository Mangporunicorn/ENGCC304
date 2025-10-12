#include <stdio.h>

int main() {
    int H,W;
    float area;

    printf("Enter height (H): ");
    scanf("%f", &H);

    printf("Enter width (W): ");
    scanf("%f", &W);

    area = (H * W) / 2;

    printf("Area = %.1f\n", area);

    return 0;
}

